#include "Repo.h"
#include <iostream>
#include <vector>
using namespace std;

Repo::Repo() {}

bool Repo::exits_in_movie_list(string title)
{
	for (int i = 0; i < Movie_List.size(); i++) {
		if (Movie_List.at(i).get_Title() == title)
		{
			return true;
			break;
		}
	}
	return false;
}

bool Repo::exits_in_watch_list(string title)
{
	for (int i = 0; i < WatchList.size(); i++) {
		if (WatchList.at(i).get_Title() == title)
		{
			return true;
			break;
		}
	}
	return false;
}


void Repo::add_Movie(Film f)
{
	if (this->exits_in_movie_list(f.get_Title()))
		throw exception("Movie already exists");
		Movie_List.push_back(f);

}

void Repo::delete_Movie(string title) {

	for (int i = 0; i < Movie_List.size(); i++) {
		if (Movie_List.at(i).get_Title() == title) {
			Movie_List.erase(Movie_List.begin() + i);
			return;
		}
	}
	
}

void Repo::update_Movie_likes(string name,int p) {
	for (int i = 0; i < Movie_List.size(); i++) {
		if (Movie_List.at(i).get_Title() == name) {
			cout << "Old likes:" << Movie_List.at(i).get_Likes() << endl;
			Movie_List.at(i).set_Likes(p);
			cout << "New likes:" << Movie_List.at(i).get_Likes() << endl;
		}
	}
}

void Repo::print_movie_list() {
	for (int i = 0; i < Movie_List.size(); i++)
		cout << "Title: " << Movie_List.at(i).get_Title() << " Genre:" << Movie_List.at(i).get_Genre() << " Year:" << Movie_List.at(i).get_Year() << " Likes:" << Movie_List.at(i).get_Likes() << " Trailer" << Movie_List.at(i).get_Trailer() << endl;

}

void Repo::print_watch_list() {
	for (int i = 0; i < WatchList.size(); i++)
		cout << "Title: " << WatchList.at(i).get_Title() << " Genre:" << WatchList.at(i).get_Genre() << " Year:" << WatchList.at(i).get_Year() << " Likes:" << WatchList.at(i).get_Likes() << " Trailer" << WatchList.at(i).get_Trailer() << endl;
}

void Repo::search(string genre) {
	for (int i = 0; i < Movie_List.size(); i++) {
		if (Movie_List.at(i).get_Genre() == genre)
			Movie_List.at(i).print();
	}
			

}



void Repo::create_list(string title, string genre, int year, int likes, string trailer)
{
	Film f;
	f.set_Title(title);
	f.set_Genre(genre);
	f.set_Year(year);
	f.set_Likes(likes);
	f.set_Trailer(trailer);
	Movie_List.push_back(f);


}



void Repo::add_WatchList(string title)
{
	for (int i = 0; i <= Movie_List.size(); i++)
		if (Movie_List.at(i).get_Title() == title)
			WatchList.push_back(Movie_List.at(i));
}

void Repo::remove_from_WatchList(string title, string answer)
{
	for (int i = 0; i < WatchList.size(); i++) {
		if (WatchList.at(i).get_Title() == title) {
			WatchList.erase(WatchList.begin() + i);
			return;
		}
	}

	if (answer == "yes")
		like(title);
	else
		return;

}

void Repo::like(string a) {
	for (int i = 0; i < Movie_List.size(); i++) {
		if (Movie_List.at(i).get_Title() == a) {
			Movie_List.at(i).set_Likes(Movie_List.at(i).get_Likes() + 1);
		}
	}
}


	Repo::~Repo() {}
