/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::show()
{
	
	int option;
	cout<<"Welcome to Library Itla "<<endl;
	 	do
	 	{

	 		cout << "Select an option " <<endl;
			cout << "1- Show Books" << endl;
	 		cout << "2- Add One" << endl;
	 		cout << "3- Show the last" << endl;
	 		cout << "4- Exit" << endl;

	 		cin >> option;
	 		Option(option);

	 	}while(option !=3);
}

Menu::Menu()
{

}



void Menu::listItems()
{


	Element* element = stack->getFirst();
	cout << "List of books available"<<endl;

	while(element !=NULL)
	{
	cout << element -> getName() <<endl;
		element = element->getNext();
	}
}

void Menu::addNew()
{
	string name;
	cout<<"Insert the name of the book"<<endl;
	cin>>name;
	Element* book = new Element(name);
		stack->push(book);
	//cout<<"a new book has been inserted"<< endl;


}

void Menu::lastBook()
{

	cout<<"The last book in the stack is "<<endl;
	Element* element = stack->pop();

	if(element !=NULL)
	{
		cout<< "1- " << element->getName()<<endl;
	}

}


void Menu::Option(int option)
{
		switch(option)
		{
		case 1: listItems();
		break;

		case 2: addNew();
		break;

		case 3: lastBook();
		break;

		


		}


	}

