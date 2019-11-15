#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include "Handler.h"

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

  	Handler h(ss);

    return 0;
}