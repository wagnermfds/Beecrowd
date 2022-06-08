#include <stdio.h>
#include <math.h>

int main() {

char vendedor;
double salario, vendas, total;

scanf("%s", &vendedor);
scanf("%lf\n%lf", &salario, &vendas);

total = salario+(vendas*.15);

printf("TOTAL = R$ %.2lf\n", total);


    return 0;
}