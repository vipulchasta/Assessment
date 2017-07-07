/*
  Implementation of Function that Finds Mid Point and mid point is defined as
  You have two array
    Ex. 
            1 =>  1 , 4 , 7 , 10
            2 =>  2 , 3 , 5 , 11
       newArr =>  1 , 2 , 3 , 4 , 5 , 7 , 10 , 11
       Result =>  9/2 = 4.5
       
    Basic Approach-
        -Concat Both Array
        -Sort them
        -Find Mid Element and return it to the calling function
        
    Constraints
        -Both Array have same length i.e. n
        -Both Array are presorted
*/


#include<iostream>

using namespace std;

float findMidPoint( int arr1[] , int arr2[] , int n )
{
    int newArr[2*n];
    int indexNew = 0;
    
    int index1 = 0;
    int index2 = 0;
    
    while( index1 < n && index2 < n )
    {
        if( arr1[index1] < arr2[index2] )
        {
            newArr[indexNew] = arr1[index1];
            index1++;
            indexNew++;
        }
        else
        {
            newArr[indexNew] = arr2[index2];
            index2++;
            indexNew++;
        }
    }
    while( index1 < n )
    {
        newArr[indexNew] = arr1[index1];
        index1++;
        indexNew++;
    }
    while( index2 < n )
    {
        newArr[indexNew] = arr2[index2];
        index2++;
        indexNew++;
    }
    
    return (newArr[n-1] + newArr[n]) / 2.0;
}

int main()
{
    int arr1[] = { 1 , 4 , 7 , 10 };
    int arr2[] = { 2 , 3 , 5 , 11 };
    
    float midPoint = findMidPoint( arr1 , arr2 , 4 );
    cout << midPoint << endl;
    
    return 0;
}
