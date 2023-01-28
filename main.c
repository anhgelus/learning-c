#include <stdio.h>

int main() {
    /* Exo 1 de zestedesavoir.com */
    int a,b;
    printf("Bonjour !");
    printf("Veuillez saisir le premier nombre : ");
    scanf("%d", &a);
    printf("Veuillez saisir le deuxième nombre : ");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %f\n", a, b, a/(double)b);
    return 0;
}
