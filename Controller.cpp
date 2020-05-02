#include "Controller.h"
#include "Repo.h"
#include "Film.h"
#include "UI.h"
#include "App.h"
#include<iostream>
using namespace std;


Controller::Controller() {}

void Controller::ui_menu(int choice) {

	Ui g;

	int op = choice;

	switch (op) {


	case 0:

		cout << "Bye Bye!";

		system("PAUSE");

	case 1:
		
		g.Menu_Admin();

		system("PAUSE");
		break;

	case 2:

		
		g.Menu_User();
		
		system("PAUSE");
		break;
	}
	
}

void Controller::ui_menu_Admin(int choice, Repo* r, Film f) {

	Film* movie;
	int year, likes, op = choice;
	string title, trailer, genre;

	switch (op) {


	case 0:

		cout << "Bye Bye!";

		system("PAUSE");

	case 1:
		cout << "Please name the movie you wish to add!" << endl;
		cin >> title;
		cout << "Genre?" << endl;
		cin >> genre;
		cout << "Year?" << endl;
		cin >> year;
		cout << "Likes?" << endl;
		cin >> likes;
		cout << "Trailer?" << endl;
		cin >> trailer;

		movie = new Film(title, genre, year, likes, trailer);
		if (r->exits(title))
		{
			cout << "This movie already exits!" << endl;

		}
		else {
			r->add_Movie(*movie);
			int poz = r->Movie_List.size() - 1;
			r->Movie_List.at(poz).print();

			delete movie;
		}

		system("PAUSE");
		break;

	case 2:

		cout << "Which movie would you like to delete?";
		cin >> title;

		if (r->exits(title) == false)
		{
			cout << "This movie does not exist!" << endl;

		}
		else
		{
			r->delete_Movie(title);
			cout << "Movie deleted!" << endl;
		}
	

		system("PAUSE");
		break;


	}
}


void Controller::ui_menu_User(int choice, Repo* r, Film f) {

	cout << "User mode!" << endl;

}