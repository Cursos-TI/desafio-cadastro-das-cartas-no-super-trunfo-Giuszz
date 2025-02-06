#include <stdio.h>

int main (){

printf ("Desafio Supertrunfo :D\n");

char estado[20];
char codigodacarta [20];
char nomecidade [20];
int populacao;
float areakm;
float pib;
int pontosturisticos;

float pibpercapita = pib /  populacao;
float densidadepop = populacao / areakm;

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

printf ("Estado: %s \n", estado);
printf ("Código da carta: %s \n", codigodacarta);
printf ("Nome da cidade: %s \n", nomecidade);
printf ("População: %d \n", populacao);
printf ("Área (Km²): %f \n", areakm);
printf ("PIB: %f \n", pib);
printf ("Pontos turísticos: %d \n", pontosturisticos);
printf ("PIB per capita: %f \n", pibpercapita);
printf ("Densidade populacional: %f \n", densidadepop);








return 0;
}