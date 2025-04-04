package;

import SelectionScreen.*;
import StartScreen;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxPoint;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxDirection;
import flixel.util.FlxSave;

using flixel.util.FlxSpriteUtil;

class PlayState extends FlxState
{
	var score:Int = 0;
	var highscore:Int;
	var save = new FlxSave();
	var HUD:HUD;

	var gameOverSong:FlxSound;
	var appleSong:FlxSound;

	var countFrames:Float = 0; //	instead of timer

	var borders:FlxSpriteGroup;
	var wall:FlxSprite;
	var visibleWall:FlxSprite;

	var speed:Float = 3;
	var reward:Int;

	//	colors for work with color theme of the game
	var backColor:FlxColor;
	var n3310:FlxColor = FlxColor.fromString("0x80c215");
	var n6610:FlxColor = FlxColor.fromString("0x4756de");
	var reverse:FlxColor = FlxColor.WHITE;
	var bw:FlxColor = FlxColor.BLACK;
	var ibm:FlxColor = FlxColor.fromString("0x000300");

	var head:FlxSprite; //	sprite of the snake's head
	var segment:FlxSprite; //	sprite of segments of the snake's body
	var apple:FlxSprite; //	sprite of the collectable spot

	var trail:Array<FlxPoint>; //	the recordings of the snake's movements
	var body:FlxSpriteGroup; //	here all the body segments are
	var headPosition:FlxPoint; //	coordinates(x,y) of the snake's head

	var lastStep = FlxDirection.LEFT; // direction of the last movement of the snake
	var nextStep = FlxDirection.LEFT; // direstion of the next movement of the snake

	override public function create()
	{
		#if FLX_MOUSE
		FlxG.mouse.visible = false;
		#end

		gameOverSong = FlxG.sound.load(AssetPaths.end__wav, 1);
		appleSong = FlxG.sound.load(AssetPaths.aplle__wav, 1);

		backColor = bgColor;

		gameMode();

		trail = [FlxPoint.get(head.x, head.y)];

		body = new FlxSpriteGroup();
		add(body);

		for (i in 0...3) // Form deaful "start" snake
		{
			buildSnake(); //  add segment of the snake's body
			moveSnake(); // move snake to give space for body segments
		}

		spriteColor(head);
		add(head);

		apple = new Apple(-20, -20);
		spriteColor(apple);
		placeApple(); // random position for the apple
		add(apple);

		HUD = new HUD();
		add(HUD);
		hudColor();
		checkHighscore();

		super.create();
	}

	function gameMode()
	{
		if (bordered)
		{
			borders = new FlxSpriteGroup();
			add(borders);
			buildBorders();
			head = new Head(40, 80);
			reward = 7;
		}
		else
		{
			head = new Head(40, 40);
			reward = 3;
		}
	}

	function hudColor()
	{
		if (backColor == n3310)
		{
			HUD.background.makeGraphic(FlxG.width, 16, n3310);
			HUD.background.drawRect(0, 15, FlxG.width, 1, FlxColor.fromString("0x223802"));
			textColor(HUD.highscoreDisplay);
			textColor(HUD.scoreDisplay);
			textColor(HUD.textDisplay);
			textColor(HUD.gameOverText);
		}
		else if (backColor == n6610)
		{
			HUD.background.makeGraphic(FlxG.width, 16, n6610);
			HUD.background.drawRect(0, 15, FlxG.width, 1, FlxColor.fromString("0x030a38"));
			textColor(HUD.highscoreDisplay);
			textColor(HUD.scoreDisplay);
			textColor(HUD.textDisplay);
			textColor(HUD.gameOverText);
		}
		else if (backColor == reverse)
		{
			HUD.background.makeGraphic(FlxG.width, 16, reverse);
			HUD.background.drawRect(0, 15, FlxG.width, 1, FlxColor.BLACK);
			textColor(HUD.highscoreDisplay);
			textColor(HUD.scoreDisplay);
			textColor(HUD.textDisplay);
			textColor(HUD.gameOverText);
		}
		else if (backColor == bw)
		{
			HUD.background.makeGraphic(FlxG.width, 16, bw);
			HUD.background.drawRect(0, 15, FlxG.width, 1, FlxColor.WHITE);
			textColor(HUD.highscoreDisplay);
			textColor(HUD.scoreDisplay);
			textColor(HUD.textDisplay);
			textColor(HUD.gameOverText);
		}
		else if (backColor == ibm)
		{
			HUD.background.makeGraphic(FlxG.width, 16, ibm);
			HUD.background.drawRect(0, 15, FlxG.width, 1, FlxColor.fromString("0x00ff1a"));
			textColor(HUD.highscoreDisplay);
			textColor(HUD.scoreDisplay);
			textColor(HUD.textDisplay);
			textColor(HUD.gameOverText);
		}
	}

