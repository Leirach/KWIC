#include "SortList.h"
#include <iostream>
#include <vector>

using namespace std;

SortList::SortList(stringstream &ss)
{
	input << ss.str();
}

void insertionSort(vector<string> &list)
{
	string aux;
	int n = list.size();

	for(int i=n-1; i>=1; i--){
		//si list[i] es menor, los cambia, sino ya esta terminado
		if (list[i-1].compare(list[i]) < 0){
			return;
		}
		aux = list[i-1];
		list[i-1] = list[i];
		list[i] = aux;
	}
	return;
}

string SortList::filter()
{
	string line;
	vector<string> list;
	while (getline(input, line)){
		if ( !(line == "") ){
			list.push_back(line);
			insertionSort(list);
		}
	}

	for(int i=0; i<list.size(); i++){
		output << list[i] << endl;
	}

	return output.str();
}