package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;

using flixel.util.FlxSpriteUtil;

class HUD extends FlxTypedGroup<FlxSprite>
{
	public var background:FlxSprite;
	public var scoreDisplay:FlxText;
	public var highscoreDisplay:FlxText;
	public var textDisplay:FlxText;
	public var gameOverText:FlxText;

	public function new()
	{
		super();
		background = new FlxSprite();
		scoreDisplay = new FlxText(0, 1, 0, "0000", 8);
		highscoreDisplay = new FlxText((FlxG.width - scoreDisplay.width), 1, 0, "0000", 8);
		textDisplay = new FlxText((highscoreDisplay.x - highscoreDisplay.width * 2 + 2), 1, 0, "Highscore:", 8);
		gameOverText = new FlxText(FlxG.width / 2 - 45, FlxG.height / 2 - 16, 0, "     Game Over\nPress R to restart\n Press ESC to exit", 8);
		gameOverText.visible = false;
		gameOverText.alpha = 0;

		add(background);
		add(highscoreDisplay);
		add(textDisplay);
		add(scoreDisplay);
		add(gameOverText);
		forEach(function(sprite) sprite.scrollFactor.set(0, 0));
	}

	public function updateHUD(score:Int)
	{
		if (score <= 9)
			scoreDisplay.text = "000" + Std.string(score);
		else if (score <= 99)
			scoreDisplay.text = "00" + Std.string(score);
		else if (score <= 999)
			scoreDisplay.text = "0" + Std.string(score);
		else
			scoreDisplay.text = Std.string(score);
	}

	public function updateHighscore(highscore:Int)
	{
		if (highscore <= 9)
			highscoreDisplay.text = "000" + Std.string(highscore);
		else if (highscore <= 99)
			highscoreDisplay.text = "00" + Std.string(highscore);
		else if (highscore <= 999)
			highscoreDisplay.text = "0" + Std.string(highscore);
		else
			highscoreDisplay.text = Std.string(highscore);
	}

	public function endGame()
	{
		gameOverText.visible = true;
		FlxTween.tween(gameOverText, {alpha: 1}, 1.6);
	}
}
