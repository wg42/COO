#include "Point.h"

/*
*	Constructeur d'un point
*/
Point::Point()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->color = NULL;
}

Point::Point(int x, int y, int z, int color)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->color = color;
}

Point::Point(Point p)
{
	this->x = p.getX();
	this->y = p.getY();
	this->z = p.getZ();
	this->color = p.getColor();
}

// Attribue une valeur a l'axe des Z
int Point::getX()
{
	return (this->x)
}

void Point::setX(int x)
{
	this->x = x;
}

// Attribue une valeur a l'axe des Z
int Point::getY()
{
	return (this->y);
}

char Point::getColor()
{
	return (this->color);
}

void Point::setY(int y)
{
	this->y = y;
}

// Attribue une valeur a l'axe des Z
int Point::getZ()
{
	return (this->z);
}

void Point::setZ(int z)
{
	this->z = z;
}

/*
*	Permet d'additionner deux points
*/
Point Point::addition(Point a, Point b)
{
	return (a + b);
}

/*
*	Permet de verifier l egaliter de deux points
*/
Point Point::isEqual(Point a, Point b)
{
	return (a == b);
}

void Point::translation(int x, int y, int z)
{
	this->x += x;
	this->y += y;
    this->z += z;
}


void Point::rotation(LONG x, LONG y, LONG z)
{

}

/*Point Point::rotate_point(float cx, float cy, float z)
{
  float s = sin(angle);
  float c = cos(angle);

  // translate point back to origin:
  p.x -= cx;
  p.y -= cy;

  // rotate point
  float xnew = p.x * c - p.y * s;
  float ynew = p.x * s + p.y * c;

  // translate point back:
  p.x = xnew + cx;
  p.y = ynew + cy;
  return p;
}*/
