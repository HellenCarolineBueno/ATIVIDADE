#include <stdio.h>

int main() {
    int valorOriginal = 0, valorRestante = 0;
    int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, notas1 = 0;

    scanf("%d", &valorRestante);
    valorOriginal = valorRestante;
    
    notas100 = valorRestante / 100;
    valorRestante = valorRestante % 100;
    
    notas50 = valorRestante / 50;
    valorRestante = valorRestante % 50;
    
    notas20 = valorRestante / 20;
    valorRestante = valorRestante % 20;
    
    notas10 = valorRestante / 10;
    valorRestante = valorRestante % 10;
    
    notas5 = valorRestante / 5;
    valorRestante = valorRestante % 5;
    
    notas2 = valorRestante / 2;
    valorRestante = valorRestante % 2;
    
    notas1 = valorRestante;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",
           valorOriginal, notas100, notas50, notas20, notas10, notas5, notas2, notas1);
    
    return 0;
}
