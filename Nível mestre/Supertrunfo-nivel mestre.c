#include<stdio.h> //Inclusão da biblioteca necessária para o uso das funções printf e scanf.
int main(){
    // Nesta parte do programa são declarados os tipos e as variáveis utilizadas para cada carta do jogo.  
    char estado,codigo_carta[10],nome_cidade1[20], nome_cidade2[20];
    int numero_pontos_turisticos1,numero_pontos_turisticos2,soma_1=0,soma_2=0;
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
     scanf("%s",nome_cidade1);  
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
     printf("O nome da Cidade para a Carta_1 é: %s\n",nome_cidade1);
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
     scanf("%s",nome_cidade2);  
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
     printf("O nome da Cidade para a Carta_2 é: %s\n",nome_cidade2);
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


     /*Esta parte do código compara os atributos da Carta_1 e da Carta_2, dizendo qual carta vence em cada atributo. A carta que vencer
     o maior número de atributos ganha o jogo () */
     printf("*******Comparação de cartas***********\n\n");


    if(populacao1>populacao2) {
        printf("A carta 1 venceu no atributo população!!\n");
        soma_1=soma_1+1;
    }else{
        printf("A carta 2 venceu no atributo população!!\n");
        soma_2=soma_2+1;
    }
    if(numero_pontos_turisticos1>numero_pontos_turisticos2) {
        printf("A carta 1 venceu no atributo pontos turistícos!!\n");
        soma_1=soma_1+1;
    }else{
        printf("A carta 2 venceu no atributo nº de pontos turísticos!!\n");
        soma_2=soma_2+1;
    }
    if(area1>area2) {
        printf("A carta 1 venceu no atributo área!!\n");
        soma_1=soma_1+1;
    }else{
        printf("A carta 2 venceu no atributo área!!\n");
        soma_2=soma_2+1;
    }
    if(densidade_populacional1>densidade_populacional2){
        printf("A carta 1 venceu no atributo densidade populacional\n");
        soma_1=soma_1+1;
    }else{
        printf("A carta 2 venceu no atributo densidade populacional\n");
        soma_2=soma_2+1;
    }
     if(PIB1>PIB2) {
        printf("A carta 1 venceu no atributo PIB!!\n");
        soma_1=soma_1+1;
     }else{
        printf("A carta 2 venceu no atributo PIB!!\n");
        soma_2=soma_2+1;
     }
     if(PIB_percatpita1>PIB_percapta2){
        printf("A carta 1 venceu no atributo PIB-percapta!!\n");
        soma_1=soma_1+1;
     }else{
        printf("A carta 2 venceu no atributo PIB_percatpta!\n");
        soma_2=soma_2+1;

     }
     if(super_poder1>super_poder2){
        printf("A carta 1 venceu no atributo super poder!!\n");
        soma_1=soma_1+1;
     }else{
        printf("A carta 2 venceu no atributo super poder!!\n");
        soma_2=soma_2+1;
     }
     if(soma_1>soma_2)
{
    printf("A carta 1 venceu o jogo com o total de %d,",soma_1);
    printf("atributos vencedores\n");
    printf("A cidade de %s",nome_cidade1);
    printf (" foi a grande vencedora do desafio super trunfo!!!\n");
}      
    else{
        printf("A carta 2 venceu o jogo com o total de %d",soma_2);
        printf("atributos vencedores!!");
        printf("A cidade de %s",nome_cidade2);
        printf (" foi a grande vencedora do desafio super trunfo!!!\n");

    }    
     
     

     return 0;  
    }