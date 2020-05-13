#pragma once
#include "Cuboid.h"
#include "Walec.h"
#include "Stozek.h"
class Lazik
{
	Stozek antenna;
	Cuboid battery;
	Cuboid suspension, antennaBasis;
	Walec frontAxis, backAxis;
	Walec frontRightWheel, frontLeftWheel, backRightWheel, backLeftWheel;
	Vector3 color, position;
	float size;

public:
	Lazik();
	void changePositions();
	void changeSizes();
	void setPos(Vector3 pos);
	void Render();
	void setSize(float s);
	void setColor(Vector3 col);
	Vector3 getPos();
};

