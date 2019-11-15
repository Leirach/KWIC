#ifndef SORTLIST_H
#define SORTLIST_H

#include <sstream>

using namespace std;

class SortList
{
    public:
        SortList(stringstream &ss, bool asc);
		string filter();

    private:
    	stringstream input;
    	stringstream output;
    	bool asc;

    	void insertionSort(vector<string> &list);
};

#endif // SORTLIST_H
