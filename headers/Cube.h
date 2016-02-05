#ifndef CUBE_H
# define CUBE_H

# include "Ppm.h"

class Cube : public Point
{
	public:
		Cube(Facette dessous, Facette face, Facette gauche, Facette arriere, Facette droit, Facette dessus);
		void remplissage(Ppm im);
};

#endif
