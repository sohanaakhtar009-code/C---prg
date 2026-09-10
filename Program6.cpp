#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num, original, reverse = 0, remainder;
    string str, strReverse = "";

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if(original == reverse)
        cout << "Number is Palindrome" << endl;
    else
        cout << "Number is not Palindrome" << endl;

    cout << "Enter a string: ";
    cin >> str;

    for(int i = str.length() - 1; i >= 0; i--)
    {
        strReverse = strReverse + str[i];
    }

    if(str == strReverse)
        cout << "String is Palindrome" << endl;
    else
        cout << "String is not Palindrome" << endl;

    return 0;
}