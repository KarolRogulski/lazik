#pragma once
#include <windows.h>            // Window defines
#include <gl\gl.h>              // OpenGL
#include <gl\glu.h>             // GLU library
#include <math.h>				// Define for sqrt
#include <stdio.h>
#include "resource.h"           // About box resource identifiers.
#include "..\RESOURCE1.H"
class Vector3
{
public:
	GLfloat x, y, z;

	Vector3 operator+ (const Vector3& v);
};

