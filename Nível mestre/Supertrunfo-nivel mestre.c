#include<stdio.h> //Inclusão da biblioteca necessária para o uso das funções printf e scanf.
int main(){
    // Nesta parte do programa são declarados os tipos e as variáveis utilizadas para cada carta do jogo.  
    char estado,codigo_carta[4],nome_cidade[20];
    int numero_pontos_turisticos1,numero_pontos_turisticos2,Carta_1=1,Carta_2=0;
    unsigned long int populacao1=1274565890, populacao2=1274565890;
    float area1,densidade_populacional1,PIB1,PIB_percatpita1,super_poder1;
    float area2,densidade_populacional2,PIB2,PIB_percapta2,super_poder2;
    /*Esta parte do código é responsável por solicitar ao usuário que preencha as informações referentes à Carta_1, armazenando-as 
    nas respctivas variáveis*/

     printf( "INSIRA OS DADOS DA CARTA_1.\n ");

     printf("Primeiro escolha entre os estados (A,B,C...ou H): \n");
     scanf(" %c",&estado);    
     printf("Agora selecione o Codigo da carta/cidade de acordo com o estado anteriormene selecionado (ex:A01,A02,B03,B04,C05 ): \n");
     scanf(" %s",&codigo_carta); 
     printf("Agora informe o nome da cidade: \n");
     scanf("%s",nome_cidade);  
     printf("Agora informe a população da cidade selecionada: \n");
     scanf("%ul",&populacao1);   
     printf("Agora informe a quantidade de pontos turisticos da cidade selecionada: \n");
     scanf("%d",&numero_pontos_turisticos1); 
     printf("Agora informe a área em (km²) da cidade selecionada:\n");
     scanf("%f",&area1);
     printf("Agora informe o PIB da cidade selecionada:\n");
     scanf("%f",&PIB1);
     
     /*Esta parte do código imprimi na tela os dados informados pelo usuário para a Carta_1, calculando também a densidade populacional
     e o PIB percapita*/
     printf("O Estado selecionado para a Carta_1 é: %c\n", estado);
     printf("O código Selecionado para a Carta_1 é: %s\n",codigo_carta);
     printf("O nome da Cidade para a Carta_1 é: %s\n",nome_cidade);
     printf("A população da cidade para a Carta_1 é:%u\n",populacao1);
     printf("A quantidade de pontos turisticos para a Carta_1 é:%d\n",numero_pontos_turisticos1);
     printf("A área da cidade em (Km²) para a Carta_1 é:%.2f ",area1);
     printf("Km²\n");
     printf("O PIB da cidade selecionada para a Carta_1 é:%.2f",PIB1);
     printf(" bilhões de reais\n");

    // parte do código que calcula a densidade populacional,o PIB_percapta e o super_poder para a Carta_1
     densidade_populacional1= (populacao1/area1);
     PIB_percatpita1= (float) (PIB1/populacao1);
     super_poder1= (float)(numero_pontos_turisticos1+populacao1+area1+PIB1+PIB_percatpita1+1/densidade_populacional1);

     printf("O valor da densidade populacional para a Carta_1 é:%.2f",densidade_populacional1);
     printf(" hab/Km²\n");
     printf("O valor do PIB_Percapita da cidade para a Carta_1 é:%.2f",PIB_percatpita1);
     printf(" reais\n");
     printf("O super poder da Carta_1 é:%.2f",super_poder1);
     printf(" HP\n\n");
    
     /*Neste ponto do código é solicitado ao usuário que insira as informações referentes à Carta_2, 
     armazenando-as nas respectivas variáveis*/    
     printf( "INSIRA OS DADOS DA CARTA_2.\n ");

     printf("Primeiro escolha entre os estados (A,B,C...ou H): \n");
     scanf(" %c",&estado); 
     printf("Agora selecione o Codigo da carta/cidade de acordo com o estado anteriormene selecionado (ex:A01,A02,B03,B04,C05 ): \n");
     scanf(" %s",&codigo_carta);
     printf("Agora selecione informe o nome da cidade: \n");
     scanf("%s",nome_cidade);  
     printf("Agora informe a população da cidade selecionada: \n");
     scanf("%ul",&populacao2);
     printf("Agora informe a quantidade de pontos turisticos da cidade selecionada: \n");
     scanf("%d",&numero_pontos_turisticos2); 
     printf("Agora informe a área em (km²) da cidade selecionada:\n");
     scanf("%f",&area2);
     printf("Agora informe o PIB da cidade selecionada:\n");
     scanf("%f",PIB2); 
     
     /*Esta parte do código imprimi na tela os dados informados pelo usuário para a Carta_2, calculando também a densidade populacional
     e o PIB percapita*/
     printf("O Estado selecionado para a Carta_2 é: %c\n", estado);
     printf("O Codigo selecionado para a Carta_2 é: %s\n",codigo_carta);
     printf("O nome da Cidade para a Carta_2 é: %s\n",nome_cidade);
     printf("A população da cidade para a Carta_2 é:%ul\n",populacao2);
     printf("A quantidade de pontos turisticos para a Carta_1 é:%d\n",numero_pontos_turisticos2);
     printf("A área da cidade em (Km²) para a Carta_2 é:%.2f ",area2);
     printf("Km²\n");
     printf("O PIB da cidade selcionada para a Carta_2 é:%.2f",PIB2);
     printf(" bilhões de reais\n");
     densidade_populacional2=(float) (populacao2/area2);
     PIB_percapta2= (float) (PIB2/populacao2);
     printf("O valor da densidade populacional para a Carta_2 é:%.2f",densidade_populacional2);
     printf(" hab/Km²\n");
     printf("O valor do PIB_Percapita da cidade para a Carta_2 e´:%.2f",PIB_percapta2);
     printf(" reais\n\n\n");

     /*Esta parte do código compara os atributos da Carta_1 e da Carta_2, dizendo qual carta vence */
     printf("*******Comparação de cartas***********\n\n");
     printf("População: A população da da cidade carta 1 é maior do que a da carta 2 ? %u\n",populacao1>populacao2);  
     printf("Área:A area da cidade carta 1 é maior do que a da carta 2 ? %.1f\n",area1>area2);  
     printf("Quantidade de pontors turisticos: O número de pontos turísticos da carta 1 é maior do que os da carta 2 ? %u\n",
     numero_pontos_turisticos1>numero_pontos_turisticos2);  
     printf("PIB: O PIB da cidade da carta 1 é maior do que o da carta 2 ? %.1f\n",populacao1>populacao2);  
     printf("Densidade populacional: A densidade populacional da carta 1 é maior do que a da carta 2 ? %u\n",densidade_populacional1<densidade_populacional2);  
     printf("PIB_percapta: O PIB da carta 1 é maior do que o da carta 2 ? %.1f\n",PIB_percatpita1>PIB_percapta2);  
     printf("Super Poder: O super poder da carta 1 é maior do que o da carta 2 ? %.1f\n",super_poder1>super_poder2);  
        
     
     


     return 0;  