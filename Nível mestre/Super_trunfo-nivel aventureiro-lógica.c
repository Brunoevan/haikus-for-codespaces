#include<stdio.h>//Inclusão da biblioteca necessária para o uso das funções printf e scanf.

int main(){
    /* Nesta parte do programa são declarados os tipos e as variáveis utilizadas para cada carta do jogo
    simplificando o nível anterior já atribuindo valores às variáveis.*/

    char estado,codigo_carta[10],nome_cidade1[20]="Belém", nome_cidade2[20]="Altamira";
    int numero_pontos_turisticos1=15,numero_pontos_turisticos2=6, escolhaUsuario;
    unsigned long int populacao1=127456, populacao2=226956;
    float area1=600,densidade_populacional1=545,PIB1=256554,PIB_percatpita1=700,super_poder1=54755;
    float area2=740,densidade_populacional2=780,PIB2=16458,PIB_percapta2=780,super_poder2=65874;

    // Menu_Interativo-Nesta parte do código seleciona a opção de acordo com o menu apresentado.
    printf("Escolha uma opção:\n");
    printf("1.Exibir informações sobre as cidades\n");
    printf("2.Compare o atributo população entre as cidades\n");
    printf("3.Compare o atributo Área entre as cidades\n");
    printf("4.Compare o atributo PIB entre as cidades\n");
    printf("5.Compare o atributo número de pontos turíticos entre as cidades\n");
    printf("6.Compare o atributo Densidade demográfica entre as cidades\n");
    scanf("%d",&escolhaUsuario);

     switch(escolhaUsuario){
        case 1:
        printf("######DADOS CIDADE 1#######\n");
        printf("A cidade 1 é: %s\n",nome_cidade1);
        printf("A população da cidade 1 é de: %.2ul\n",populacao1);
        printf("A área da cidade 1 é:%.2f\n",area1);
        printf("O PIB da cidade 1 é:%.2f\n",PIB1);
        printf("O número de pontos turísticos da cidade 1 é:%d\n",numero_pontos_turisticos1);
        printf("A densidade demográfica da cidade 1 é: %.2f\n\n",densidade_populacional1);

        printf("####DADOS CIDADE 2 ######\n");
        printf("A cidade 2 é: %s\n",nome_cidade2);
        printf("A população da cidade 2 é de: %.2ul\n",populacao2);
        printf("A área da cidade 2 é:%.2f\n",area2);
        printf("O PIB da cidade 2 é:%.2f\n",PIB2);
        printf("O número de pontos turísticos da cidade 2 é: %d\n",numero_pontos_turisticos2);
        printf("A densidade demográfica da cidade 2 é: %.2f\n\n",densidade_populacional2);
        break;

        case 2:
        if(populacao1>populacao2){
            printf("****No atributo população****\n");
            printf("A carta 1 tem população =%ul\n ",populacao1);
            printf("A carta 2 tem a população =%ul\n",populacao2); 
            printf("A carta 1 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade1);
            printf(" venceu!!");

        }else if(populacao1<populacao2){
             printf("****No atributo população****\n");
            printf("A carta 1 tem população =%ul\n ",populacao1);
            printf("A carta 2 tem a população =%ul\n",populacao2); 
            printf("A carta 2 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade2);
            printf(" venceu!!");
        }else{
            printf("Houve um empate\n");
        }
         break;
        case 3:
        if(area1>area2){
            printf("****No atributo Área****\n");
            printf("A carta 1 tem área =%.2f\n ",area1);
            printf("A carta 2 tem a área =%.2f\n",area2); 
            printf("A carta 1 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade1);
            printf(" venceu!!");
        }else if(area1<area2){
          printf("****No atributo Área****\n");
            printf("A carta 1 tem área =%.2f\n ",area1);
            printf("A carta 2 tem a área =%.2f\n",area2); 
            printf("A carta 2 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade2);
            printf(" venceu!!");
        }else{
            printf("Houve um empate\n");
        }
         break;
        case 4:
        if(PIB1>PIB2){
            printf("****No atributo PIB****\n");
            printf("A carta 1 tem PIB =%.2f\n ",PIB1);
            printf("A carta 2 tem PIB =%.2f\n",PIB2); 
            printf("A carta 1 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade1);
            printf(" venceu!!");
        }else if(PIB1<PIB2){
            printf("A carta 1 tem PIB =%.2f\n ",PIB1);
            printf("A carta 2 tem PIB =%.2f\n",PIB2); 
            printf("A carta 2 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade2);
            printf(" venceu!!");
        }else{
            printf("Houve um empate\n");
        }
         break;

        case 5:
        if(numero_pontos_turisticos1>numero_pontos_turisticos2){
            printf("****No atributo Nº de pontos turísticos****\n");
            printf("A carta 1 tem Nº de pontos turíticos =%d\n ",numero_pontos_turisticos1);
            printf("A carta 2 tem Nº de pontos turíticos =%d\n",numero_pontos_turisticos2); 
            printf("A carta 1 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade1);
            printf(" venceu!!");
        }else if(numero_pontos_turisticos1<numero_pontos_turisticos2){
            printf("****No atributo Nº de pontos turísticos****\n");
            printf("A carta 1 tem Nº de pontos turíticos =%d\n ",numero_pontos_turisticos1);
            printf("A carta 2 tem Nº de pontos turíticos =%d\n",numero_pontos_turisticos2); 
            printf("A carta 2 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade2);
            printf(" venceu!!");
        }else{
            printf("Houve um empate\n");
        }
         break;

        case 6:
        if(densidade_populacional1>densidade_populacional2){
            printf("****No atributo Densidade Populacional****\n");
            printf("A carta 1 tem Nº de pontos turíticos =%f\n ",densidade_populacional1);
            printf("A carta 2 tem Nº de pontos turíticos =%f\n",densidade_populacional2); 
            printf("A carta 2 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade2);
            printf(" venceu!!");
        }else if(densidade_populacional1<densidade_populacional2){
          printf("****No atributo Densidade Populacional****\n");
            printf("A carta 1 tem Nº de pontos turíticos =%f\n ",densidade_populacional1);
            printf("A carta 2 tem Nº de pontos turísticos =%f\n",densidade_populacional2); 
            printf("A carta 1 venceu!!!\n");
            printf("A cidade de: %s",nome_cidade1);
            printf(" venceu!!");
        }else{
            printf("Houve um empate\n");
        }
        break;

        default:
        printf("Opção inválida:\n");
        break;
    }
    }


   
   