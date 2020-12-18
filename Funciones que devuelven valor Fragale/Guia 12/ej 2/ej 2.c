#include <stdlib.h>
#include <stdio.h>
int b=0, h=0;
int perimetro();
int area();

int perimetro()
{
    int perim;
    printf("Ingrese la base y la altura del rectangulo\n");
    scanf("%d %d", &b, &h);
    perim = 2*b + 2*h;
    return perim;
}

int area()
{
    int clar;
    clar = b + h;
    return clar;
}

int main()
{
    int prm, ar;
    prm = perimetro();
    ar = area();
    system("cls");
    printf("El perimetro del rectangulo es %d y el area es %d", prm, ar);
    return 0;
}
