#include <stdio.h>

int main (){

printf ("Desafio Supertrunfo Iniciante :D \n");

int codigo, pontosturisticos, populacao;
float pib;
double area;
char nomecidade[20];
float densidadepop;
float pibpercapta;

printf ("Digite o nome da cidade:\n");
scanf ("%s", &nomecidade);

printf ("Digite o código da carta:\n");
scanf ("%d", &codigo);

printf ("Digite a população:\n");
scanf ("%d", &populacao);

printf ("Digite o número de pontos turísticos:\n");
scanf("%d", &pontosturisticos);

printf ("Digite a área:\n");
scanf ("%d", &area);

printf ("Digite o PIB:\n");
scanf ("%f", &pib);

densidadepop = populacao/area;
pibpercapta= pib/populacao;

printf ("Nome da cidade: %s \n", nomecidade);
printf ("Código: %d \n",codigo);
printf ("População: %d \n", populacao);
printf ("Àrea: %d \n", area);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("PIB: %2.f \n", pib);
printf("Densidade populacional: %f \n", densidadepop);
printf("PIB per capita:%f \n", pibpercapta);

 return 0;
}