#include "WordShuffler.h"
#include <vector>
#include <sstream>

WordShuffler::WordShuffler(stringstream &ss, vector<string> &stopwords)
{
    input << ss.str();
    cout << input.str();
    this->stopwords = stopwords;
}

bool WordShuffler::find_in_vector(string &word){
    for(int i=0; i<stopwords.size(); i++){
        if (stopwords[i] == word)
            return true;
    }
    return false;
}

vector<string> WordShuffler::vector_from_str(string str) {
    vector<string> words;
    stringstream ss(str);
    string word;
    while(ss >> word) {
        if (!find_in_vector(word))
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
        if (words.empty())
            break;

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


