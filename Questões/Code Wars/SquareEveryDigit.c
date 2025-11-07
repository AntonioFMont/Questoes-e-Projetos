#include <stdio.h>
#include <string.h>

int main(){
    int number; 
    char vetor[100];
    int aux, aux2, contador;
    printf("type the number: ");
    scanf("%d", &number);

    sprintf(vetor, "%d", number);
    printf("%s", vetor);

}

