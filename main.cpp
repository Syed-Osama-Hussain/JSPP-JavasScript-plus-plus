#include <iostream>
#include "analyzer.h"
using namespace std;

int main()
{
    Analyzer analyzer;
    analyzer.breakWords("code.txt");
    analyzer.write("tokens.txt");
    cout << analyzer.syntaxStart() << endl;
    system("pause");
}