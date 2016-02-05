#include "../headers/Point.h"

/*
*	Constructeur d'un point
*/
Point::Point(int x, int y, int z, char *color)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->color = color;
}

// Attribue une valeur a l'axe des Z
void Point::setX(int x)
{
	this->x = x;
}

// Attribue une valeur a l'axe des Z
void Point::setY(int y)
{
	this->y = y;
}

// Attribue une valeur a l'axe des Z
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

Point Point::translation(int x, int y, int z)
{
	int	xx, yy, zz;
	xx = this->x + x;
	yy = this->y + y;
	zz = this->z + z;
	return (new Point(xx, yy,  zz));
}

void Point::rotation(LONG x, LONG y, LONG z)
{
	
}