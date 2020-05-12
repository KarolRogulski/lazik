#include "Stozek.h"


Stozek::Stozek() {
	radius = 30.0;
	height = 50.0;
	color = { 1.0, 0.0, 0.0 };
	position = { 0.0, 0.0, 0.0 };
}

void Stozek::Render()
{
	double x, y, alpha, PI = 3.14;

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(color.x, color.y, color.z);
	glVertex3d(position.x, position.y, position.z + height);
	for (alpha = 0; alpha <= 2 * PI; alpha += PI / 20.0)
	{
		x = radius * sin(alpha);
		y = radius * cos(alpha);
		glVertex3d(x + position.x, y + position.y, position.z);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(color.x, color.y, 0.0);
	glVertex3d(position.x, position.y, position.z);
	for (alpha = 0; alpha <= 2 * PI; alpha += PI / 20.0)
	{
		x = radius * sin(alpha);
		y = radius * cos(alpha);
		glVertex3d(x + position.x, y + position.y, position.z);
	}
	glEnd();
}


void Stozek::setPos(Vector3 pos)
{
	position = pos;
}


void Stozek::setColor(Vector3 col)
{
	color = col;
}


void Stozek::setSize(float r, float h)
{
	radius = r;
	height = h;
}


Vector3 Stozek::getPos()
{
	return position;
}
