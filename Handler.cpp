#include "Handler.h"

vector<string> vector_from_str(string str) {
    
    return words;
}

Handler::Handler(stringstream &ss)
{
    input << ss.str();

    string linea;
    while(getline(input, linea)) {
    	if (line == "")
            break;
        lineas.push_back(linea);
    }
}

Handler::filter() {
	cout << "¿Quieres quitar una linea?\n";
}