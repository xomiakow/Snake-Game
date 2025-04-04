package;

import flixel.FlxGame;
import flixel.util.FlxSave;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		var startFullscreen:Bool = false;
		var save:FlxSave = new FlxSave();
		save.bind("Settings");
		if (save.data.fullscreen != null)
		{
			startFullscreen = save.data.fullscreen;
		}
		super();

		addChild(new FlxGame(160, 120, StartScreen, 2, 60, 60, true, startFullscreen));
		save.close();
	}
}
