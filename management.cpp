#include "management.h"


//add
bool Media::addNewEntry(const std::string entry, std::vector<std::string>& list) {
	if (entry == "") {
		std::cout << "\tNothing to add..." << std::endl;
		return false;
	}
	else {
		list.push_back(entry);
		return true;
	}
	return false;
}
//remove
bool Media::removeEntry(const std::string entry, std::vector<std::string>& list) {
	if (entry == "") {
		std::cout << "\tNothing to remove..." << std::endl;
		return false;
	}
	if (list.empty()) {
		std::cout << "\tVector is empty..." << std::endl;
		return false;
	}
	int location = searching::binarySearch(list, entry);
	if (location != -1) {
		list.erase(list.begin() + location);
		std::cout << "\tRemoved " << entry << " from the list.." << std::endl;
		return true;
	}
	
	std::cout << "\t" << entry << " Does not appear to be in the list.." << std::endl;	
	return false;
}
//update
bool Media::updateNewEntry(const std::string entry, std::vector<std::string>& vec) {
	if (entry == "") {
		std::cout << "\tNothing to add..." << std::endl;
		return false;
	}
	return false;
}

						// Shows
std::vector<std::string>& Shows::getShows() { return this->shows; }
//display all 

void Shows::displayAll() const {
	if (this->shows.empty()) {
		std::cout << "\tList is empty, Nothing to display..." << std::endl;
		return;
	}
	for (int i{ 0 }; i < this->shows.size(); i++) {
		std::cout << "| " << this->shows[i] << " |" << std::endl;
	}
}

						// Movies
std::vector<std::string>& Movies::getMovies() { return this->movies; }

//display all 

void Movies::displayAll() const {
	if (this->movies.empty()) {
		std::cout << "\tList is empty, Nothing to display..." << std::endl;
		return;
	}
	for (int i{ 0 }; i < this->movies.size(); i++) {
		std::cout << "| " << this->movies[i] << " |" << std::endl;
	}
}
//void Manage::displayAll() {
//
//}


void Media::mediaSearch(const std::string entry, std::vector<std::string>& list) const {
	/*	TO DO 
	* display all related searches
	*/
	if (entry == "") {
		std::cout << "\tNothing to search..." << std::endl;
		return;
	}
	if (list.empty()) {
		std::cout << "\tlist is empty..." << std::endl;
		return;
	}
	int mediaIndex = searching::binarySearch(list, entry);
	if (mediaIndex != -1) {
		//print media for now
		std::cout << list[mediaIndex] << std::endl;
	}
}

