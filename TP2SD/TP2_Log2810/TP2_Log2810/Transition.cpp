
#include "Transition.h"
#include <string>

using namespace std;

//Constructeur
Transition::Transition() : m_etatDepart(0), m_etatDest(0)
{
}

Transition::Transition(int depart, int Dest, ListeEtiquettes etiquette) :
m_etatDepart(depart), m_etatDest(Dest), m_etiquette(etiquette)
{
}

//Accesseur
int Transition::getEtatDepart()
{
	return m_etatDepart;
}

int Transition::getEtatDest()
{
	return m_etatDest;
}

ListeEtiquettes Transition::getEtiquette()
{
	return m_etiquette;
}

//Modificateur
void Transition::setEtatDepart(int depart)
{
	m_etatDepart = depart;
}

void Transition::setEtatDest(int Dest)
{
	m_etatDest = Dest;
}

void Transition::addEtiquette(Etiquette etiq)
{
	m_etiquette.insert(etiq);
}

void Transition::setEtiquette(ListeEtiquettes etiquette)
{
	m_etiquette = etiquette;
}