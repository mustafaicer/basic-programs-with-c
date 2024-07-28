#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, number;
	printf("Please enter  a number : ");
	scanf("%d",&number);
	if(number < 1 || number > 10)
	{
		printf("Please don't do that!");
	}
	else
	{
		for(i = 1; i <= 10; i++){
			printf("%d x %d = %d \n",number,i,i*number);
		}
	}
	return 0;
}
