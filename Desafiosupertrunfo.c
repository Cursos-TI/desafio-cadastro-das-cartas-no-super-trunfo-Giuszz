#include <stdio.h>

int main (){

printf ("Desafio Supertrunfo Iniciante :D \n");

int codigo, pontosturisticos, populacao;
float pib;
double area;
char nomecidade[20];

printf ("Digite o nome da cidade:");
scanf ("%s", &nomecidade);

printf ("Digite o código da carta:");
scanf ("%d", &codigo);

printf ("Digite a população:");
scanf ("%d", &populacao);

printf ("Digite o número de pontos turísticos:");
scanf("%d", &pontosturisticos);

printf ("Digite a área:");
scanf ("%d", &area);

printf ("Digite o PIB:");
scanf ("%f", &pib);

printf ("Nome da cidade: %s \n", nomecidade);
printf ("Código: %d \n",codigo);
printf ("População: %d \n", populacao);
printf ("Àrea: %d \n", area);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("PIB: %f \n", pib);

 return 0;
}