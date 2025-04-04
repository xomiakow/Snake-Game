package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.system.debug.interaction.tools.Pointer.GraphicCursorCross;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxSave;

class StartScreen extends FlxState
{
	var titleText:FlxText;

	var title:FlxSprite;

	var playButton:FlxButton;
	var settingsButton:FlxButton;
	var exitButton:FlxButton;

	var buttons:FlxTypedGroup<FlxButton>;

	var backColor:FlxColor;
	var n3310:FlxColor = FlxColor.fromString("0x80c215");
	var n6610:FlxColor = FlxColor.fromString("0x4756de");
	var reverse:FlxColor = FlxColor.WHITE;
	var bw:FlxColor = FlxColor.BLACK;
	var ibm:FlxColor = FlxColor.fromString("0x000300");

	var cursor:GraphicCursorCross;

	var save:FlxSave;

	override public function create()
	{
		FlxG.camera.fade(FlxColor.BLACK, 0.33, true);

		#if FLX_MOUSE
		FlxG.mouse.visible = true;
		#end

		save = new FlxSave();
		save.bind("Settings");

		if (save.data.color != null)
			bgColor = save.data.color;

		backColor = bgColor;

		title = new FlxSprite(20, 5);
		title.loadGraphic(AssetPaths.title__png, false, 58, 22);
		title.screenCenter(X);
		add(title);

		buttons = new FlxTypedGroup<FlxButton>();

		playButton = new FlxButton(0, 0, null, clickPlay);
		playButton.loadGraphic(AssetPaths.playButton__png, true, 74, 18);
		playButton.x = (FlxG.width - playButton.width) / 2;
		playButton.y = FlxG.height - playButton.height * 3 - 15;
		add(playButton);
		buttons.add(playButton);

		settingsButton = new FlxButton(0, 0, null, clickSettings);
		settingsButton.loadGraphic(AssetPaths.settingsButton__png, true, 74, 18);
		settingsButton.x = (FlxG.width - settingsButton.width) / 2;
		settingsButton.y = FlxG.height - playButton.height * 2 - 10;
		add(settingsButton);
		buttons.add(settingsButton);

		exitButton = new FlxButton(0, 0, null, clickExit);
		exitButton.loadGraphic(AssetPaths.exitButton__png, true, 74, 18);
		exitButton.x = (FlxG.width - exitButton.width) / 2;
		exitButton.y = FlxG.height - playButton.height - 5;
		add(exitButton);
		buttons.add(exitButton);

		playButton.onOver.sound = FlxG.sound.load(AssetPaths.button2__wav, 0.2);
		settingsButton.onOver.sound = FlxG.sound.load(AssetPaths.button2__wav, 0.2);
		exitButton.onOver.sound = FlxG.sound.load(AssetPaths.button3__wav, 0.2);

		setTheme();
	}

	function clickPlay()
	{
		save.close();
		FlxG.switchState(new SelectionScreen());
	}

	function clickSettings()
	{
		save.close();
		FlxG.switchState(new SettingsScreen());
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
		if (backColor == n3310)
		{
			title.color = 0x223802;
			buttonColor(0x223802);
		}
		else if (backColor == n6610)
		{
			title.color = 0x01051f;
			buttonColor(0x01051f);
		}
		else if (backColor == reverse)
		{
			title.color = FlxColor.BLACK;
			buttonColor(FlxColor.BLACK);
		}
		else if (backColor == bw)
		{
			title.color = FlxColor.WHITE;
			buttonColor(FlxColor.WHITE);
		}
		else if (backColor == ibm)
		{
			title.color = 0x00ff1a;
			buttonColor(0x00ff1a);
		}
	}

	function clickExit()
	{
		save.close();
		Sys.exit(0);
	}
}
