    #include <stdio.h>
    #include <locale.h>
    #include <stdlib.h>

    int main(){
        setlocale(LC_ALL, "");
        float numero1=0;
        float numero2=0;
        int operação=0;
        float resultado=0;
        char repetição='s';
        while(repetição == 's' || repetição == 'S') {
            system("cls");
            printf("===============================\n");
            printf("   Calculadora Simples\n");
            printf("===============================\n");
            printf("Selecione uma operação:\n");
            printf("1. Adição\n");
            printf("2. Subtração\n");
            printf("3. Multiplicação\n");
            printf("4. Divisão\n");
            printf("5. Sair\n");
            printf("Opção:");
            scanf("%d", &operação);
                if(operação != 1 && operação != 2 && operação != 3 && operação != 4 && operação != 5){
                    do {
                    printf("Essa não é uma opção válida, por favor insira um número de 1 a 5\n");
                    scanf("%d", &operação);
                }
                while(operação != 1 && operação != 2 && operação != 3 && operação != 4 && operação != 5);
                }
                if (operação == 5){
                    break;
                }
                
                
            system("cls");
            printf("digite o primeiro número: ");
            scanf("%f", &numero1);
            printf("digite o segundo número: ");
            scanf("%f", &numero2);
                
                if (operação == 1){
                    resultado = numero1 + numero2;
                    printf("resultado: %f + %f = %f\n",numero1, numero2, resultado);
                }
                if (operação == 2){
                    resultado = numero1 - numero2;
                    printf("resultado: %f - %f = %f\n", numero1, numero2, resultado);
                }
                if (operação == 3){
                    resultado = numero1 * numero2;
                    printf("resultado: %f x %f = %f\n", numero1, numero2, resultado);
                }
                if (operação == 4){
                        if(numero2 == 0){
                            printf("Erro: Divisão por zero não é permitida.\n");
                        } else {
                            resultado = numero1 / numero2;
                            printf("resultado: %f / %f = %f\n", numero1, numero2, resultado);
                        }
                    }
                    
                    
            do{
                printf("Deseja realizar outra operação? (s/n): ");
                scanf(" %c", &repetição);
                    if(repetição != 'n' && repetição != 'N' && repetição != 's' && repetição != 'S'){
                        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                    }
            }while(repetição != 'n' && repetição != 'N' && repetição != 's' && repetição != 'S');

        }
        printf("Obrigado por usar a calculadora! Até a próxima.");

        return 0;
    }