	function textColor(Text:FlxText)
	{
		if (backColor == n3310)
		{
			Text.color = 0x223802;
		}
		else if (backColor == n6610)
		{
			Text.color = 0x030a38;
		}
		else if (backColor == reverse)
		{
			Text.color = FlxColor.BLACK;
		}
		else if (backColor == bw)
		{
			Text.color = FlxColor.WHITE;
		}
		else if (backColor == ibm)
		{
			Text.color = 0x00ff1a;
		}
	}

	function spriteColor(Sprite:FlxSprite)
	{
		if (backColor == n3310)
		{
			Sprite.color = 0x223802;
		}
		else if (backColor == n6610)
		{
			Sprite.color = 0x030a38;
		}
		else if (backColor == reverse)
		{
			Sprite.color = FlxColor.BLACK;
		}
		else if (backColor == bw)
		{
			Sprite.color = FlxColor.WHITE;
		}
		else if (backColor == ibm)
		{
			Sprite.color = 0x00ff1a;
		}
	}

	function buildBorders()
	{
		for (i in 0...4)
		{
			wall = new FlxSprite(-100, -100);
			visibleWall = new FlxSprite(-100, -100);

			wall.alpha = 0;
			spriteColor(visibleWall);
			switch (i)
			{
				case 0:
					wall.makeGraphic(FlxG.width - 6, 1); //	noth wall
					wall.x = 3;
					wall.y = 18;
					borders.add(wall);
					visibleWall.makeGraphic(FlxG.width - 8, 1);
					visibleWall.x = 4;
					visibleWall.y = 19;
					add(visibleWall);
				case 1:
					wall.makeGraphic(FlxG.width - 6, 1); //	south wall
					wall.x = 3;
					wall.y = FlxG.height - 3;
					borders.add(wall);
					visibleWall.makeGraphic(FlxG.width - 8, 1);
					visibleWall.x = 4;
					visibleWall.y = FlxG.height - 4;
					add(visibleWall);
				case 2:
					wall.makeGraphic(1, FlxG.height - 20); //	west wall
					wall.x = 2;
					wall.y = 18;
					borders.add(wall);
					visibleWall.makeGraphic(1, FlxG.height - 22);
					visibleWall.x = 3;
					visibleWall.y = 19;
					add(visibleWall);
				case 3:
					wall.makeGraphic(1, FlxG.height - 20); //	east wall
					wall.x = FlxG.width - 3;
					wall.y = 18;
					borders.add(wall);
					visibleWall.makeGraphic(1, FlxG.height - 22);
					visibleWall.x = FlxG.width - 4;
					visibleWall.y = 19;
					add(visibleWall);
			}
		}
	}

	function buildSnake()
	{
		segment = new Segment(-40, -40);
		spriteColor(segment);
		body.add(segment);
	}

	function placeApple(?Object1:FlxObject, ?Object2:FlxObject)
	{
		switch (bordered)
		{
			case false:
				apple.x = FlxG.random.int(0,
					Math.floor(FlxG.width / 4) - 1) * 4; //	randomize x of the apple and place it on the screen (divided into 4x4 cells)
				apple.y = FlxG.random.int(4,
					Math.floor((FlxG.height - 16) / 4) - 1) * 4; //	randomize y of the apple and place it on the screen (divided into 4x4 cells)

				FlxG.overlap(apple, body, placeApple); // if apple was spawned in the snake - chose another place
			case true:
				apple.x = FlxG.random.int(1, Math.floor((FlxG.width - 4) / 4) - 1) * 4;
				apple.y = FlxG.random.int(5, Math.floor((FlxG.height - 4) / 4) - 1) * 4;

				FlxG.overlap(apple, body, placeApple);
		}
	}

