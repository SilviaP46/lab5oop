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


public:
	Repo();
	bool exits(string title);
	void add_Movie(Film f);
	void delete_Movie(string title);

	~Repo();

};

