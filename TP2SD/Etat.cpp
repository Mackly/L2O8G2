#include "Etat.h"

using namespace std;

// Constructeur
Etat::Etat() : m_estTerminal(false), m_id(0)
{
}

Etat::Etat(bool type, int id) : m_estTerminal(type), m_id(id)
{
}

Etat::Etat(bool type, int id, ListeTransitions listeTransitions) : 
m_estTerminal(type), m_id(id), m_listeTransitions(listeTransitions)
{
}

//Accesseur
bool Etat::getType()
{
	return m_estTerminal;
}
int Etat::getIdentifiant()
{
	return m_id;
}

//Modificateur
void Etat::setType(bool unType)
{
	m_estTerminal = unType;
}

void Etat::setIdentifiant(int id)
{
	m_id = id;
}

/***********************************************************
*	Methode boolean existeTransition(char e) qui dit s’il 
*	existe ou non une transition portant l’etiquette e qui 
*	part de l’etat considere.
*/
bool Etat::existeTransition(Etiquette e)
{
	for each (Transition tr in m_listeTransitions)
	{

		if (tr.getEtiquette().find(e) != tr.getEtiquette().end())
			return true;
	}	
	return false;
}

ListeEtats Etat::cible(Etiquette e)
{
	ListeEtats listeEtatsDest;
	for each (Transition tr in m_listeTransitions)
	{
		if (tr.getEtiquette().find(e) != tr.getEtiquette().end())
			listeEtatsDest.insert(tr.getEtatDest());
	}
	return listeEtatsDest;
}

ListeEtats Etat::cible()
{
	ListeEtats listeEtatsDest;
	for each (Transition tr in m_listeTransitions)
	{
		listeEtatsDest.insert(tr.getEtatDest());
	}
	return listeEtatsDest;
}

void Etat::ajouterTransition(ListeEtiquettes c, int e)
{
	Transition nouvelleTrans(m_id, e, c);
	m_listeTransitions.insert(nouvelleTrans);
}

ListeEtiquettes Etat::listerEtiquettes()
{
	ListeEtiquettes listeEtiquettes;
	for each (Transition tr in m_listeTransitions)
	{
		for each(Etiquette et in tr.getEtiquette())
			listeEtiquettes.insert(et);
	}
	return listeEtiquettes;
}
