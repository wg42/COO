#ifndef CERCLE_H
# define CERCLE_H

# include "Point.h"

class Cercle : public Point
{
	public:
		Cercle(float rayon);
		~Cercle(void);
		void afficher(Ppm im);
};

#endif
