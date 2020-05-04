#include "Controller.h"
#include "Repo.h"
#include "Film.h"
#include "UI.h"
#include "App.h"
#include<iostream>
using namespace std;


Controller::Controller() {}

void innit_list() {
	Repo f;
	f.create_list("ana", "horror", 2004, 2991, "https://www.google.com/webhp?hl=ro&sa=X&ved=0ahUKEwjnxo6GjojpAhWUtXEKHX1JAycQPAgH");
	f.create_list("asj", "comedie", 2009, 3647, "www.cs/1");
	f.create_list("Iron", "comedie", 2013, 9585, "www.cs/2");
	f.create_list("Captain", "actiune", 2017, 2141, "www.cs/3");
	f.create_list("Conasu", "horror", 2019, 1235, "https://www.youtube.com/");
	f.create_list("Eu", "thriller", 1999, 912, "www.cs/5");
	f.create_list("Vremea", "aventura", 2005, 1257, "www.cs/6");
	f.create_list("Singur!", "comedie", 2015, 4542, "www.cs/7");
	f.create_list("Slab.", "dragoste", 2011, 1234, "www.cs/8");

}

void Controller::ui_menu(int choice) {

	Ui g;

	int op = choice;
	innit_list();

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
	Ui g;
	int year, likes, op = choice,nr;
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
		if (r->exits(title,r->Movie_List))
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

		if (r->exits(title,r->Movie_List) == false)
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

	case 3:
		cout << "Which movie would you like to update?";
		cin >> title;
		cout << "New quantity of likes" << endl;
		cin >> nr;

		if (r->exits(title,r->Movie_List) == false)
		{
			cout << "This movie does not exist!" << endl;

		}
		else
		{
			r->update_Movie_likes(title,nr);
			cout << "Movie deleted!" << endl;
		}

		system("PAUSE");
		break;

	case 4:
	 
		r->show(r->WatchList);

		system("PAUSE");
		break;


	case 5:

		g.Menu();
	}


}


void Controller::ui_menu_User(int choice, Repo* r, Film f) {

	Film* movie;
	Ui g;
	int year, likes, op = choice, nr;
	string title, trailer, genre, answer;

	switch (op) {


	case 0:

		cout << "Bye Bye!";

		system("PAUSE");

	case 1:
		cout << "Genre?"<<endl;
		cin >> genre;

		r->search(genre);

		system("PAUSE");
		break;


	case 2:
		cout << "Which movie would you like to add to your watchlist?" << endl;
		cin >> title;
		if (r->exits(title,r->WatchList))
		{
			cout << "This movie already exits!" << endl;

		}
		else {

			r->add_WatchList(f);
			int poz = r->WatchList.size() - 1;
			r->WatchList.at(poz).print();
		}
	  
		

	case 3:
		cout << "Which movie would you like to remove from the Watchlist?" << endl;
		cin >> title;
		cout << "Did you like the movie?" << endl;
		cin >> answer;
		if (r->exits(title, r->WatchList) == false)
		{
			cout << "This movie does not exist!" << endl;

		}
		else
		{
			r->remove_from_WatchList(title, answer);
			cout << "Movie deleted!" << endl;
		}



		system("PAUSE");
		break;

	case 4:
		r->show(r->WatchList);

		system("PAUSE");
		break;
	
	case 5:

		g.Menu();


		system("PAUSE");
		break;
	}

}