#include <stdio.h>
int main()
{
	int caracter;
	printf("\n Digita uma letra:\n");
	scanf("%d", &caracter);
	printf("\n %c, %d",caracter, caracter);
	if(caracter >= 48 && caracter <= 57)
	{
		printf("\n E um numero!");
	}
	else
	{
		printf("\n E uma letra");
	}
	return 0;
}
