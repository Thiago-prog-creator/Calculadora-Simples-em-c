#include <stdio.h>

int main() {
    float num1, num2;
    char operador;

    printf("=== CALCULADORA BASICA ===\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operador);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(operador) {
        case '+':
            printf("\nResultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("\nResultado: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("\nResultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0) {
                printf("\nResultado: %.2f\n", num1 / num2);
            } else {
                printf("\nErro: Divisao por zero!\n");
            }
            break;
        default:
            printf("\nOperacao invalida!\n");
    }

    return 0;
}