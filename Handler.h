#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Handler
{
    public:
        Handler(stringstream &ss);
        void filter();

    private:
    	stringstream input;
    	vector<string> lineas;
    	stringstream output;
};

#endif // HANDLER_H
