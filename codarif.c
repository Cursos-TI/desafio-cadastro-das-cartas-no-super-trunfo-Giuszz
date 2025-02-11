#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo =1000;

    printf ("Insira a temperatura:\n");
    scanf ("%f", &temperatura);
    printf ("Insira a umidade: \n");
    scanf ("%f", &umidade);
    printf ("Insira o estoque:");
    scanf ("%u", &estoque);

    if (temperatura > 30){
        printf ("Temperatura está alta \n");
        }
        else {
            printf ("Temperatura está dentro dos parâmetros\n");
        }

    if (umidade > 50){
        printf ("Umidade elevada \n");
    }
    else { 
        printf ("Umidade está dentro dos parâmetros");
    }

    if (estoque < estoqueminimo){
        printf ("Estoque abaixo do mínimo");
        }
    else {
        printf ("Estoque em nível normal");
    }

    




    }














