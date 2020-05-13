#pragma once
#include "Vector3.h"
#include <windows.h>            // Window defines
#include <gl\gl.h>              // OpenGL
#include <gl\glu.h>             // GLU library
#include <cmath>				// Define for sqrt
#include <stdio.h>
#include "resource.h"           // About box resource identifiers.
#include "..\RESOURCE1.H"
#include "iostream"
#include "array"
class Teren
{
	Vector3** points = new Vector3* [100];
	//Vector3* points = new Vector3[10000];
	
	GLfloat Ft(GLfloat, GLfloat);
public:
	Teren();
	~Teren();
	void Render();
};

