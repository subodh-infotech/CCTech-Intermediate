#include <iostream>
#include <assert.h>
#include <string>
#include <algorithm>

using namespace std;

bool areAnagramString(string first_string, string second_string)
{
    if(first_string.length() != second_string.length())
        return false;
    
    sort(first_string.begin(), first_string.end());
    sort(second_string.begin(), second_string.end());

    for(int i = 0; i < first_string.length(); ++i)
    {
        if(first_string[i] != second_string[i])
            return false;
    }

    return true;
}

int main()
{
    assert(areAnagramString("", ""));
    assert(!areAnagramString("", "a"));
    assert(areAnagramString("a", "a"));
    assert(!areAnagramString("ab", "b"));
    assert(!areAnagramString("aa", "bb"));
    assert(areAnagramString("ab", "ba"));
    return 0;
}