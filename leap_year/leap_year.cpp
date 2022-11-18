#include <iostream>
#include <assert.h>

using namespace std;

bool is_leap_year(int year)
{
    return (year % 400 == 0 ) || (year % 4 == 0 && year % 10 != 0);
    // if((year % 400 == 0 ) || (year % 4 == 0 && year % 10 != 0))
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
}

int main()
{       
    assert(is_leap_year(2000)==true); 
    assert(is_leap_year(2004)==true);
    assert(is_leap_year(2022)==false);
    assert(is_leap_year(2022)==false);
    assert(is_leap_year(1990)==false);
    assert(is_leap_year(1998)==false);
    assert(is_leap_year(1947)==false);

    return 0;
}