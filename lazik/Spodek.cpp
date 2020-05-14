#include "Spodek.h"

Spodek::Spodek() {
	size = 50;
	color = { 1.0, 0.0, 0.0 };
	position = { 0.0, 0.0, 0.0 };
	changeSizes();
	changePositions();
	setColor(color, color, color);
}

void Spodek::changePositions() {
	bottom.setPos({ position.x, position.y + size * 0.4f, position.z });
	top.setPos({position.x, position.y + size * 0.3f, position.z});
	light1.setPos({ position.x + size * 1.4f, position.y + size * 0.4f, position.z });
	light2.setPos({ position.x - size * 1.4f, position.y + size * 0.4f, position.z });
	light3.setPos({ position.x, position.y + size * 0.4f, position.z + size * 1.4f });
	light4.setPos({ position.x, position.y + size * 0.4f, position.z - size * 1.4f });
}

void Spodek::changeSizes() {
	top.setSize(size, size * 0.4f);
	bottom.setSize(size * 1.8f, -size * 0.6f);
	light1.setSize(size * 0.1f, size * 0.1f);
	light2.setSize(size * 0.1f, size * 0.1f);
	light3.setSize(size * 0.1f, size * 0.1f);
	light4.setSize(size * 0.1f, size * 0.1f);
}

Vector3 Spodek::getPos() {
	return position;
}

void Spodek::Render() {
	top.Render();
	bottom.Render();
	light1.Render();
	light2.Render();
	light3.Render();
	light4.Render();
}

void Spodek::setColor(Vector3 colTop, Vector3 colBot, Vector3 colLig) {
	top.setColor(colTop);
	bottom.setColor(colBot);
	light1.setColor(colLig);
	light2.setColor(colLig);
	light3.setColor(colLig);
	light4.setColor(colLig);
}

void Spodek::setPos(Vector3 pos) {
	position = pos;
}

void Spodek::setSize(GLfloat s) {
	size = s;
}