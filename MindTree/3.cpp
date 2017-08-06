/*
    Swap Values with Index
    Ex      [ 1 3 2 0]
        ans [ 3 0 2 1]
*/

#include<iostream>

using namespace std;

int * myFunction( int *arr , int n )
{
    int *newArr = ( int * )malloc(n*sizeof(int));
    
    for( int index = 0 ; index < n ; index++ )
    {
        newArr[arr[index]] = index;
    }
    
    return newArr;
}

int main()
{
    int testArr[] = { 1 , 3 , 2 , 0 };
    int n = 4;
    int *res = myFunction( testArr , n );
    for( int index = 0 ; index < n ; index++ )
    {
        cout << res[index] << " ";
    }
    cout << endl;
    return 0;
}
