#include<stdio.h>
int main()
{
	int decimal, binary[100], i, j;
	printf("Enter Decimal Number: ");
	scanf("%d", &decimal);
	if(decimal == 0)
	{
		printf("Binary Number Is: 0");
	}else{
		for(i = 0; decimal>0; i++)
		{
			binary[i] = decimal % 2;
			decimal = decimal / 2;
		}
		printf("Binary Number Is: ");
	}
	for(j = i-1; j>=0; j--)
	{
		printf("%d", binary[j]);
	}
	return 0;
}
