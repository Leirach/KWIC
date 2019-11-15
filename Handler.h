#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

class Handler
{
    public:
        Handler(stringstream &ss);
        void handle();
        void read_stopwords();
        void eliminar_lineas();
        void imprimir();

    private:
    	vector<string> lineas;
      	vector<string> stopwords;
      	stringstream input;
      	bool orden_asc;
};

#endif // HANDLER_H

