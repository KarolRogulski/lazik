#pragma once
#include "Cuboid.h"
#include "Walec.h"
#include "Stozek.h"
#include "WalecPion.h"
class Spodek
{
	Stozek bottom, top, light1, light2, light3, light4;
	Vector3 color, position;
	GLfloat size;

public:
	Spodek();
	void changePositions();
	void changeSizes();
	void setPos(Vector3 pos);
	void Render();
	void setSize(GLfloat s);
	void setColor(Vector3, Vector3, Vector3); //gorny dolny swiatla
	Vector3 getPos();
};

