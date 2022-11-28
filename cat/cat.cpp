#include <iostream>
#include <errno.h>
#include <cstring>
using namespace std;

void readFile(const char *path){
    FILE *file;
    file = fopen(path, "r");
    if(file == NULL){
        cout << "cat: " << path << ": " << strerror(errno);
    }else{
        char ch = getc(file);
        while(ch != EOF){
            cout << ch;
            ch = getc(file);
        }
    }
    cout << endl;
}

int main(int argc, char *argv[]){
    if(argc == 1){
        char ch;
        do{
            ch = getchar();
            putchar(ch);
        }while(ch != EOF);
    }
    else{
        for(int i = 1; i < argc; ++i){
            readFile(argv[i]);
        }
    }
    return 0;
}