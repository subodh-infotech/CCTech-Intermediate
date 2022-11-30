#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cassert>
using namespace std;

string removeExtension(string full_filename){
    int index_of_dot = full_filename.rfind(".");
    return full_filename.substr(0, index_of_dot);
}

string removeWords(string filename){
    vector<string> words = {"tests", "test", "spec", "step", "steps"};
    //transform(filename.begin(), filename.end(), filename.begin(), ::tolower);
    size_t start_index, end_index;
    end_index = filename.length();
    int i;
    for(i = 0; i < words.size(); ++i){
        start_index = filename.find(words[i]);
        if(start_index != string::npos){
            break;
        }
    }

    if(start_index == string::npos)
        start_index = 0;
    else if(start_index == 0)
        start_index = (new string(words[i]))->length();
    else{
        end_index = start_index;
        start_index = 0;
    }

    return filename.substr(start_index, end_index);
}

string removeWordSeparator(string filename){
    vector<char> separator = {'_', '-', '.'};
    size_t start_index, end_index;
    end_index = filename.length();
    for(size_t i = 0; i < separator.size(); ++i){
        start_index = filename.find(separator[i]);
        if(start_index != string::npos){
            break;
        }
    }

    if(start_index == string::npos)
        start_index = 0;
    else if(start_index == 0)
        start_index = start_index +1;
    else{
        start_index = 0;
        end_index = end_index - 1;
    }
    return filename.substr(start_index, end_index);
}

string getBasename(string path){
    string slash = "/\\";
    size_t index_of_slash = path.find_last_of(slash);
    string filename = path.substr(index_of_slash+1);

    string basename = removeWordSeparator(removeWords(removeExtension(filename)));

    return basename;
}

string getFilenameIndices(string path){
    transform(path.begin(), path.end(), path.begin(), ::tolower);
    string filename = getBasename(path);
    size_t first_index, last_index;
    first_index = path.find(filename);
    last_index = first_index + filename.length();
    string indices = "[" + std::to_string(first_index) + "," + std::to_string(last_index) + "]";
    return indices;
}

int main(){
    assert(getFilenameIndices("src/Hiker_spec.re") == "[4,9]");
    assert(getFilenameIndices("test/hiker_test.exs") == "[5,10]");
    assert(getFilenameIndices("wibble/test/hiker_spec.rb") == "[12,17]");
    assert(getFilenameIndices("hiker_steps.rb") == "[0,5]");
    assert(getFilenameIndices("hiker_spec.rb") == "[0,5]");
    assert(getFilenameIndices("test_hiker.rb") == "[5,10]");
    assert(getFilenameIndices("test_hiker.py") == "[5,10]");
    assert(getFilenameIndices("test_hiker.sh") == "[5,10]");
    assert(getFilenameIndices("tests_hiker.sh") == "[6,11]");
    assert(getFilenameIndices("test_hiker.coffee") == "[5,10]");
    assert(getFilenameIndices("hiker_spec.coffee") == "[0,5]");
    assert(getFilenameIndices("hikerTest.chpl") == "[0,5]");
    assert(getFilenameIndices("hiker.tests.c") == "[0,5]");
    assert(getFilenameIndices("hiker_tests.c") == "[0,5]");
    assert(getFilenameIndices("hiker_test.c") == "[0,5]");
    assert(getFilenameIndices("hiker_Test.c") == "[0,5]");
    assert(getFilenameIndices("HikerTests.cpp") == "[0,5]");
    assert(getFilenameIndices("hikerTests.cpp") == "[0,5]");
    assert(getFilenameIndices("HikerTest.cs") == "[0,5]");
    assert(getFilenameIndices("HikerTest.java") == "[0,5]");
    assert(getFilenameIndices("DiamondTest.kt") == "[0,7]");
    assert(getFilenameIndices("HikerTest.php") == "[0,5]");
    assert(getFilenameIndices("hikerTest.js") == "[0,5]");
    assert(getFilenameIndices("hiker-test.js") == "[0,5]");
    assert(getFilenameIndices("hiker-spec.js") == "[0,5]");
    assert(getFilenameIndices("hiker.test.js") == "[0,5]");
    assert(getFilenameIndices("hiker.tests.ts") == "[0,5]");
    assert(getFilenameIndices("hiker_tests.erl") == "[0,5]");
    assert(getFilenameIndices("hiker_test.clj") == "[0,5]");
    assert(getFilenameIndices("fizzBuzz_test.d") == "[0,8]");
    assert(getFilenameIndices("hiker_test.go") == "[0,5]");
    assert(getFilenameIndices("hiker.tests.R") == "[0,5]");
    assert(getFilenameIndices("hikertests.swift") == "[0,5]");
    assert(getFilenameIndices("HikerSpec.groovy") == "[0,5]");
    assert(getFilenameIndices("hikerSpec.feature") == "[0,5]");
    assert(getFilenameIndices("hiker.feature") == "[0,5]");
    assert(getFilenameIndices("hiker.fun") == "[0,5]");
    assert(getFilenameIndices("hiker.t") == "[0,5]");
    assert(getFilenameIndices("hiker.plt") == "[0,5]");
    assert(getFilenameIndices("hiker") == "[0,5]");
    return 0;
}