#ifndef __MANAGEMENT__
#define __MANAGEMENT__
#include <iostream>
#include <fstream>
#include <vector>
#include <thread>

#include "algoritms.h"


class Media{
public:
	//add
	bool addNewEntry(const std::string, std::vector<std::string>&);
	//remove
	bool removeEntry(const std::string, std::vector<std::string>&);
	//update
	bool updateNewEntry(const std::string, std::vector<std::string>&);
	//display
	//void displayAll();
	void mediaSearch(const std::string, std::vector<std::string>&) const;
	
};

class Movies :public Media {
public:
	
	Movies* next;
	Movies* previous;
	void displayAll() const;
	std::vector<std::string>& getMovies();

private:
	std::vector<std::string> movies;
};

class Shows :public Media {
public:
	void displayAll() const;
	Shows* next;
	Shows* previous;
	std::vector<std::string>& getShows();

private:
	std::vector<std::string> shows;
};


#endif