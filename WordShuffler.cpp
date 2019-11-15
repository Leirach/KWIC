#include "WordShuffler.h"
#include <vector>
#include <sstream>

WordShuffler::WordShuffler(stringstream &ss)
{
    input << ss.str();
}


vector<string> vector_from_str(string str) {
    vector<string> words;
    stringstream ss(str);
    string word;
    while(ss >> word) {
        words.push_back(word);
    }
    return words;
}

string WordShuffler::filter(){

    string line;
    while (getline(input, line)) {
        if (line == "")
            break;
        vector<string> words;
        words = vector_from_str(line);

        int n = words.size();
        for(int i=0; i<n; i++){
            string perm = "";
            for (int j=0; j<n; j++){
                perm = perm + words[(i+j)%n] + ' ';
            }
            perm = perm.substr(0, perm.size()-1);
            output << perm << endl;
        }
    }

    return output.str();
}


