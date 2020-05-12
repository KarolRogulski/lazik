#pragma once
#include "Vector3.h"
#include <windows.h>            // Window defines
#include <gl\gl.h>              // OpenGL
#include <gl\glu.h>             // GLU library
#include <math.h>				// Define for sqrt
#include <stdio.h>
#include "resource.h"           // About box resource identifiers.
#include "..\RESOURCE1.H"
class Cuboid
{
	float height, width, depth;
	Vector3 color, position;

public:
	Cuboid();
	void Render();
	void setPos(Vector3 pos);
	void setSize(float w, float h, float d);
	void setColor(Vector3 col);
	Vector3 getPos();
};

