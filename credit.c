#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

char* numero= get_string("Numero:" );
int somaimpar = 0;
int somapar = 0;
int sum = 0;
int valida = 0;
int alternate = 0;
int cont = strlen(numero);
//printf("%i",cont);

if(cont == 13 || cont == 15 || cont == 16){

    for(int i = cont-1; i >= 0; i--){

    int digit = numero[i] - '0';

        if (alternate) {
            // Multiplica por 2 os dígitos em posições ímpares
            digit *= 2;

            // Se o resultado for maior que 9, subtrai 9
            if (digit > 9) {
                digit -= 9;
            }
        }

        // Soma os dígitos
        sum += digit;
        alternate = !alternate;

    }

    //printf("%i",somaimpar);
    //valida = somapar + somaimpar;
    //printf("%i\n", somapar);
    //printf("%i\n", somaimpar);

    if(sum % 10 == 0){

        if(numero[0] == '4'){
            printf("%s\n", "VISA");
        }else if(numero[0] == '5' && ((char)numero[1] > 48 && (char)numero[1] < 54)){
            printf("%s\n", "MASTERCARD");
        }else if(numero[0] == '3' && (numero[1] == '4'|| numero[1] == '7')){
            printf("%s\n", "AMEX");
        }else{
            printf("%s\n", "INVALID");
        }
    }else{
        printf("%s\n", "INVALID");
    }
}else{
    printf("%s\n", "INVALID");
}
}