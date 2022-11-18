#include <iostream>
#include <string>


using namespace std;

void stringPermute(string word, int left_index, int right_index)
{
    if(left_index == right_index)
        cout << endl << word;
    else
    {
        for(int i = left_index; i <= right_index; ++i)
        {
            swap(word[left_index], word[i]);
            stringPermute(word, left_index+1, right_index);            
            swap(word[left_index], word[i]);
        }
    }
}

int main()
{
    string word = "biro";
    stringPermute(word, 0, word.length()-1);
    return 0;
}