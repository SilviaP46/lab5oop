#pragma once
#include <cstring>
#include <string>
using namespace std;

class Film
{
private:
	string Title;
	string Genre;
	int Year;
	int Likes;
	string Trailer;

public:

	Film();
	Film(string title, string genre, int year, int likes, string trailer); //innit

	//getter
	string get_Title() const;
	string get_Genre() const;
	int get_Year() const;
	int get_Likes() const;
	string get_Trailer() const;

	//setter
	void set_Title(string title);
	void set_Genre(string genre);
	void set_Year(int year);
	void set_Likes(int likes);
	void set_Trailer(string trailer);

	void print();

	~Film(); //destructor


};

