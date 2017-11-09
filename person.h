#include <iostream>
#include <string>
using namespace std;

class Person
{
	private :
	string name;
	string surname;
	int age;
	public :
	string getName(); 		/*Recupère le nom*/
	void setName(string theName); 		/*Mise a jour du nom*/
	string getSurname(); 		/*Recupère le prénom*/
	void setSurname(string theSurname); 		/*Mise a jour du prénom*/
	int getAge(); 		/*Recupère l'age*/
	void setAge(int theAge); 		/*Mise a jour de l'age*/
	void display();			/*Affichage*/
	void input(); 		/*Saisie*/
};