package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

class SelectionScreen extends FlxState
{
	var titleSS:FlxText;

	var borderButton:FlxButton;
	var unborderButton:FlxButton;
	var backButton:FlxButton;

	var buttons:FlxTypedGroup<FlxButton>;

	var backColorSS:FlxColor;
	var n3310SS:FlxColor = FlxColor.fromString("0x80c215");
	var n6610SS:FlxColor = FlxColor.fromString("0x4756de");
	var reverseSS:FlxColor = FlxColor.WHITE;
	var bwSS:FlxColor = FlxColor.BLACK;
	var ibmSS:FlxColor = FlxColor.fromString("0x000300");

	public static var bordered:Bool;

	override public function create()
	{
		FlxG.camera.fade(FlxColor.BLACK, 0.33, true);

		backColorSS = bgColor;

		titleSS = new FlxText(20, 0, 0, "Choose\ngame mode", 16);
		titleSS.alignment = CENTER;
		titleSS.screenCenter(X);
		add(titleSS);

		buttons = new FlxTypedGroup<FlxButton>();

		borderButton = new FlxButton(0, 0, null, borderedMode);
		borderButton.loadGraphic(AssetPaths.borderButton__png, true, 74, 18);
		borderButton.x = FlxG.width / 2 - borderButton.width;
		borderButton.y = FlxG.height / 2 + 10;
		add(borderButton);
		buttons.add(borderButton);

		unborderButton = new FlxButton(0, 0, null, unborderedMode);
		unborderButton.loadGraphic(AssetPaths.unborderButton__png, true, 74, 18);
		unborderButton.x = FlxG.width / 2;
		unborderButton.y = FlxG.height / 2 + 10;
		add(unborderButton);
		buttons.add(unborderButton);

		backButton = new FlxButton(0, 0, null, back);
		backButton.loadGraphic(AssetPaths.backButton__png, true, 74, 18);
		backButton.x = (FlxG.width - backButton.width) / 2;
		backButton.y = unborderButton.y + unborderButton.height + 4;
		add(backButton);
		buttons.add(backButton);

		borderButton.onOver.sound = FlxG.sound.load(AssetPaths.button2__wav, 0.2);
		unborderButton.onOver.sound = FlxG.sound.load(AssetPaths.button2__wav, 0.2);
		backButton.onOver.sound = FlxG.sound.load(AssetPaths.button3__wav, 0.2);

		setTheme();
	}

	function back()
	{
		FlxG.switchState(new StartScreen());
	}

	function borderedMode()
	{
		bordered = true;
		FlxG.switchState(new PlayState());
	}

	function unborderedMode()
	{
		bordered = false;
		FlxG.switchState(new PlayState());
	}

	function buttonColor(color:FlxColor)
	{
		for (i in 0...buttons.members.length)
		{
			buttons.members[i].color = color;
		}
	}

	function setTheme()
	{
		if (backColorSS == n3310SS)
		{
			titleSS.color = 0x223802;
			buttonColor(0x223802);
		}
		else if (backColorSS == n6610SS)
		{
			titleSS.color = 0x01051f;
			buttonColor(0x01051f);
		}
		else if (backColorSS == reverseSS)
		{
			titleSS.color = FlxColor.BLACK;
			buttonColor(FlxColor.BLACK);
		}
		else if (backColorSS == bwSS)
		{
			titleSS.color = FlxColor.WHITE;
			buttonColor(FlxColor.WHITE);
		}
		else if (backColorSS == ibmSS)
		{
			titleSS.color = 0x00ff1a;
			buttonColor(0x00ff1a);
		}
	}
}
