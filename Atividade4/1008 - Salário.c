#include <stdio.h>
 
int main() {
 int num = 0, horas = 0;
 double valor = 0.0, salario = 0;
 scanf("%d\n%d\n%lf", &num, &horas, &valor);
 salario = horas*valor;
 printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,salario);
 
    return 0;
}
