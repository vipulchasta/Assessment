#include <stdio.h>
#include <string.h>


int main(void)
{
	int i, j;
    int wordStartIndex, wordEndIndex, wordLength;

	char strIn[100];
	int strInLen = 0;

	char strOut[100];
	int strOutIndex = 0;

	gets(strIn);

	printf("Input String is: %s\n",strIn);

    strInLen = 0;
    while( strIn[strInLen] != '\0' )
        strInLen++;

	for( i = strInLen-1 ; i >=0 ; i-- )
	{
		wordEndIndex = i;
		wordLength = 0;
		while( i >=0 && (strIn[i] != ' ') )
		{
			i--;
			wordLength++;
		}
		wordStartIndex = i+1;

		j = 0;
		while( j < wordLength )
		{
			strOut[strOutIndex] = strIn[wordStartIndex+j];
			strOutIndex++;
			j++;
		}
		strOut[ strOutIndex ] = ' ';
		strOutIndex++;
	}
	strOut[ strOutIndex ] = '\0';

	printf("Output String is: %s\n",strOut);

	return 0;
}
