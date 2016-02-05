class Parking
{
	int nbPlacesOccupes;
	int	nbPlacesLibres;

public:
	void init(int nb);
	void entree_vehicule();
	void sortie_vehicule();
	void aff_places_libres();

}

void Parking::init(int nb)
{
	this->nbPlacesLibres = nb;
	this->nbPlacesOccupes = 0;
}

void Parking::entree_vehicule()
{
	this->nbPlacesOccupes = this->nbPlacesOccupes + 1;
	this->nbPlacesLibres = this->nbPlacesLibres - 1;
}

void Parking::sortie_vehicule()
{
	this->nbPlacesOccupes = this->nbPlacesOccupes - 1;
	this->nbPlacesLibres = this->nbPlacesLibres + 1;
}

void Parking::aff_places_libres()
{
	cout << "Il y a "<< nbPlacesLibres <<" nombres de places libres."<< endl;
}

int main()
{
	Parking P, K;

	P.init(50);
}