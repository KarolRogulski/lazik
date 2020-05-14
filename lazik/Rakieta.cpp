#include "Rakieta.h"

Rakieta::Rakieta() {
	size = 50;
	color = { 1.0, 0.0, 0.0 };
	position = {0.0, 0.0, 0.0};
	changeSizes();
	changePositions();
	setColor(color, color, color);
}

void Rakieta::setPos(Vector3 pos) {
	position = pos;
	changePositions();
}

void Rakieta::setColor(Vector3 col1, Vector3 col2, Vector3 col3) {
	engine.setColor(col1);
	core.setColor(col2);
	tip.setColor(col3);
	stabilizer1.setColor(col3);
	stabilizer2.setColor(col3);
	stabilizer3.setColor(col3);
	stabilizer4.setColor(col3);
}

void Rakieta::setSize(GLfloat s) {
	size = s;
}

void Rakieta::changePositions() {
	core.setPos({ position.x, position.z, position.y + size * 0.3f }); //z jest wysokoscia cora, bo pionowy walec ma zamienione y i z
	tip.setPos({ position.x, position.y + size * 2.3f, position.z });
	engine.setPos({ position.x, position.y, position.z });
	stabilizer1.setPos({ position.x - size * 0.025f, position.y - size * 0.1f, position.z + size * 0.2f });
	stabilizer3.setPos({ position.x - size * 0.025f, position.y - size * 0.1f, position.z - size * 0.4f });
	stabilizer2.setPos({ position.x + size * 0.2f, position.y - size * 0.1f, position.z - size * 0.025f });
	stabilizer4.setPos({ position.x - size * 0.4f, position.y - size * 0.1f, position.z - size * 0.025f });
}

void Rakieta::changeSizes() {
	core.setSize(size * 0.2f, size * 2.f);
	tip.setSize(size * 0.2f, size * 0.5f);
	engine.setSize(size * 0.15f, size * 0.8f );
	stabilizer1.setSize(size * 0.05f, size * 0.9f, size * 0.2f);
	stabilizer3.setSize(size * 0.05f, size * 0.9f, size * 0.2f);
	stabilizer2.setSize(size * 0.2f, size * 0.9f, size * 0.05f);
	stabilizer4.setSize(size * 0.2f, size * 0.9f, size * 0.05f);
}

void Rakieta::Render() {
	core.Render();
	tip.Render();
	engine.Render();
	stabilizer1.Render();
	stabilizer2.Render();
	stabilizer3.Render();
	stabilizer4.Render();
}

Vector3 Rakieta::getPos() {
	return position;
}