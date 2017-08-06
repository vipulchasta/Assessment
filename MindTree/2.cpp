/*
    Implement a function that removes the Vowels from the string
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

bool isVowel( char ch )
{
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        return true;
    if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
        return true;
    else
        return false;
}

char * myFunction( char *str )
{
    int len = strlen(str);

    char *newStr = ( char * )malloc( (len+1) * sizeof(char) );
    int newStrIndex = 0;

    for( int index = 0 ; index < len ; index++ )
    {
        if( !isVowel(str[index]) )
        {
            newStr[newStrIndex] = str[index];
            newStrIndex++;
        }
    }
    newStr[newStrIndex] = '\0';
    return newStr;
}

int main()
{
    int testCases;
    cin >> testCases;
    
    while(testCases--)
    {
        char str[1000];
        cin >> str;
        char *newStr = myFunction( str );
        cout << newStr << endl;
    }
    return 0;
}
