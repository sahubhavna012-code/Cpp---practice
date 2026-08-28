#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for(int i=0; i<str.length(); i++)
    {
        switch(str[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                str.erase(i, 1);
                i--;
                break;
        }
    }
    cout << "String after removing vowels: " << str << endl;
    return 0;
}