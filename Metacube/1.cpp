/*
    Two Sorted Sets are given i.e. 'a' and 'b'
    Find the set difference => a-b
    Complexity must be O(1)
*/
#include <iostream>
#define CASE1 1
#define CASE2 0
using namespace std;

int main()
{
    #if CASE1
    int a[] = { 1, 2, 3, 5, 7, 9};
    int b[] = { 1, 2, 3, 4, 11, 25, 29 };
    int m = 6;
    int n = 7;
    #endif // CASE1

    #if CASE2
    int a[] = { 5, 8, 10, 12, 15, 20};
    int b[] = { 6, 7, 8, 9, 10, 12 };
    int m = 6;
    int n = 6;
    #endif // CASE2

    int result[5];
    int ptr=0;


    int i = 0;
    int j = 0;

    while( j < m && i < n )
    {
        if( a[i] == b[j] )
        {
            i++;
            j++;
        }
        else if( a[i] > b[j] )
        {
            j++;
        }
        else if( a[i] < b[j] )
        {
            result[ptr] = a[i];
            ptr++;
            i++;
            j++;
        }
    }

    for(   ; i < m ; i++ )
    {
        result[ptr] = a[i];
        ptr++;
    }

    for( i = 0 ; i < ptr ; i++ )
        cout << result[i] << " ";


    return 0;
}
