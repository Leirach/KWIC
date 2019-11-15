#include "Handler.h"
#include <iostream> 

#include "SortList.h"
#include "WordShuffler.h"

Handler::Handler(stringstream &ss)
{
    orden_asc = true;

    string linea;
    while(getline(ss, linea)) {
    	if (linea == "")
            break;
        lineas.push_back(linea);
    }

    handle();

    ss.str("");
  	for(int i=0; i<lineas.size(); i++){
		ss << lineas[i] << endl;
	}

    //cycle words
    WordShuffler shuffler(ss, stopwords);
    ss.str(""); //reset stream
    ss << shuffler.filter();
    //cout << ss.str();

    //sort list
    SortList sorter(ss, orden_asc);
    ss.str("");
    ss << sorter.filter();

    //handler

    //print list
    cout << ss.str();
}

void Handler::handle(){
  int opcion = 0;
  while(opcion != 4){
  	imprimir();
	cout << "Teclea 1 para eliminar una línea" << endl;
    cout << "Teclea 2 para cambiar orden" << endl;
    cout << "Teclea 3 para agregar stopwords" << endl;
    cout << "Teclea 4 para seguir" << endl;

    cin >> opcion; 
    switch(opcion){
    	case 1:
    		eliminar_lineas();
    		break;
    	case 2:
    		orden_asc = !orden_asc;
    		cout << (orden_asc ? "Ascendente\n" : "Descendente\n");
    		break;	
    	case 3:
    		read_stopwords();
    		break;
    	default:
    		break;
    }
  }

}

void Handler::read_stopwords(){
  	string filename;
	cout << "Introduce el nombre del archivo\n"; 
	cin >> filename;
	ifstream file(filename, ifstream::in);

	//read input
	string line;
	while (getline(file, line)){
		transform(line.begin(), line.end(), line.begin(), ::tolower);
		stopwords.push_back(line);
	}
}

void Handler::eliminar_lineas() {
	int num;
	cout << "Cual linea?" << endl;
	cin >> num;
	lineas.erase(lineas.begin() + num-1);
}

void Handler::imprimir(){
	for(int i=0; i<lineas.size(); i++){
		cout << i+1 << " " << lineas[i] << endl;
	}
}
