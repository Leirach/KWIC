#include "Handler.h"

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

Handler::quitarLinea() {
	cout << "¿Quieres quitar una linea?\n";
}