#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2, r, i = 0, op, cont;

    while(i == 0){
        printf("Qual o primeiro numero? \n");
        scanf("%d", &n1);
        printf("Qual operacao voce deseja realizar:\n1. (soma)\n2. (subtracao)\n3. (multiplicacao)\n4. (divisao)\n");
        scanf("%d", &op);
        printf("Qual o segundo numero? \n");
        scanf("%d", &n2);

        switch (op){
            case 1:
                printf("o resultado e: %d\n", n1 + n2);
                printf("Deseja continuar? (1 = sim, 2 = nao) ");
                scanf("%d", &cont);

                if(cont == 2){
                    i = 1;
                    break;
                } else if(cont == 1){
                    i = 0;
                    break;
                }

            case 2:
                printf("o resultado e: %d\n", n1 - n2);
                printf("Deseja continuar? (1 = sim, 2 = nao) ");
                scanf("%d", &cont);

                if(cont == 2){
                    i = 1;
                    break;
                } else if(cont == 1){
                    i = 0;
                    break;
                }
            
            case 3:
                printf("o resultado e: %d\n", n1 * n2);
                printf("Deseja continuar? (1 = sim, 2 = nao) ");
                scanf("%d", &cont);

                if(cont == 2){
                    i = 1;
                    break;
                } else if(cont == 1){
                    i = 0;
                    break;
                }
            
            case 4:
                printf("o resultado e: %d\n", n1 / n2);
                printf("Deseja continuar? (1 = sim, 2 = nao) ");
                scanf("%d", &cont);

                if(cont == 2){
                    break;
                    i = 1;
                } else if(cont == 1){
                    i = 0;
                    break;
                }

            default:
                printf("Digite um operador valido!\n");
        }
        
    }

    return 0;
}