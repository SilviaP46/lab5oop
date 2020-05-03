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

void Repo::update_Movie_likes(string name,int p) {
	for (int i = 0; i < Movie_List.size(); i++) {
		if (Movie_List.at(i).get_Title() == name) {
			cout << "Old likes:" << Movie_List.at(i).get_Likes() << endl;
			Movie_List.at(i).set_Likes(p);
			cout << "New likes:" << Movie_List.at(i).get_Likes() << endl;
		}
	}
}

void Repo::show() {
	for (int i = 0; i < Movie_List.size(); i++)
		cout << "Title: " << Movie_List.at(i).get_Title() << " Genre:" << Movie_List.at(i).get_Genre() << " Year:" << Movie_List.at(i).get_Year() << " Likes:" << Movie_List.at(i).get_Likes() << " Trailer" << Movie_List.at(i).get_Trailer()<<endl;

}





Repo::~Repo() {}