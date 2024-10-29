#include <stdio.h>
#include <math.h>
int main() {
    //dados
    int estadocivil;
    //saída e entrada
    printf("Informe qual seu estado civil aparti dos numeros 1-Solteiro 2-Casado 3-Divorciado 4-viuvo: ");
    scanf("%d", &estadocivil);
    //se
    if (estadocivil==1){
        printf("Solteiro");
    }
    else if (estadocivil==2){
        printf("Casado");
    }
    else if (estadocivil==3){
        printf("Divorciado");
    }
    else if (estadocivil==4){
        printf("viuvo");
    }
    else{
        printf("invalido");
    }
 
}
