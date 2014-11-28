/**
*
*
*
*
*
*
*/
#include <string>
#include <set>

using namespace std;

//TODO
typedef char Etiquette;
typedef set<Etiquette> ListeEtiquettes;

#ifndef _TRANSITION_H_	// Compilation guards
#define _TRANSITION_H_

class Transition
{
private:
	int m_etatDepart;
	int m_etatDest;
	ListeEtiquettes m_etiquette;
public:
	
	//Constructeur
	Transition(); 
	Transition(int depart, int dest, ListeEtiquettes etiquette);
	
	//Accesseur
	int getEtatDepart();
	int getEtatDest();
	ListeEtiquettes getEtiquette();

	//Modificateur
	void setEtatDepart(int depart);
	void setEtatDest(int Dest);
	void addEtiquette(Etiquette etiq);
	void setEtiquette(ListeEtiquettes etiquette);
};
#endif // _TRANSITION_H_