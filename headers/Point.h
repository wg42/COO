class Point
{
	private:
		int		x;
		int		y;
		int		z;
		char	*color;

	public:
		Point(int x, int y, int z, char *color);
		void setX(int x);
		void setY(int y);
		void setZ(int z);
		Point addition(Point a, Point b);
		Point isEqual(Point a, Point b);
		Point translation(int x, int y, int z);
		void rotation(LONG x, LONG y, LONG z);
};