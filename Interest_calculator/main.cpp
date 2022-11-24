#include "s_interest.h"
#include <iostream>
using namespace std;

int main(){
    Interest obj_interest;
    try
    {
        obj_interest.set_amount();
        obj_interest.set_rate();
        obj_interest.set_duraton();
        obj_interest.calculate_interest();
        obj_interest.display();
    }
    catch(runtime_error &error)
    {
        cout << endl << error.what() << endl;
    }
    

    return EXIT_SUCCESS;
}