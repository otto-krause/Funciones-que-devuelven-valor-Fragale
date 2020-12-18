#include <stdio.h>
#include <stdlib.h>

	float ocho(float n);
	int main()
	 {
	float n=0,oc;
	printf(" Ingrese un numero ");
	scanf("%f",&n);
	oc=ocho(n);
	printf(" La octava parte de %.2f es %.2f ",n,oc);
	}
	float ocho (float n)
	{
		return n/8;
	}
