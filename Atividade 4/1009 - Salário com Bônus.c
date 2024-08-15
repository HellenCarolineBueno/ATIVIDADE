#include <stdio.h>
 
int main() {
 char nome[30];
 double total = 0.0, salariofixo = 0.0, totalvendas = 0.0;
 scanf("%s\n",nome);
 scanf("%lf\n%lf", &salariofixo, &totalvendas);
 total = salariofixo + (totalvendas*0.15);
 printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
