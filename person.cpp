#include "person.h"

string Person::getName()
{
	return name;
}

void Person::setName(string theName)
{
	name=theName;
}

string Person::getSurname()
{
	return surname;
}

void Person::setSurname(string theSurname)
{
	surname=theSurname;
}

int Person::getAge()
{
	return age;
}

void Person::setAge(int theAge)
{
	age=theAge;
}

void Person::display()
{
	cout<<"Nom : \t"<<name<<endl;
	cout<<"Prenom : \t"<<surname<<endl;
	cout<<"Age : \t"<<age<<endl<<endl;
}

void Person::input()
{
	cout<<"Saisissez votre nom : \t";
	cin>>name;
	cout<<"Saisissez votre prénom : \t";
	cin>>surname;
	cout<<"Saisissez votre age : \t";
	cin>>age;
}