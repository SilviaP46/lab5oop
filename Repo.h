#pragma once
#include "Film.h"
#include <string>
#include <vector>
using namespace std;

class Repo
{
public:
	friend class Film;
	vector<Film> Movie_List;
	vector<Film> WatchList;


public:
	Repo();
	bool exits(string title);
	void add_Movie(Film f);
	void delete_Movie(string title);
	void update_Movie_likes(string name, int p);
	void show();
	void search(string genre);
	void create_list(string title, string genre, int year, int likes, string trailer);

	~Repo();

};

