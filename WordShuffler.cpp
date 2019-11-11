#include "WordShuffler.h"

WordShuffler::WordShuffler(stringstream &ss)
{
    input << ss.str();
}
int contar(string Frase) {
    int NumPos = -1;
    int totalP = 0;
    while(1) {
        NumPos = Frase.find(' ', NumPos + 1);
        if (NumPos == -1) 
            break;
        totalP++;
    }
    return totalP;
}


string str_last_word(string &str){

    size_t index = str.find_last_of(" ");
    if(index != string::npos){
        return str.substr(index+1, str.length());
    }
    else
        return "";
}

string WordShuffler::filter(){

    string line;
    while (getline(input, line)) {
        if (line == "")
            break;

        output << line << endl; //para la original

        for(int i=0; i<contar(line); i++){
            string last = str_last_word(line);

            int a = line.find(last);
            line = last + " " + line.substr(0, a-1);

            output << line << endl; //rotaciones
        }
    }

    return output.str();
}


