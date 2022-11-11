#include<stdio.h>
int main()
{
	int decimel, binary[100], i, j;
	printf("Enter Decimel Number: ");
	scanf("%d", &decimel);
	if(decimel == 0)
	{
		printf("Binary Number Is: 0");
	}else{
		for(i = 0; decimel>0; i++)
		{
			binary[i] = decimel % 2;
			decimel = decimel / 2;
		}
		printf("Binary Number Is: ");
	}
	for(j = i-1; j>=0; j--)
	{
		printf("%d", binary[j]);
	}
	return 0;
}