#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <cerrno>
#include <vector>
#include <fstream>
using namespace std;

vector<string> file_content;

void sortContent(vector<string> &_vector){
    sort(_vector.begin(), _vector.end()); // sort content
    for(auto record : _vector){
        cout << record << endl;
    }
}

void readFile(const char *path){
    ifstream in_stream;
    in_stream.open(path,  ios::in);
    if(in_stream.is_open()){
        string line;
        while(getline(in_stream, line)){
            file_content.push_back(line);
        }
    }else{
        cout << "sort: " << "cannot read: " << path << ": " << strerror(errno);
        exit(0);
    }
}

int main(int argc, char *argv[]){
    if(argc == 1){
        while(1){
            char ch = getchar();
            if(ch == EOF)
                break;
        }
    }else{
        for(int i = 1; i < argc; ++i){
            readFile(argv[i]);
        }
        sortContent(file_content);
    }
    return 0;
}