#include "appli.h"

//lancement d'application
void Appli::run()
{
	isRunning=true;
	do
	{
		displayMenu();
		actionChoice(inputChoice());
	}
	while (isRunning);

}

//afficher menu
void Appli::displayMenu()
{
	cout<<"Que souhaitez vous faire ?"<<endl<<"1 : Ajouter une personne"<<endl<<"2 : Afficher toutes les personnes"<<endl<<"3 : Rechercher une personne"<<endl<<"4 : Quitter l'application"<<endl<<endl<<endl;

}

//entrer le choix
int Appli::inputChoice()
{
	int choice;
	cin>>choice;
	return choice;
}

//selon le choix l'appli va lancer une methode
void Appli::actionChoice(int theChoice)
{
	string search;
	switch (theChoice)
	{
		case 1 : 
			addPerson();
			break;

		case 2 :
			displayallPerson();
			break;

		case 3 :
			cout<<"Entrez qui vous voulez chercher : ";
			cin>>search;
			searchPerson(search).display();
			break;
		case 4 :
			isRunning=false;
			break;

	}
}

//ajouter personne
void Appli::addPerson()
{
	Person p;
	p.input();
	vectAppliPerson.push_back(p);
}

//afficehr toutes les personnes
void Appli::displayallPerson()
{
	for (int i = 0; i < vectAppliPerson.size(); i++)
	{
		vectAppliPerson[i].display();
	}
}

//rechercher personne(s)
Person Appli::searchPerson(string theSearch)
{
	int nbPerson=vectAppliPerson.size();
	for (int i = 0; i < nbPerson; i++)
	{
		if (vectAppliPerson[i].getName()==theSearch or vectAppliPerson[i].getSurname()== theSearch)
		{
			return vectAppliPerson[i];
		}
		
	}
}