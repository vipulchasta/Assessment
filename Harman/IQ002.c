#include <stdio.h>

int main(void)
{
	int userInput;
	int hh,mm,ss;

	scanf(" %d",&userInput);

	mm = userInput / 60;
	ss = userInput % 60;

	hh = mm / 60;
	mm = mm % 60;

	printf("%d sec are equivalent to : %.2d:%.2d:%.2d \n",userInput,hh,mm,ss);

	return 0;
}
