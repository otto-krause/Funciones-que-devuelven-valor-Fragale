#include <stdlib.h>
#include <stdio.h>
int presion();

int main()
{
    float  p=0;
    p=presion();
    printf("La presion de la superficie es de: %.1f\n", p);
    return 0;
  }

int presion()
{
    int alt, bas, A=0, F=0;
    float  p=0;
    printf("ingrese la altura y la base de la superficie:\n");
    scanf("%d \n%d", &alt, &bas);
    A=alt*bas;
    printf("Ingrese la fuerza: ");
    scanf("%d", &F);
    p=F/A;
    return p;
}
