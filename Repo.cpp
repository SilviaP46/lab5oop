#include "Repo.h"
#include <iostream>
using namespace std;

Repo::Repo() {}

bool Repo::exits(string title)
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

void Repo::add_Movie(Film f)
{
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

Repo::~Repo() {}
