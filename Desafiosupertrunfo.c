#include <stdio.h>
#include <math.h>

int main (){

printf ("Desafio Supertrunfo :D\n");

char estado[20];
char codigodacarta [20];
char nomecidade [20];
int populacao;
float areakm;
float pib;
int pontosturisticos;

printf ("Vamos cadastrar as cartas!\n");


printf("Insira o estado (sigla):\n");
scanf ("%s", &estado);

printf ("Digite o código da carta:\n");
scanf ("%s", &codigodacarta);

printf ("Digite o nome da cidade:\n");
scanf ("%s", &nomecidade);

printf ("Agora, digite a população da cidade:\n");
scanf ("%d", &populacao);

printf ("Digite a área em km²:\n");
scanf ("%f", &areakm);

printf ("Digite o PIB da cidade: \n");
scanf ("%f", &pib);
printf ("Por último, digite o número de pontos turísticos: \n");
scanf ("%d", &pontosturisticos);

float pibpercapita = pib / populacao;
float densidadepop = areakm / populacao;

float superpoder = areakm + populacao + pib + pontosturisticos;


printf ("Estado: %s \n", estado);
printf ("Código da carta: %s \n", codigodacarta);
printf ("Nome da cidade: %s \n", nomecidade);
printf ("População: %d \n", populacao);
printf ("Área (Km²): %2.f \n", areakm);
printf ("PIB: %2.f \n", pib);
printf ("Pontos turísticos: %d \n", pontosturisticos);
printf ("PIB per capita: %f \n", pib/populacao);
printf ("Densidade populacional: %f \n", areakm/populacao);
printf ("Superpoder: %3.f \n", superpoder);

printf ("A primeira carta foi finalizada.\n");

char estado2[20];
char codigodacarta2 [20];
char nomecidade2 [20];
int populacao2;
float areakm2;
float pib2;
int pontosturisticos2;

printf ("Agora, insira os dados da segunda: \n");

printf ("Insira o estado (sigla): \n");
scanf ("%s", &estado2);

printf ("Digite o código da carta: \n");
scanf ("%s", &codigodacarta2);

printf ("Digite o nome da cidade: \n");
scanf ("%s", &nomecidade2);

printf ("Digite a população da cidade: \n");
scanf ("%d", &populacao2);

printf ("Digite a área em km²: \n");
scanf ("%f", &areakm2);

printf ("Digite o PIB da cidade: \n");
scanf ("%f", &pib2);

printf ("Por último, digite o número de pontos turísticos: \n");
scanf ("%d", &pontosturisticos2);

float pibpercapita2 = pib2 / populacao2;
float densidadepop2 = areakm2 / populacao2;

float superpoder2 = areakm2 + pib2 + populacao2 + pontosturisticos2;

printf ("Estado: %s \n", estado2);
printf ("Código da carta: %s \n", codigodacarta2);
printf ("Nome da cidade: %s \n", nomecidade2);
printf ("População: %d \n", populacao2);
printf ("Área (Km²): %2.f \n", areakm2);
printf ("PIB: %2.f \n", pib2);
printf ("Pontos turísticos: %d \n", pontosturisticos2);
printf ("PIB per capita: %f \n", pib2/populacao2);
printf ("Densidade populacional: %f \n", areakm2/populacao2);
printf ("Superpoder: %3.f \n", superpoder2);

if (densidadepop<densidadepop2){
  if ( pibpercapita>pibpercapita2){
    if (superpoder>superpoder2){
        printf ("A carta 1 é a vencedora!");
    }
  }
}
  else {
    printf("A carta 2 é a vencedora!");
  }

  if (densidadepop<densidadepop2){
    if (pibpercapita<pibpercapita2){
        if (superpoder>superpoder2){
            printf ("A carta 1 é a vencedora!");
        }
    }
  }
        else {
            printf ("A carta 2 é a vencedora!");
      
 if (densidadepop>densidadepop2){
    if (pibpercapita>pibpercapita2){
        if (superpoder>superpoder2){
            printf ("A carta 1 é a vencedora!");
        }
    }
 }
else {
    printf ("A carta 2 é a vencedora!");
}

if (densidadepop<densidadepop2){
    if (pibpercapita>pibpercapita2){
        if (superpoder<superpoder2){
            printf ("A carta 1 é a vencedora!");
        }
    }
}
else {
    printf ("A carta 2 é a vencedora!");
}









return 0;
}