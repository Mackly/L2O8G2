#include <fstream>
#include "Automate.h"

using namespace std;

Automate::Automate() : m_etatInitial(0)
{
}

Automate::Automate(string fichier)
{
	int nbreEtats;
	int etat;
//	int etatI;
//	int etatF;
	string ligne;

	ifstream myfile;

	myfile.open(fichier);

	if (!myfile.fail())
	{
		myfile >> nbreEtats;
		//string[] lettre;
		char character;
		while (getline(myfile, ligne))
		{ 
			/*split(fields, s, is_any_of(","));
			resize(size_t n*/
			
			switch (character)
			{
			case ('I'):
			case ('T'):
			default:
				
					break;
			}

		}
		
		

		myfile.close();
	}

	/*string input = "104857 Big Screen TV  567.95";
string[] parsed_output = input.split(" "); // split input string with 'space' as delimiter

// parsed_output[0] =  104857
// parsed_output[1] =  Big
// parsed_output[2] =  Screen
// parsed_output[3] =  TV
// parsed_output[4] =  567.95

int id = stringToInt(parsed_output[0]);
string product = concat(parsed_output[1], parsed_output[2], ...  ,parsed_output[length-2]);
double price = stringToDouble(parsed_output[length-1]); */

}


int Automate::getEtatInitial()
{
	return m_etatInitial;
}

void Automate::ajouterEtat(Etat& e)
{
	m_listeEtats[e.getIdentifiant] = e;
}


void Automate::ajouterEtat(int id, bool estTerminal)
{

}

void Automate::ajouterTransition(int depart, int arrivee, Etiquette etiquette)
{

}


void genererFichier(string fichier)
{

}
