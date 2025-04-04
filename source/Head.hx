package;

import flixel.FlxSprite;

class Head extends FlxSprite
{
	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);
		loadGraphic(AssetPaths.head__png, true, 4, 4);
		offset.set(1, 1);
		centerOffsets();
		setFacingFlip(LEFT, false, false);
		setFacingFlip(RIGHT, true, false);
		setFacingFlip(UP, true, false);
		setFacingFlip(DOWN, true, true);

		animation.add("ud", [1], 10, false);
		animation.add("lr", [0], 10, false);

		animation.add("openLR", [2, 0, 2], 10, false);
		animation.add("openUD", [3, 1, 3], 10, false);
	}
}
