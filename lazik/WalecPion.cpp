#include "WalecPion.h"

void WalecPion::Render() {
	double x, y, alpha, PI = 3.14;
	glBegin(GL_TRIANGLE_FAN);
	glColor3d(color.x, color.y, color.z);
	glVertex3d(position.x, position.z, position.y );
	for (alpha = 0; alpha <= 2 * PI; alpha += PI / 20.0)
	{
		x = radius * sin(alpha);
		y = radius * cos(alpha);
		glVertex3d(x + position.x, position.z, y + position.y);
	}
	glEnd();


	glBegin(GL_TRIANGLE_STRIP);
	glColor3d(color.x, color.y, color.z);
	for (alpha = 0.0; alpha <= 2 * PI; alpha += PI / 20.0)
	{
		x = radius * sin(alpha);
		y = radius * cos(alpha);
		glVertex3d(x + position.x, position.z, y + position.y);
		glVertex3d(x + position.x, position.z + height, y + position.y);
	}

	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3d(color.x, color.y, color.z);
	glVertex3d(position.x, position.z + height, position.y );
	for (alpha = 0; alpha >= -2 * PI; alpha -= PI / 20.0)
	{
		x = radius * sin(alpha);
		y = radius * cos(alpha);
		glVertex3d(x + position.x, position.z + height, y + position.y);
	}
	glEnd();
}

WalecPion::WalecPion() {
	radius = 5.0;
	height = 30.0;
	color = { 1.0, 0.0, 0.0 };
	position = { 0.0, 0.0, 0.0 };
}

void WalecPion::setPos(Vector3 pos)
{
	position = pos;
}


void WalecPion::setSize(float r, float h)
{
	radius = r;
	height = h;
}

void WalecPion::setColor(Vector3 col) {
	color = col;
}

Vector3 WalecPion::getPos()
{
	return position;
}

