#include "Zork_main.hpp"
#include <fstream>
#include <vector>
#include "rapidxml/rapidxml.hpp"

Game::Game(string filename) {
	try {
	    gameReady = loadXML(filename);
	} catch (int error) {
	    cout << "Error parsing the XML." << endl;
	}
}

Game::~Game() {

}

bool Game::loadXML(string filename) {
	xml_document<> doc;
	xml_node<> * root_node;
	// Read the xml file into a vector
	ifstream f;
	f.open(filename);
	if (f.fail()) {
	    perror("Error!:");
	    cout << "Opening file error, exit!!! " << endl;
	    return false;
	}
	vector<char> buffer((streambuf_iterator<char>(f)), istreambuf_iterator<char>());
	buffer.push_back('\0');
	
	return true;
}



void Game::startGame() {
	//Always start at entrance
	currentRoom = "Entrance";

}


