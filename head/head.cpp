#include <iostream>
#include <cerrno>
#include <cstring>
#include <fstream>
using namespace std;

void readFile(const char *path, int argc){
    int i = 1;
    fstream in_stream;
    in_stream.open(path, ios::in);
    if(in_stream.is_open()){
        string line;
        if(argc > 2){
            cout << "==> " << path << " <==" << endl;
        }
        
        while((getline(in_stream, line) && ( i <= 10))){
            cout << line << endl;
            i++;
        }
    }else{
        cout << "head: cannot open \'" << path << "\' for reading: " << strerror(errno) << endl;
    }
}

int main(int argc, char *argv[]){
    if(argc == 1){
        char ch;
        do{
            ch = getchar();
            putchar(ch);
        }while(ch != EOF);
    }else{
        for(int i = 1; i < argc; ++i){            
            readFile(argv[i], argc);
        }
    }
    return 0;
}