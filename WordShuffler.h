#ifndef WORDSHUFFLER_H
#define WORDSHUFFLER_H
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class WordShuffler
{
    public:
        WordShuffler(stringstream &ss);
        string filter();

    private:
        stringstream input;
        stringstream output;
};

#endif // WORDSHUFFLER_H
