/******************************************************************************

Crie um programa que exibe um menu de calculadora na tela. O menu exibido deve ser o seguinte:
Digite 1 para somar dois valores
Digite 2 para subtrair dois valores
Digite 3 para multiplicar dois valores
Digite 4 para dividir dois valores
Digite 5 para realizar uma potência entre dois valores
Digite 6 para realizar uma radiciação entre dois valores
Digite qualquer outro número para sair
De acordo com a opção informada pelo usuário, 
solicite os valores necessários para o usuário e imprima na tela o resultado da operação realizada.


*******************************************************************************/
#include <stdio.h>
#include <math.h>


int main() {
    int opcao;
    float num1, num2, resultado;


    do {
        printf("\nDigite 1 para somar dois valores\n");
        printf("Digite 2 para subtrair dois valores\n");
        printf("Digite 3 para multiplicar dois valores\n");
        printf("Digite 4 para dividir dois valores\n");
        printf("Digite 5 para realizar uma potência entre dois valores\n");
        printf("Digite 6 para realizar uma radiciação entre dois valores\n");
        printf("Digite qualquer outro número para sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:
                printf("Digite dois valores para somar: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                printf("Digite dois valores para subtrair: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                printf("Digite dois valores para multiplicar: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                printf("Digite dois valores para dividir: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Não é possível dividir por zero!\n");
                }
                break;
            case 5:
                printf("Digite a base e o expoente para calcular a potência: ");
                scanf("%f %f", &num1, &num2);
                resultado = pow(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 6:
                printf("Digite o valor e o índice para calcular a radiciação: ");
                scanf("%f %f", &num1, &num2);
                resultado = pow(num1, 1.0 / num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao >= 1 && opcao <= 6);


    printf("Programa encerrado.\n");


    return 0;
}
