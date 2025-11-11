#include <stdio.h>
#include <string.h>

int main(int number){ 
    scanf("%d", &number);
    int aux, contador = 0;
    if(number != 0){
        aux = number;
        while(aux != 0){
        aux = aux/10;
        contador++; // contador é o numero de digitos
        }
        int digitos[contador+1];
        for(int i = contador-1; i >= 0 ; i--){
            aux = number%10;
            digitos[i] = aux;
            number /= 10;
        }

        for(int i=0; i < contador; i++){
            digitos[i] = digitos[i] * digitos[i];
        }
        for(int i=1; i < contador; i++){
            if(digitos[i] >= 10){
                digitos[0] = (digitos[0] * 100) + digitos[i];
            }else if(digitos[i] < 10){
                digitos[0] = (digitos[0] * 10) + digitos[i];
            }
        }
        number = digitos[0];
    }
    return number;
}

