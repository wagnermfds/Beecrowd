#include <stdio.h>
 
int main() {

int codigo1, numero1, codigo2, numero2;
double valor1, valor2, valortotal;

scanf("%d %d", &codigo1, &numero1);
scanf("%lf\n", &valor1);

scanf("%d %d", &codigo2, &numero2);
scanf("%lf", &valor2);

valortotal = (numero1*valor1)+(numero2*valor2);

printf("VALOR A PAGAR: R$ %.2lf\n", valortotal);
 
    return 0;
}