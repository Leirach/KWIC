#ifndef SORTLIST_H
#define SORTLIST_H

#include <sstream>

using namespace std;

class SortList
{
    public:
        SortList(stringstream &ss);
		string filter();

    private:
    	stringstream input;
    	stringstream output;
};

#endif // SORTLIST_H
