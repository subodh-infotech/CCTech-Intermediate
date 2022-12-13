// tha main program that prints all lines read from stdin sorted by their length.
#include <iostream>
#include <string>
#include <vector>

#include "sort_string_by_length.h"

using namespace std;

int main(){
    vector<string> text;
    
    string line;
    cout << "Enter string => " << endl;
    
    while(getline(cin, line)){
        text.push_back(line);
    }

    sortText(text);
    
    // for(auto lines: text){
    //     cout << lines << endl;
    // }

    return EXIT_SUCCESS;
}

