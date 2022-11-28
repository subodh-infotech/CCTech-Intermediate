#include <iostream>
#include <cerrno>
#include <cstring>
#include <fstream>
#include <vector>
using namespace std;

vector<string> file_content;


void dipslay(vector<string> &_vector){
    int i;
    if(_vector.size() <= 10){
        i = 0;
    }else{
        i = _vector.size() - 10;
    }
    while(i < _vector.size()){
        cout << _vector[i] << endl;
        i++;
    }
}

void readFile(const char *path, int argc){
    ifstream in_stream;
    in_stream.open(path, ios::in);

    if(in_stream.is_open()){
        string line;
        file_content.clear();
        if(argc > 2)
            cout << "==> " << path << " <==" << endl;
        while(getline(in_stream, line)){
            file_content.push_back(line);
        }
        dipslay(file_content); 
    }else{
        cout << "tail: cannot open \'" << path << "\' for reading: " << strerror(errno) << endl;
    }
}

int main(int argc, char *argv[]){
    if(argc == 1){
        char ch;
        while(1){
            ch = getchar();
            if(ch == EOF)
                break;
        }
    }else{
        for(int i =1; i < argc; ++i){
            readFile(argv[i], argc);
        }
    }
    return 0;
}



