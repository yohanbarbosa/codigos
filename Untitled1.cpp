#include <stdio.h>

int main() {

float num1, num2, result;

int oper;

printf("Ingrese el primer n�mero: ");

scanf("%f", &num1);

printf("Ingrese el operador (+, -, *, /): ");

scanf(" %i", &oper);

printf("Ingrese el segundo n�mero: ");

scanf("%f", &num2);

switch(oper) {

case 1 :

result = num1 + num2;

printf("%.2f + %.2f = %.2f", num1, num2, result);

break;

case 2 :

result = num1 - num2;

printf("%.2f - %.2f = %.2f", num1, num2, result);

break;

case 3 :

result = num1 * num2;

printf("%.2f x %.2f = %.2f", num1, num2, result);

break;

case 4 :

if(num2 != 0){

result = num1 / num2;

printf("%.2f / %.2f = %.2f", num1, num2, result);

}

else{

printf("No se puede dividir entre cero");

}

break;

default:

printf("Operador inv�lido");

break;

}

return 0;

}
