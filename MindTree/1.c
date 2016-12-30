/*
  Create the function which rotates the matrix on the basis of third argument 
    if it is 0 rotate left
    if it is 1 rotate right
*/

#include<conio.h>
#include<stdio.h>
#include <stdlib.h>

int ** myRotate ( int** matrix , int m , int n , int flag );

int main()
{
    int flag , m = 3 , n = 3 ,r_i,c_i;
    int count = 1;

    int** matrix = (int**)malloc(m * sizeof(int*));
    for ( r_i = 0 ; r_i < m ; ++r_i )
        matrix[r_i] = (int*)malloc(n * sizeof(int));

    for( r_i = 0 ; r_i < m ; r_i++ )
    {
        for( c_i = 0 ; c_i < n ; c_i++ )
        {
            matrix[r_i][c_i] = count;
            count++;
        }
    }

    printf("Enter 0 to rotate left and enter 1 to rotate right: ");
    scanf(" %d",&flag);


    matrix = myRotate( matrix , m , n , flag );

    for( r_i = 0 ; r_i < m ; r_i++ )
    {
        for( c_i = 0 ; c_i < n ; c_i++ )
        {
            printf("%d ",matrix[r_i][c_i]);
        }
        printf("\n");
    }

    return 0;
}


int ** myRotate ( int **matrix , int m , int n , int flag )
{
    int newMatrix[m][n];
    int r_i,c_i;
    int count = 10;
    for( r_i = 0 ; r_i < m ; r_i++ )
    {
        for( c_i = 0 ; c_i < n ; c_i++ )
        {
            matrix[r_i][c_i] = count;
            count++;
        }
    }

    if( flag == 0 )         //to rotate left
    {
        for( r_i = 0 ; r_i < m ; r_i++ )
        {
            for( c_i = 0 ; c_i < n ; c_i++ )
            {
                newMatrix[r_i][c_i] = matrix[r_i][c_i];
            }
        }
    }
    else
    {
        for( r_i = 0 ; r_i < m ; r_i++ )
        {
            for( c_i = 0 ; c_i < n ; c_i++ )
            {
                newMatrix[r_i][c_i] = matrix[r_i][c_i];
            }
        }
    }
    for( r_i = 0 ; r_i < m ; r_i++ )
    {
        for( c_i = 0 ; c_i < n ; c_i++ )
        {
            matrix[r_i][c_i] = newMatrix[r_i][c_i];
        }
    }
    return matrix;
}
