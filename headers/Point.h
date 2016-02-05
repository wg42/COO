#ifndef POINT_H
# define POINT_H

# include "Ppm.h"

class Point
{
	private:
		int		x;
		int		y;
		int		z;
		int	    color;

	public:
		// constructeur
		Point();
		Point(int x, int y, int z);
		Point(int x, int y, int z, int color);
		// getter et setter
		int getX();
		void setX(int x);
		int getY();
		void setY(int y);
		int getZ();
		void setZ(int z);
		char getColor();
		//fonction supplementaire
		int addition(Point a, Point b);
		int isEqual(Point a, Point b);
		void translation(int x, int y, int z);
		void rotation(LONG x, LONG y, LONG z);
};
#endif
