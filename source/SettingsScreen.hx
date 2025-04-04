package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxSave;

enum Theme
{
	BW;
	N3310;
	N6610;
	IBM;
	REVERSE;
}

class SettingsScreen extends FlxState
{
	var title:FlxText;

	var buttons:FlxTypedGroup<FlxButton>;

	var fullscreenButton:FlxButton;
	var colorButton:FlxButton;
	var backButton:FlxButton;

	var backColor:FlxColor;
	var n3310:FlxColor = FlxColor.fromString("0x80c215");
	var n6610:FlxColor = FlxColor.fromString("0x4756de");
	var reverse:FlxColor = FlxColor.WHITE;
	var bw:FlxColor = FlxColor.BLACK;
	var ibm:FlxColor = FlxColor.fromString("0x000300");

	public static var theme:Theme = BW;

	var save:FlxSave;

	override public function create()
	{
		FlxG.camera.fade(FlxColor.BLACK, 0.33, true);

		title = new FlxText(20, 0, 0, "Settings", 16);
		title.alignment = CENTER;
		title.screenCenter(X);
		add(title);

		buttons = new FlxTypedGroup<FlxButton>();

		fullscreenButton = new FlxButton(0, 0, null, setFullscreen);
		buttonSprite("FS");
		fullscreenButton.x = (FlxG.width - fullscreenButton.width) / 2;
		fullscreenButton.y = FlxG.height - fullscreenButton.height * 3 - 15;
		add(fullscreenButton);
		buttons.add(fullscreenButton);

		colorButton = new FlxButton(0, 0, null, changeColor);
		colorButton.loadGraphic(AssetPaths.colorButton__png, true, 74, 18);
		colorButton.x = (FlxG.width - colorButton.width) / 2;
		colorButton.y = FlxG.height - fullscreenButton.height * 2 - 10;
		add(colorButton);
		buttons.add(colorButton);

		backButton = new FlxButton(0, 0, null, back);
		backButton.loadGraphic(AssetPaths.backButton__png, true, 74, 18);
		backButton.x = (FlxG.width - backButton.width) / 2;
		backButton.y = FlxG.height - fullscreenButton.height - 5;
		add(backButton);
		buttons.add(backButton);

		fullscreenButton.onOver.sound = FlxG.sound.load(AssetPaths.button2__wav, 0.2);
		colorButton.onOver.sound = FlxG.sound.load(AssetPaths.button__wav, 0.2);
		backButton.onOver.sound = FlxG.sound.load(AssetPaths.button3__wav, 0.2);

		save = new FlxSave();
		save.bind("Settings");

		if (save.data.color != null)
			bgColor = save.data.color;

		backColor = bgColor;

		setTheme();

		super.create();
	}

	function setFullscreen()
	{
		FlxG.fullscreen = !FlxG.fullscreen;
		buttonSprite("FS");
		save.data.fullscreen = FlxG.fullscreen;
	}

	function buttonSprite(name:String)
	{
		switch (name)
		{
			case "FS":
				if (FlxG.fullscreen)
					fullscreenButton.loadGraphic(AssetPaths.windowedButton__png, true, 74, 18);
				else
					fullscreenButton.loadGraphic(AssetPaths.fullscreenButton__png, true, 74, 18);
		}
	}

	function buttonColor(color:FlxColor)
	{
		for (i in 0...buttons.members.length)
		{
			buttons.members[i].color = color;
		}
	}

	function back()
	{
		FlxG.switchState(new StartScreen());
		save.close();
	}

	function changeColor()
	{
		switch (theme)
		{
			case BW:
				theme = IBM;
				bgColor = FlxColor.fromString("0x000300");
				title.color = 0x00ff1a;
				buttonColor(0x00ff1a);
				save.data.color = FlxColor.fromString("0x000300");
			case IBM:
				theme = N3310;
				bgColor = FlxColor.fromString("0x80c215");
				title.color = 0x223802;
				buttonColor(0x223802);
				save.data.color = FlxColor.fromString("0x80c215");
			case N3310:
				theme = N6610;
				bgColor = FlxColor.fromString("0x4756de");
				title.color = 0x01051f;
				buttonColor(0x01051f);
				save.data.color = FlxColor.fromString("0x4756de");
			case N6610:
				theme = REVERSE;
				bgColor = FlxColor.WHITE;
				title.color = FlxColor.BLACK;
				buttonColor(FlxColor.BLACK);
				save.data.color = FlxColor.WHITE;
			case REVERSE:
				theme = BW;
				bgColor = FlxColor.BLACK;
				title.color = FlxColor.WHITE;
				buttonColor(FlxColor.WHITE);
				save.data.color = FlxColor.BLACK;
		}
	}

	function setTheme()
	{
		if (backColor == n3310)
		{
			title.color = 0x223802;
			buttonColor(0x223802);
			theme = N3310;
		}
		else if (backColor == n6610)
		{
			title.color = 0x01051f;
			buttonColor(0x01051f);
			theme = N6610;
		}
		else if (backColor == reverse)
		{
			title.color = FlxColor.BLACK;
			buttonColor(FlxColor.BLACK);
			theme = REVERSE;
		}
		else if (backColor == bw)
		{
			title.color = FlxColor.WHITE;
			buttonColor(FlxColor.WHITE);
			theme = BW;
		}
		else if (backColor == ibm)
		{
			title.color = 0x00ff1a;
			buttonColor(0x00ff1a);
			theme = IBM;
		}
	}
}
