#include "Teren.h"

Teren::Teren() {

	for (int i = 0; i < 100; i++) {
		points[i] = new Vector3[100];
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			points[i][j].x = i * 20 - 1000;
			points[i][j].z = j * 20 - 1000;
			points[i][j].y = Ft(i, j);
		}
	}

}

Teren::~Teren() {
	for (int i = 0; i < 100; i++) {
		delete [] points[i];
	}
	delete [] points;
}

void Teren::Render() {

	for (int i = 0; i < 99; i++) {
		glBegin(GL_TRIANGLE_STRIP);
		for (int j = 0; j < 100; j++) {
			glColor3d(1.0 - i / 100.0, 1 - j / 100.0, i / 100.0);
			for (int k = 0; k < 2; k++) {
				Vector3 point = points[i + k][j];
				glVertex3d(point.x, point.y, point.z);
			}
		}
		glEnd();
	}
}

GLfloat Teren::Ft(GLfloat x, GLfloat y) {
	if (x < 60 && x > 40 && y < 60 && y > 40)
		return -10.0;
	return 10 * sin(x/4.0) + 14 * cos(y/5.0);
}