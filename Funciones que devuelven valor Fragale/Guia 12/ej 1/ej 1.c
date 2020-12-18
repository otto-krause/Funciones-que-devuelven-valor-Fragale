#include <stdlib.h>
#include <stdio.h>

int ing1();
int ing2();

int ing1()
{
    int n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);

    return n;
}
int ing2()
{
    int m1;
    printf("Ingrese otro numero\n");
    scanf("%d", &m1);
    return m1;
}

int main()
{
    int n, m1;
    n = ing1();
    m1 = ing2();
    system("cls");
    printf("Ingreso los numeros:\n");
    printf("%d\n", n);
    printf("%d", m1);
    return 0;
}
