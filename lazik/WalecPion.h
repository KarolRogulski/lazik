#pragma once
#include "Vector3.h"
#include <windows.h>            // Window defines
#include <gl\gl.h>              // OpenGL
#include <gl\glu.h>             // GLU library
#include <math.h>				// Define for sqrt
#include <stdio.h>
#include "resource.h"           // About box resource identifiers.
#include "..\RESOURCE1.H"
class WalecPion
{
	GLfloat radius;
	GLfloat height;

	Vector3 color;
	Vector3 position;
public:
	WalecPion();
	void Render();
	void setPos(Vector3 position);
	void setSize(float r, float h);
	void setColor(Vector3 col);
	Vector3 getPos();
};

