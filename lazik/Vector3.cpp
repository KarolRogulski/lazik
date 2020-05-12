#include "Vector3.h"

Vector3 Vector3::operator+(const Vector3& v) {
	Vector3 vector;
	vector.x = this->x + v.x;
	vector.y = this->y + v.y;
	vector.z = this->z + v.z;
	return vector;
}
