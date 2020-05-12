#pragma once
#include "Vector3.h"

class Stozek
{
	float radius, height;
	Vector3 position, color;
public:
	Stozek();
	void Render();
	void setPos(Vector3 pos);
	void setColor(Vector3 col);
	void setSize(float r, float h);
	Vector3 getPos();
};

