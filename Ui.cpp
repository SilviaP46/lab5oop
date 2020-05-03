#include "Ui.h"
#include "Repo.h"
#include "Film.h"
#include "Controller.h"
#include <iostream>
using namespace std;

Ui::Ui() {}

void Ui::Menu() {

	Controller c;

	int choice;
	do
	{
		system("CLS");
		cout << "<<MENU>>" << endl;
		cout << "Enter your choice or press 0 to exit!" << endl;
		cout << "1-->Admin mode" << endl;
		cout << "2-->User mode" << endl;
		cout << "Your choice:";
		cin >> choice;

		c.ui_menu(choice);

	} while (choice != 0);

}

void Ui::Menu_Admin() {

	Film f;
	Repo r;
	Controller c;

	int choice;
	do
	{
		system("CLS");
		cout << "Admin Mode!" << endl;
		cout << "Enter your choice or press 0 to exit!" << endl;
		cout << "1-->Add movie" << endl;
		cout << "2-->Delete movie" << endl;
		cout << "3-->Update number of likes" << endl;
		cout << "4-->List of movies" << endl;
		cout << "Your choice:";
		cin >> choice;

		c.ui_menu_Admin(choice, &r, f);

	} while (choice != 0);

}

void Ui::Menu_User() {

	Film f;
	Repo r;
	Controller c;

	int choice;
	do
	{
		system("CLS");
		cout << "User Mode!"<< endl;
		cout << "Enter your choice or press 0 to exit!" << endl;
		cout << "1-->Aaaaaa" << endl;
		cout << "2-->bbbbbbbb" << endl;
		cout << "Your choice:";
		cin >> choice;

		c.ui_menu_User(choice, &r, f);

	} while (choice != 0);

}

