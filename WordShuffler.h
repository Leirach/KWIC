#ifndef WORDSHUFFLER_H
#define WORDSHUFFLER_H
#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class WordShuffler
{
    public:
        WordShuffler(stringstream &ss, vector<string> &stopwords);
        string filter();

    private:
        stringstream input;
        stringstream output;
        vector<string> stopwords;

        vector<string> vector_from_str(string str);
        bool find_in_vector(string &word);
};

#endif // WORDSHUFFLER_H
