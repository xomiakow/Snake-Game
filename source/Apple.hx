package;

import flixel.FlxSprite;

class Apple extends FlxSprite
{
	public var scorePoints:Int;

	public function new(x:Float, y:Float)
	{
		super(x, y);
		loadGraphic(AssetPaths.apple__png, false, 4, 4);
		offset.set(1, 1);
		centerOffsets();
	}
}
