#include <iostream>
#include "person.h"
#include <vector>
using namespace std;

class Appli
{
	private :
	vector <Person> vectAppliPerson;	//creation vecteur personne
	bool isRunning;		//l'appli est elle en marche (passe a false quand elle s'eteind)
	void displayMenu();		//afficher menu
	int inputChoice();		//entrer choix
	void actionChoice(int theChoice);		//action selon le choix
	void addPerson();		//ajouter personne
	void displayallPerson();		//afficher toutes les personnes
	Person searchPerson(string theSearch);		//rechercher personne(s)
	public:
		void run(); /*fait tourner l'app*/	
};