	function moveSnake()
	{
		trail.unshift(FlxPoint.get(head.x, head.y)); // record new coordinates of the snake's head

		if (trail.length > body.members.length) // check if the recorded path of the snake is longer then the body
		{
			trail.pop(); // remove last recorded coordinates
		}

		switch (nextStep)
		{
			case UP:
				head.y -= 4;
				head.animation.play("ud");
				head.facing = UP;
			case DOWN:
				head.y += 4;
				head.animation.play("ud");
				head.facing = DOWN;
			case LEFT:
				head.x -= 4;
				head.animation.play("lr");
				head.facing = LEFT;
			case RIGHT:
				head.x += 4;
				head.animation.play("lr");
				head.facing = RIGHT;
		}

		lastStep = nextStep;

		FlxSpriteUtil.screenWrap(head, true, true, false, false); //  let snake appear from the opposite side

		if (!bordered)
		{
			if (head.y > 116)
			{
				head.y = 16;
			}
			if (head.y < 16)
			{
				head.y = 116;
			}
		}

		for (i in 0...trail.length) //	move each body segment according to the snake's head movement
		{
			body.members[i].setPosition(trail[i].x, trail[i].y);
		}
	}

	function setDirection()
	{
		if (FlxG.keys.anyPressed([UP, W]) && lastStep != DOWN)
		{
			nextStep = UP;
		}
		else if (FlxG.keys.anyPressed([DOWN, S]) && lastStep != UP)
		{
			nextStep = DOWN;
		}
		else if (FlxG.keys.anyPressed([LEFT, A]) && lastStep != RIGHT)
		{
			nextStep = LEFT;
		}
		else if (FlxG.keys.anyPressed([RIGHT, D]) && lastStep != LEFT)
		{
			nextStep = RIGHT;
		}
	}

	public function eatApple(head:Head, apple:Apple)
	{
		switch (nextStep) //	animation for eating apple
		{
			case UP:
				head.facing = UP;
				head.animation.play("openUD");
			case DOWN:
				head.facing = DOWN;
				head.animation.play("openUD");
			case LEFT:
				head.facing = LEFT;
				head.animation.play("openLR");
			case RIGHT:
				head.facing = RIGHT;
				head.animation.play("openLR");
		}

		appleSong.play();

		placeApple(); //	move apple to another point

		score += reward; //	plus 5 points to the player's score
		HUD.updateHUD(score); //	update HUD to show actual score

		buildSnake(); //	attach new segement to the snake

		speed += 0.1; //	increase movement speed
	}

	function gameOver(?Object1:FlxObject, ?Object2:FlxObject)
	{
		head.alive = false;
		head.exists = false;
		for (i in 0...body.members.length)
		{
			body.members[i].animation.play("dead");
		}

		gameOverSong.play();
		HUD.endGame();
		checkHighscore();
		save.close();
	}

	function checkHighscore()
	{
		highscore = score;

		if (save.bind("Highscore"))
		{
			if (save.data.highscore != null && save.data.highscore > highscore)
			{
				highscore = save.data.highscore;
			}
			else
			{
				save.data.highscore = highscore;
			}
		}

		HUD.updateHighscore(highscore);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		if (head.alive)
		{
			FlxG.overlap(head, apple, eatApple);
			FlxG.overlap(head, body, gameOver);

			if (bordered)
			{
				FlxG.overlap(head, borders, gameOver);
			}

			countFrames += speed;

			setDirection();

			if (countFrames > 60 && head.alive)
			{
				moveSnake();
				countFrames = 0;
			}
		}

		if (!head.exists && FlxG.keys.justPressed.R)
		{
			FlxG.resetState();
		}

		if (FlxG.keys.justPressed.ESCAPE)
		{
			FlxG.switchState(new StartScreen());
		}
	}
}
