#include <stdio.h>
#include <stdlib.h>

	void nums();

	int main()
	 {
	int num,num1;
	printf(" Ingrese un numero : ");
	scanf("%d",&num);
	printf(" Ingrese otro numero : ");
	scanf("%d",&num1);
	nums(num,num1);
	}

	void nums(int num, int num1)
	{
		if (num>num1)
		{
			printf(" %d Es mayor que %d ",num,num1);
		}
		else if(num1>num)
		{
			printf(" %d Es mayor que %d ",num1,num);
		}
		else
		{
			printf(" %d Es igual que %d ",num,num1);
		}

	}
