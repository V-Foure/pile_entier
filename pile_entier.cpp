#include "pile_entier.h"
#include <iostream>

pile_entier::pile_entier(int n=20)
{
	taille = n;
	pile = new int[taille];
	hauteur = 0;
	std::cout << "On a fabrique une pile de " << taille << " éléments\n" << std::endl;
}

pile_entier::~pile_entier()
{
	delete pile;
}

void pile_entier::empile(int p)
{
	*(pile + hauteur) = p; hauteur++;
}

int pile_entier::depile()
{
	hauteur--;
	int res = *(pile + hauteur);
	return res;
}

int pile_entier::pleine()
{
	if (hauteur == taille)
		return 1;
	return 0;

}

int pile_entier::vide()
{
	if (hauteur == 0)
		return 1;
	return 0;
}
