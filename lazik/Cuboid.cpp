#include "Cuboid.h"

Cuboid::Cuboid() {
	width = 30.0;
	height = 50.0;
	depth = 20.0;
	color = { 1.0, 0.0, 0.0 };
	position = { 0.0, 0.0, 0.0 };
}

void Cuboid::setPos(Vector3 pos)
{
	position = pos;
}


void Cuboid::Render()
{
	GLfloat s1[3] = { position.x, position.y, position.z };
	GLfloat s2[3] = { position.x + width, position.y, position.z };
	GLfloat s3[3] = { position.x, position.y + height, position.z };
	GLfloat s4[3] = { position.x + width, position.y + height, position.z };
	GLfloat s5[3] = { position.x , position.y, position.z + depth };
	GLfloat s6[3] = { position.x + width, position.y, position.z + depth };
	GLfloat s7[3] = { position.x, position.y + height, position.z + depth };
	GLfloat s8[3] = { position.x + width, position.y + height, position.z + depth };

	//sciana przednia 1234
	glColor3f(color.x, color.y, color.z);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3fv(s1);
	glVertex3fv(s2);
	glVertex3fv(s3);
	glVertex3fv(s4);
	glEnd();
	//sciana tylna 5678
	glColor3f(0.8, 0.2, 0.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3fv(s5);
	glVertex3fv(s6);
	glVertex3fv(s7);
	glVertex3fv(s8);
	glEnd();
	//sciana dolna 1256
	glColor3f(0.1, 0.5, 0.7);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3fv(s1);
	glVertex3fv(s2);
	glVertex3fv(s5);
	glVertex3fv(s6);
	glEnd();
	//sciana gorna 3478
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3fv(s3);
	glVertex3fv(s4);
	glVertex3fv(s7);
	glVertex3fv(s8);
	glEnd();
	//sciana prawa 2468
	glColor3f(0.9, 0.1, 0.9);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3fv(s2);
	glVertex3fv(s4);
	glVertex3fv(s6);
	glVertex3fv(s8);
	glEnd();
	//sciana lewa 1357
	glColor3f(color.x, color.y, 1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3fv(s1);
	glVertex3fv(s3);
	glVertex3fv(s5);
	glVertex3fv(s7);
	glEnd();

}


void Cuboid::setSize(float w, float h, float d)
{
	width = w;
	height = h;
	depth = d;
}


void Cuboid::setColor(Vector3 col)
{
	color = col;
}

Vector3 Cuboid::getPos() {
	return position;
}