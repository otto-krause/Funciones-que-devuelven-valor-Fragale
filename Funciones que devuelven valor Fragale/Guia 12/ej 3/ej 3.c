#include <stdio.h>
#include <stdlib.h>

	float ph(float ch,float ct);
	float pm(float cm, float ct);

	int main()
	{
	float ct=0,cch,ccm,pm,ph;
	printf("Ingrese la cantidad de curriculums de hombres ");
	scanf("%f",&cch);
	printf("Ingrese la cantidad de curriculums de mujeres ");
	scanf("%f",&ccm);
	ct=cch+ccm;
	ph=ph(cch,ct);
	pm=pm(ccm,ct);
	printf("\n El porcentaje de hombres es %.2f",ph);
	printf("\n El porcentaje de mujeres es %.2f",pm);
	}
	float ph(float cch, float ct)
	{
	return (cch*100)/ct;
	}

	float pm(float ccm, float ct)
	{
	return (ccm*100)/ct;

	}
