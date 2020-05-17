#pragma once
#include "Film.h"
#include <string>
#include <vector>
using namespace std;

class Repo
{
private:
	//friend class Film;
	vector<Film> Movie_List;
	vector<Film> WatchList;
public:

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Default constructor. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	Repo();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Exits in watch list. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="title">	The title. </param>
	///
	/// <returns>	True if it succeeds, false if it fails. </returns>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	bool exists_in_watch_list(string title);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Exits. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="title">	 	The title. </param>
	/// <param name="parameter2">	The second parameter. </param>
	///
	/// <returns>	True if it succeeds, false if it fails. </returns>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	bool exists_in_movie_list(string title);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Adds a movie to movie_list./ </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="f">	A Film to process. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////
	

	void add_Movie(Film f);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Deletes the movie described by title from the movie_list. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="title">	The title. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void delete_Movie(string title);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Updates the movie nr of likes. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="name">	The name. </param>
	/// <param name="p">   	An int to process. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	int update_Movie_likes(string name, int p);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary> Displays the list of movies . </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="v">	A vector&lt;Film&gt; to process. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void print_movie_list();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Print watch list. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void print_watch_list();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Searches for the first match for the given string. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="genre">	The genre. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void search(string genre);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Creates a the movie_list. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="title">  	The title. </param>
	/// <param name="genre">  	The genre. </param>
	/// <param name="year">   	The year. </param>
	/// <param name="likes">  	The likes. </param>
	/// <param name="trailer">	The trailer. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void create_list(string title, string genre, int year, int likes, string trailer);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Adds a movie to the watch list. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="f">	A Film to process. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void add_WatchList(string title);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Removes a movie from watch list./ </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="title"> 	The title. </param>
	/// <param name="answer">	The answer. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void remove_from_WatchList(string title, string answer);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary> Like a movie. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	///
	/// <param name="a">	A string to process. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void like(string a);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Destructor. </summary>
	///
	/// <remarks>	Work, 11/05/2020. </remarks>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	~Repo();

};

