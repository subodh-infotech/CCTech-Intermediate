// function that compares string by length for sorting.
#include <iostream>
#include <map>
#include "sort_string_by_length.h"

using namespace std;

void display(vector<string> &strings){
    for(auto line : strings){
        cout << line << endl;
    }
}

void sortText(vector<string> &text){
    multimap<size_t, string> textByLength;
    
    vector<string> content;

    for(auto lines : text){
        textByLength.insert(pair<int, string>(lines.length(), lines));
    }

    for(auto itr : textByLength){
        content.push_back(itr.second);
    }

    display(content);
}