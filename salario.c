#include <stdio.h>
 
int main() {

int funcionario, horas;

float salario, x;

scanf("%d", &funcionario);
scanf("%d", &horas);
scanf("%f", &salario);

x= salario*horas;

printf("NUMBER = %d\n", funcionario);
printf("SALARY = U$ %.2f\n", x);

    return 0;
}