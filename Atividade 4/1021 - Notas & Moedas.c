#include <stdio.h>

int main() {
    double valorRecebido;
    int valorCentavos = 0;
    int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0;
    int moedas1Real = 0, moedas50Centavos = 0, moedas25Centavos = 0, moedas10Centavos = 0, moedas5Centavos = 0, moedas1Centavo = 0;

    scanf("%lf", &valorRecebido);
    valorCentavos = (int)(valorRecebido * 100 + 0.5);

    notas100 = valorCentavos / 10000;
    valorCentavos %= 10000;
    
    notas50 = valorCentavos / 5000;
    valorCentavos %= 5000;
    
    notas20 = valorCentavos / 2000;
    valorCentavos %= 2000;
    
    notas10 = valorCentavos / 1000;
    valorCentavos %= 1000;
    
    notas5 = valorCentavos / 500;
    valorCentavos %= 500;
    
    notas2 = valorCentavos / 200;
    valorCentavos %= 200;

    moedas1Real = valorCentavos / 100;
    valorCentavos %= 100;
    
    moedas50Centavos = valorCentavos / 50;
    valorCentavos %= 50;
    
    moedas25Centavos = valorCentavos / 25;
    valorCentavos %= 25;
    
    moedas10Centavos = valorCentavos / 10;
    valorCentavos %= 10;
    
    moedas5Centavos = valorCentavos / 5;
    valorCentavos %= 5;
    
    moedas1Centavo = valorCentavos;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", notas100, notas50, notas20, notas10, notas5, notas2, moedas1Real, moedas50Centavos, moedas25Centavos, moedas10Centavos, moedas5Centavos, moedas1Centavo);

    return 0;
}

