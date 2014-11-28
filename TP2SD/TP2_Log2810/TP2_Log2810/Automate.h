#include "Etat.h"
#include <map>

using namespace std;

#ifndef _AUTOMATE_H_	// Compilation guards
#define _AUTOMATE_H_

class Automate
{
private:
	int m_etatInitial;
	//Etat* m_etatCourant;
	map<int, Etat> m_listeEtats;
	ListeEtats m_listeEtatsFinaux;
	set<Transition*> m_listeTransition;
	set<Etiquette> m_listeEtiquette;
public:
	//Constructeur
	Automate();
	Automate(string fichier);

	//Accesseur
	int getEtatInitial();
	
	//Modificateur
	void ajouterEtat(Etat& e);
	void ajouterEtat(int id, bool estTerminal);
	void ajouterTransition(int depart, int arrivee, Etiquette etiquette);

	//Autres
	void genererFichier(string fichier);
};
#endif // _AUTOMATE_H_