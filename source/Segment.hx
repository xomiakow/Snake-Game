package;

import flixel.FlxSprite;

class Segment extends FlxSprite
{
	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);

		loadGraphic(AssetPaths.segment__png, true, 4, 4);

		setFacingFlip(LEFT, false, false);
		setFacingFlip(RIGHT, true, false);
		setFacingFlip(UP, false, false);
		setFacingFlip(DOWN, true, true);

		animation.add("dead", [2], 1, false);
	}
}
