#include <iostream>
#include <string>
#include <fstream>
#include "SortList.h"
#include "WordShuffler.h"

using namespace std;

int main()
{
	string filename;
	cout << "Introduce el nombre del archivo\n"; 
	cin >> filename;
	ifstream file(filename, ifstream::in);
	stringstream ss;

	//read input
	string line;
	while (getline(file, line)){
		transform(line.begin(), line.end(), line.begin(), ::tolower);
		ss << line << endl;
	}

	//cycle words
	WordShuffler shuffler(ss);
	ss.str(""); //reset stream
	ss << shuffler.filter();
	//cout << ss.str();

	//sort list
	SortList sorter(ss);
	ss.str("");
	ss << sorter.filter();

	//print list
	cout << ss.str();

    return 0;
}
