#include <stdio.h>
 
 int soma (int a, int b){
    int resultado;
    resultado = a + b;
    return resultado;
 
 }
 int main (void) {

 int a, b;
 int resposta;
  prinft("Digite dois numeros para somar:\n");
  scanf("%d %d",&a, &b);

  resposta = soma(a, b);
  printf("%d + %d = %d\n", a , b, resposta);

    return 0;
}
