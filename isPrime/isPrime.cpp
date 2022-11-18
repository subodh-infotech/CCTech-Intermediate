#include <iostream>
#include <assert.h>

using namespace std;

bool isPrimeNumber(int num)
{
    if(num <= 1)
        return false;
    else
    {
        for(int i = 2; i < num/2; ++i)
        {
            if(num % i == 0)
                return false;
        }
    }

    return true;
}

int main()
{
    assert(!isPrimeNumber(-1));
    assert(!isPrimeNumber(0));
    assert(isPrimeNumber(2));
    assert(isPrimeNumber(3));
    assert(!isPrimeNumber(12));
    assert(isPrimeNumber(11));
    assert(isPrimeNumber(13));
    assert(!isPrimeNumber(49));
    
    return 0;
}