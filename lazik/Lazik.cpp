#include "Lazik.h"

Lazik::Lazik() {
	/*battery = Cuboid();
	suspension = Cuboid();
	frontAxis = Walec();
	backAxis = Walec();
	frontRightWheel = Walec(); 
	frontLeftWheel = Walec(); 
	backRightWheel = Walec(); 
	backLeftWheel = Walec();
	antennaBasis = Cuboid();
	antenna = Stozek();*/
	size = 50;
	color = { 1.0, 0.0, 0.0 };
	position = { -size/ 2.0f , 0.0, -size/2.0f };
	changeSizes();
	changePositions();
}

void Lazik::changePositions() {
	Vector3 p = position;
	antennaBasis.setPos({ p.x, p.y + size * 0.5f, p.z + size * 0.2f });
	antenna.setPos({p.x + size * 0.1f, p.y + size * 0.6f, p.z + size * 0.3f });
	suspension.setPos({p.x - size * 0.1f, p.y, p.z + size * 0.15f});
	battery.setPos({ p.x, p.y + size * 0.5f, p.z + size * 0.7f});

	frontAxis.setPos({ p.x, p.y, p.z });
	frontRightWheel.setPos({ p.x, p.y, p.z });
	frontLeftWheel.setPos({ p.x, p.y, p.z + size});
	p.x += size;

	backAxis.setPos({p.x, p.y, p.z });
	backLeftWheel.setPos({ p.x, p.y, p.z});
	backRightWheel.setPos({ p.x, p.y, p.z + size});
}

void Lazik::changeSizes() {
	battery.setSize(size * 1.0f, size * 0.1f, size * 0.2f);
	antenna.setSize(size * 0.05f, size);
	antennaBasis.setSize(size * 0.2f, size * 0.1f, size * 0.2f);
	suspension.setSize(size * 1.2f, size * 0.5f, size * 0.8f);
	frontAxis.setSize(size * 0.05, size);
	backAxis.setSize(size * 0.05, size);
	float wheelWidthRatio = 0.2;
	float wheelHeghtRatio = 0.1;
	frontRightWheel.setSize(size * wheelWidthRatio, size * wheelHeghtRatio);
	frontLeftWheel.setSize(size * wheelWidthRatio, size * wheelHeghtRatio);
	backRightWheel.setSize(size * wheelWidthRatio, size * wheelHeghtRatio);
	backLeftWheel.setSize(size * wheelWidthRatio, size * wheelHeghtRatio);
}

void Lazik::setPos(Vector3 pos)
{
	position = pos;
}


void Lazik::Render()
{
	antenna.Render();
	antennaBasis.Render();
	battery.Render();
	suspension.Render();
	frontAxis.Render();
	backAxis.Render();
	frontRightWheel.Render();
	frontLeftWheel.Render();
	backRightWheel.Render();
	backLeftWheel.Render();;
}


void Lazik::setSize(float s)
{
	size = s;
}


void Lazik::setColor(Vector3 col)
{
	color = col;
}

Vector3 Lazik::getPos() {
	return position;
}