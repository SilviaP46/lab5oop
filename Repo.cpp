#include "Repo.h"
#include <iostream>
#include <vector>
using namespace std;

Repo::Repo() {}

bool Repo::exits(string title,vector<Film> v )
{
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i).get_Title() == title)
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

void Repo::add_WatchList(Film f)
{
	for (int i = 0; i <= Movie_List.size(); i++)
		if (Movie_List.at(i).get_Title() == f.get_Title())
			WatchList.push_back(f);
}
/*
void Repo::remove_Movie(string title)
{
	vector<Film> aux;
	vector<Film> aux1;
	int ok = 0;
	Film f;
	string title;
	
	for (auto it : WatchList) 
	{
		if (it.set_Title() == title) ///Search the title
		{
			ok = 1;
			
			int n;
			cin >> n;
			if (n == 1) 
			{
				for (const auto& film : WatchList) 
					if (film.set_Title() == title)
					{
						f.set_Title = film.set_Title.titel;
						f.set_Genre = film.set_Genre.genre;
						f.set_Year = film.set_Year.year;
						f.set_Likes = film.set_Likes.likes + 1; ///When we finde the movie,we change the price
						f.set_Trailer = film.set_Trailer.trailer;
						aux.push_back(f);
					}
					else
					{
						f.set_Title = film.set_Title.titel;
						f.set_Genre = film.set_Genre.genre;
						f.set_Year = film.set_Year.year;
						f.set_Likes = film.set_Likes.likes;
						f.set_Trailer = film.set_Trailer.trailer;
						aux.push_back(f);
					}
				WatchList = aux;//we put aux in vector WatchList
				for (const auto& film : WatchList)
					if (film.set_Title != title)   ///Delete the movie from WatchList
					{

						f.set_Title = film.set_Title.titel;
						f.set_Genre = film.set_Genre.genre;
						f.set_Year = film.set_Year.year;
						f.set_Likes = film.set_Likes.likes;
						f.set_Trailer = film.set_Trailer.trailer;
						aux1.push_back(f);
					}
				WatchList = aux1;
				
			}

			else
				if (n == 2)
				{
					for (const auto& film : WatchList)
						if (film.set_Title != title)
						{

							f.set_Title = film.set_Title.titel;
							f.set_Genre = film.set_Genre.genre;
							f.set_Year = film.set_Year.year;
							f.set_Likes = film.set_Likes.likes;
							f.set_Trailer = film.set_Trailer.trailer;
							aux.push_back(f);
						}
					WatchList = aux1;
					//cout << "Filmul a fost sters cu succes";

				}
				else
					if (n != 1 && n != 2)
						cout << "Tasta incorecta";
		}


	}
	if (ok == 0)
		cout << "Nu exista filmul";
}
*/
Repo::~Repo() {}
