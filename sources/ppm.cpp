#include "Ppm.h"

inline SHORT diff(SHORT a, SHORT b)
{
	return (a > b ? (a - b) : (b - a));
}

Ppm::Ppm(ULONG w, ULONG h)
{
	width = w;
	height = h;
	length = 3 * w * h;
	level = 255;
	pixel = new BYTE[length];
	for (LONG i = 0; i < length; i++)
	{
		pixel[i] = 0;
	}
}

Ppm::~Ppm(void)
{
	if (pixel)
		delete [] pixel;
}

void Ppm::write(CHAR *nom)
{
	ofstream out(nom, ios::binary);

	out.seekp(0, ios::end);
	if (out.tellp() < 0)
	{
		out.close();
		throw("erreur d'ouverture de fichier");
	}
	out<<"P6\n"<<width<<" "<<height<<"\n"<<level<<"\n";

	out.write((char *)pixel, length);
	out.close();

	return ;
}

void Ppm::line(SHORT I1, SHORT J1, SHORT I2, SHORT J2, ULONG color)
{
	SHORT dI, dJ, incrI, incrJ, currentI, currentJ, dPi, dPj, dPij, P;

	dI = diff(I1, I2);
	dJ = diff(J1, J2);
	currentI = I1;
	currentJ = J1;
	incrI = (I2 > I1 ? 1 : -1);
	incrJ = (J2 > J1 ? 1 : -1);

	if (dJ >= dI) // | tan ( t h e t a )|<=1
	{
		dPj = dI<<1;
		dPij = dPj-(dJ<<1);
		P = dPj-dJ;

		for ( ; dJ>=0; dJ--)���)
		{
			setpixel(currentI, currentJ, color);
			if (P>0)
			{
				currentI += incrI;
				currentJ += incrJ;
				P += dPij;
			}
			else
			{
				currentJ += incrJ;
				P += dPj;
			}
		}
	}
	else // | tan ( t h e t a )|>1
	{
		dPi = dJ<<1;
		dPij = dPi-(dI<<1);
		P = dPi-dI;

		for ( ; dI>=0;dI--)
		 {
			setpixel(currentI, currentJ, color);
			if (P > 0)
			{
				currentJ += incrJ;
				currentI += incrI;
				P += dPij;
			}
			else
			{
				currentI += incrI;
				P += dPi;
			}
		}
	}
	return ;
}
