/**
*
*
*
*
*
*
*/
#include "Transition.h"
#include <set>
using namespace std;

typedef set<int> ListeEtats;
typedef set<Transition> ListeTransitions;

#ifndef _ETAT_H_	// Compilation guards
#define _ETAT_H_



class Etat
{
private:
	bool m_estTerminal;
	int m_id;
	ListeTransitions m_listeTransitions;
public:
	//Constructeur
	Etat();
	Etat(bool type, int id);
	Etat(bool type, int id, ListeTransitions listeTransitions);

	//Accesseur
	bool getType();
	int getIdentifiant();

	//Modificateur
	void setType(bool unType);
	void setIdentifiant(int id);

	//Requis
	bool existeTransition(Etiquette e);
	ListeEtats cible(Etiquette e);
	ListeEtats cible();
	void ajouterTransition(ListeEtiquettes c, int e);
	ListeEtiquettes listerEtiquettes();
};

#endif // _ETAT_H_