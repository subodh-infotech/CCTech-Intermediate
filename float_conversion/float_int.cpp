#include <iostream>
#include <cmath>
#include <cfloat>
using namespace std;

void float_to_int(float val){
    int value;
    if(isnan(val) || size_t(INT_MAX) < log2f(fabsf(val)) || val != 0.0f && fabsf(val) < FLT_MIN){
        throw runtime_error("Math error : convertion failed !");
    }
    else{
        value = val;
        cout << '\n' << value;
    }
}


void int_to_float(int val){
    float value;
    if(isnan(val) || size_t(FLT_MAX) < log2f(abs(val)) || (val != 0 && abs(val) < INT_MIN)){
        throw runtime_error("Math error : Conversion failed !" );
    }
    else{
        value = val;
        cout << endl << value;
    }
}

int main(){
    float_to_int(1234.567);
    int_to_float(1234);
    return EXIT_SUCCESS;
}
