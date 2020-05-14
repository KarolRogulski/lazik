#pragma once
#include "Cuboid.h"
#include "Walec.h"
#include "Stozek.h"
#include "WalecPion.h"
class Rakieta
{
	Stozek tip;
	WalecPion core;
	Stozek engine;
	Cuboid stabilizer1, stabilizer2, stabilizer3, stabilizer4;
	GLfloat size;
	Vector3 position, color;

public:
	Rakieta();
	void changePositions();
	void changeSizes();
	void setPos(Vector3 pos);
	void Render();
	void setSize(GLfloat s);
	void setColor(Vector3, Vector3, Vector3); //od lewej: kolor silnika, kolor cora, kolor lotek i tipa
	Vector3 getPos();
};

