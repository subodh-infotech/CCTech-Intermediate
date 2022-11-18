#include <iostream>
#include <assert.h>

using namespace std;

int main(int argc, char *argv[])
{
    string str = "";
    for(int i = 1; i < argc; ++i)
    {
        str = str + argv[i] + " ";
    }
    cout << str << endl;
    
    return EXIT_SUCCESS;
}