#ifndef PPM_H
# define PPM_H

// /////////////////////////////////////////////////////////
// header i n c l u s dans tous l e s f i c h i e r s sour c e s //
// /////////////////////////////////////////////////////////

# include <fstream>
# include <iostream>
# include <cassert>
# include <math.h>


// //////////////////////////////////
// De f i n i t i o n des c o u l e u r s de base
// //////////////////////////////////
# define ROUGE 0x00FF0000
# define BLEU 0x000000FF
# define VERT 0x0000FF00
# define JAUNE 0x00FFFF00
# define ROSE 0x00FF00FF
# define CYAN 0x0000FFFF
# define NOIR 0x00000000
# define BLANC 0x00FFFFFF

// //////////////////////////////////
// Re d e f i n i t i o n des t y p e s d ' e n t i e r s //
// //////////////////////////////////
typedef unsigned char BYTE;
typedef unsigned long ULONG;
typedef unsigned short USHORT;
typedef long LONG;
typedef short SHORT;
typedef char CHAR;

// ////////////////////////////////////////////////////////////////
// De f i n i t i o n de l a c l a s s e Ppm //
//Represente un f i c h i e r image au format Ppm ( Po r t a b l e Pi x e l Map)//
// ////////////////////////////////////////////////////////////////
class Ppm
{
	public :
		SHORT 	width; // l a r g e u r
		SHORT 	height; // hauteur
		LONG 	length; //nombre d ' o c t e t s de ' p i x e l ' (3 l a r g e u r  hauteur )
		ULONG	level; // niveau de R,G,B maximal (255)
		BYTE	*pixel; // t a b l e a u des p i x e l s

		Ppm(ULONG,ULONG);
		~Ppm(void);
		void write(CHAR *);

		// a f f e c t e l a coul eur ' c o l o r ' au p i x e l de coordonnees ( I , J )
		void setpixel(SHORT I, SHORT J, ULONG color)
		{
			assert((I >= 0) && (I < height) && ( J >= 0) && (J < width));

			LONG ind = 3 * (I * width + J);
			pixel[ind++] = 255&(color>>16); //R
			pixel[ind++] = 255&(color>>8); //G
			pixel[ind] = 255&color; //B
			return ;
		};

		// r e tourne l a coul eur ' c o l o r ' du p i x e l de coordonnees ( I , J )
		ULONG getpixel(SHORT I, SHORT J)
		{
			ULONG couleur;
			BYTE R, G, B;

			assert((I >= 0) && (I < height) && ( J >= 0) && (J < width));

			LONG ind = 3 * (I * width + J);

			R = pixel[ind++]; //R
			G = pixel[ind++]; //G
			B = pixel[ind] ; //B

			couleur = 0;
			couleur = couleur | (R<<16);
			couleur = couleur | (G<<8);
			couleur = couleur | B;

			return couleur;
		};

		// t r a c e une l i g n e a p a r t i r de deux p o int s
		void line(SHORT, SHORT, SHORT, SHORT, ULONG color);
};

#endif // PPM_H
