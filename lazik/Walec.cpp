#include "Walec.h"

void Walec::Render()
{
	double x, y, alpha, PI = 3.14;
	glBegin(GL_TRIANGLE_FAN);
	glColor3d(color.x, color.y, color.z);
	glVertex3d(position.x, position.y, position.z);
	for (alpha = 0; alpha <= 2 * PI; alpha += PI / 20.0)
	{
		x = radius * sin(alpha);
		y = radius * cos(alpha);
		glVertex3d(x + position.x, y + position.y, position.z);
	}
	glEnd();


	glBegin(GL_TRIANGLE_STRIP);
	glColor3d(color.x, color.y, color.z);
	for (alpha = 0.0; alpha <= 2 * PI; alpha += PI / 20.0)
	{
		x = radius * sin(alpha);
		y = radius * cos(alpha);
		glVertex3d(x + position.x, y + position.y, position.z);
		glVertex3d(x + position.x, y + position.y, position.z + height);
	}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(color.x, color.y, color.z);
	glVertex3d(position.x, position.y, position.z + height);
	for (alpha = 0; alpha >= -2 * PI; alpha -= PI / 20.0)
	{
		x = radius * sin(alpha);
		y = radius * cos(alpha);
		glVertex3d(x + position.x, y + position.y, position.z + height);
	}
	glEnd();
}


void Walec::setPos(Vector3 pos)
{
	position = pos;
}


void Walec::setSize(float r, float h)
{
	radius = r;
	height = h;
}

void Walec::setColor(Vector3 col) {
	color = col;
}

Walec::Walec() {
	radius = 5.0;
	height = 30.0;
	color = { 1.0, 0.0, 0.0 };
	position = { 0.0, 0.0, 0.0 };
}

Vector3 Walec::getPos()
{
	return position;
}
