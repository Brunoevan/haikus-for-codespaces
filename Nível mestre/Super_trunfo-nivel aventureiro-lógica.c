#include<stdio.h>//Inclusão da biblioteca necessária para o uso das funções printf e scanf.

int main(){
    /* Nesta parte do programa são declarados os tipos e as variáveis utilizadas para cada carta do jogo
    simplificando o nível anterior já atribuindo valores às variáveis.*/

    char estado,codigo_carta[10],nome_cidade1[20]="Belém", nome_cidade2[20]="Altamira";
    int numero_pontos_turisticos1=15,numero_pontos_turisticos2=6, escolhaUsuario1,escolhausuario2,soma_1,soma_2;
    unsigned long int populacao1=127456, populacao2=226956;
    float area1=600,densidade_populacional1=545,PIB1=256554,PIB_percatpita1=700,super_poder1=54755;
    float area2=740,densidade_populacional2=780,PIB2=16458,PIB_percapta2=780,super_poder2=65874;

    // Menu_Interativo 1-Nesta parte do código o usuário seleciona o primeiro e o segundo atributos a serem comparados.
    printf("Escolha uma opção:\n");
    printf("1.Compare o atributo população entre as cidades\n");
    printf("2.Compare o atributo Área entre as cidades\n");
    printf("3.Compare o atributo PIB entre as cidades\n");
    printf("4.Compare o atributo número de pontos turísticos entre as cidades\n");
    printf("5.Compare o atributo Densidade demográfica entre as cidades\n");
    printf("Escolha o primeiro atributo:\n");
    scanf("%d",&escolhaUsuario1);
    printf("Escolha o segunfo atributo:\n");
    scanf("%d",&escolhausuario2);

     //Esta parte do código restringe as opções, obrigando a escolha, somente, entre as opções apresentadas no menu. 
    if(escolhaUsuario1==escolhausuario2){
        printf("Ação inválida:Você escolheu o mesmo atributo!!!\n");
    }else if((escolhaUsuario1< 1) || (escolhaUsuario1>5) || (escolhausuario2<1) ||(escolhausuario2>5))
      {
        printf("Você escolheu uma ou mais opções inválidas\n");
      }
      else
    {   
        // Esta parte do código é responsável pela a soma dos atributos escolhidos para cada carta.

        if((escolhaUsuario1==1) && (escolhausuario2==2) || (escolhaUsuario1==2) && (escolhausuario2==1)){ 
               soma_1=populacao1+area1;
               soma_2=populacao2+area2;       
        }
        else if((escolhaUsuario1==1) && (escolhausuario2==3) || (escolhaUsuario1==3) && (escolhausuario2==1))
        {
            soma_1=populacao1+PIB1;
            soma_2=PIB2+populacao2;
        }                          
        else if((escolhaUsuario1==1) && (escolhausuario2==4) || (escolhaUsuario1==4 && escolhausuario2==1))
        {
           soma_1=populacao1+numero_pontos_turisticos1;
           soma_2=populacao2+numero_pontos_turisticos2;
        }            
        
        else if((escolhaUsuario1==1 && escolhausuario2==5) || (escolhaUsuario1==5 && escolhausuario2==1))
        {
            soma_1=populacao1+densidade_populacional1;
            soma_2=populacao2+densidade_populacional2;
        }        
        else if((escolhaUsuario1==2) && (escolhausuario2==3) || (escolhaUsuario1==3 && escolhausuario2==2))
        {
             soma_1=area1+PIB1;
             soma_2=area2+PIB2;
        }
        
        else if ((escolhaUsuario1==2) && (escolhausuario2==4) || (escolhaUsuario1==4 && escolhausuario2==2))
        {
           soma_1=area1+numero_pontos_turisticos1;
           soma_2=area2+numero_pontos_turisticos2;
        }        
        else if((escolhaUsuario1==2) && (escolhausuario2==5) || (escolhaUsuario1==5 && escolhausuario2==2))
        {
            soma_1=area1+densidade_populacional1;
            soma_2=area2+densidade_populacional2;
        }       
        else if((escolhaUsuario1==3) && (escolhausuario2==4) || (escolhaUsuario1=4 && escolhausuario2==3))
        {
           soma_1= PIB1+numero_pontos_turisticos1;
           soma_2=PIB2+numero_pontos_turisticos2;    
        }        
        else if((escolhaUsuario1==3) && (escolhausuario2==5) ||(escolhaUsuario1==5 && escolhausuario2==3))
        {
            soma_1=PIB1+densidade_populacional1;
            soma_2=PIB2+densidade_populacional2;
        }       
        else if((escolhaUsuario1==4) && (escolhausuario2==5) || (escolhaUsuario1==5) && (escolhausuario2=4))
        {
            soma_1=numero_pontos_turisticos1+densidade_populacional1;
            soma_2=numero_pontos_turisticos1+densidade_populacional2;
        }        
          else{
            printf("opções inválidas");
          }  
                     
        //Essa parte do código mostra a lógica           
                
        switch(escolhaUsuario1){

        case 1:
             if(populacao1==populacao2){
                printf(" cidade 1 é: %s:\n",nome_cidade1);
                printf("cidade 2 é:\n %s",nome_cidade2);
                printf(" A população da Carta 1 é:\n %ul", populacao1);
                printf("A população da carta 2 é:\n %ul",populacao2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo população\n");
            }else{
                  printf("cidade 1 é: %s\n",nome_cidade1);
                  printf("cidade 2 é: %s\n",nome_cidade2);
                  printf("Você escolheu como primeiro atributo a popualção:\n");
                  printf(" A população da Carta 1 é:%ul\n",populacao1);
                  printf("A população da carta 2 é:%ul\n:",populacao2);
                  populacao1>populacao2 ? printf(" A carta 1 vence no quesito popualação!!\n") : printf("A carta 2 vence no quesito população!!\n");
                }
            break;
       case 2:
             if(area1==area2){
                printf("cidade 1 é:%s\n",nome_cidade1);
                printf("cidade 2 é: %s\n",nome_cidade2);
                printf(" A área da Carta 1 é: %.2f\n",area1);
                printf("A área da carta 2:é %.2f\n",area2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo área\n");
            }else{
                 printf("cidade 1 é:\n %s",nome_cidade1);
                 printf("cidade 2 é:\n %s",nome_cidade2);
                 printf("Você escolheu como primeiro atributo a área:\n");
                 printf(" A área da Carta 1 é:%.2f\n",area1);
                 printf("A área da carta 2 é:%.2f\n",area2);
                 area1>area2 ? printf(" A carta 1 vence no quesito área!!\n") : printf("A carta 2 vence no quesito área!!\n");
                }
            break;

         case 3:
              if(PIB1==PIB2){
                printf(" cidade 1 é: %s:\n",nome_cidade1);
                printf("cidade 2 é:\n %s",nome_cidade2);
                printf(" O PIB da Carta 1 é: %.2f\n", PIB1);
                printf("O PIB da carta 2 é:%.2f\n",PIB2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo população\n");
            }else{
                  printf("cidade 1 é:%s\n",nome_cidade1);
                  printf("cidade 2 é:%s\n",nome_cidade2);
                  printf("Você escolheu como primeiro atributo O PIB:\n");
                  printf(" A população da Carta 1 é:%.2f\n",PIB1);
                  printf("A população da carta 2 é:%.2f\n:",PIB2);
                  populacao1>populacao2 ? printf(" A carta 1 vence no quesito PIB!!\n") : printf("A carta 2 vence no quesito PIB!!\n");
                }
            break;
        case 4:
                if(numero_pontos_turisticos1==numero_pontos_turisticos2){
                printf(" cidade 1 é: %s:\n",nome_cidade1);
                printf("cidade 2 é:\n %s",nome_cidade2);
                printf(" O PIB da Carta 1 é:%d\n", numero_pontos_turisticos1);
                printf("O PIB da carta 2 é:%d\n",numero_pontos_turisticos2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo pontos truristicos\n");
            }else{
                  printf("cidade 1 é:%s\n",nome_cidade1);
                  printf("cidade 2 é: %s\n",nome_cidade2);
                  printf("Você escolheu como primeiro atributo Nº de pontos turísticos:\n");
                  printf(" A população da Carta 1 é: %d\n",numero_pontos_turisticos1);
                  printf("A população da carta 2 é:%d\n:",numero_pontos_turisticos2);
                  populacao1>populacao2 ? printf(" A carta 1 vence no quesito Nº de pontos turisticos!!\n") : printf("A carta 2 vence no quesito nº de pontos turisticos!!\n");
                }
            break;

        case 5:
                  if(densidade_populacional1==densidade_populacional2){
                printf(" A densidade demográfica da Carta 1 é:%.2f\n ",densidade_populacional1);
                printf("A densidade populacional da carta 2 é:%.2f\n",densidade_populacional2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo densidade demográfica\n");
                         
            }else
            {   
                 printf("Você escolheu como segundo atributo a densidade demográfica:\n");
                 printf("A densidade demográfica  da Carta 1 é:.%2f\n",densidade_populacional1);
                 printf("A densidade demográfica da carta 2 é:%.2f\n",densidade_populacional2);
                 populacao1<populacao2 ? printf(" A carta 1 vence no quesito densidade demográfica\n") : printf("A carta 2 vence no quesito densidade demográfica!!\n");
                 printf("A soma dos atributos selecionados para carta 1 é:%d\n ",soma_1);
                 printf("A soma dos atribturos selcionados para a carta 2  é:%d\n ",soma_2);  
                }
        break;

        }        
            
                
        switch (escolhausuario2)
        {
            case 1:
            if(populacao1==populacao2){
                printf(" A população da Carta 1 é:%ul\n",populacao1);
                printf("A população da carta 2 é:%ul\n",populacao2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo população\n");
                
            
            }else
            {   
                 printf("Você escolheu como segundo atributo a população:\n");
                 printf(" A população da Carta 1 é:%ul\n",populacao1);
                 printf("A população da carta 2 é:%ul\n",populacao2);
                 populacao1>populacao2 ? printf(" A carta 1 vence no quesito popualação\n") : printf("A carta 2 vence no quesito população!!\n");
                 printf("A soma dos atributos selecionados para carta 1 é:%d\n ",soma_1);
                 printf("A soma dos atribturos selcionados para a carta 2  é:%d\n ",soma_2);
            }
            break;
            
             case 2:
            if(area1==area2){
                printf(" A área da Carta 1 é: %.2f\n",area1);
                printf("A área da carta 2 é: %.2f\n",area2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo área\n");
                
            }else{
                 printf("Você escolheu como segundo atributo a área:\n");
                 printf(" A área da Carta 1 é: %.f\n",area1);
                 printf("A área da carta 2 é:%.2f\n",area2);
                 area1>area2 ? printf(" A carta 1 vence no quesito área!!\n") : printf("A carta 2 vence no quesito área!!\n");
                 printf("A soma dos atributos selecionados para carta 1 é: %d\n",soma_1);
                 printf("A soma dos atribturos selcionados para a carta 2  é:%d\n",soma_2);
            }
            
                break;
            case 3:
            if(PIB1==PIB2){
                printf(" O PIB da Carta 1 é:%.2f\n ",PIB1);
                printf("O PIB da carta 2 é:%.2f\n",PIB2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo população\n");
                         
            }else
            {   
                 printf("Você escolheu como segundo atributo o PIB:\n");
                 printf(" O PIB da Carta 1 é:.%2f\n",PIB1);
                 printf("O PIB da carta 2 é:%.2f\n",PIB2);
                 PIB1>PIB2 ? printf(" A carta 1 vence no quesito popualação\n") : printf("A carta 2 vence no quesito população!!\n");
                 printf("A soma dos atributos selecionados para carta 1 é:%d\n ",soma_1);
                 printf("A soma dos atribturos selcionados para a carta 2  é:%d\n ",soma_2);}

                 break;

             case 4:
               if(numero_pontos_turisticos1==numero_pontos_turisticos2){
                printf(" O PIB da Carta 1 é:%d\n ",numero_pontos_turisticos1);
                printf("O PIB da carta 2 é:%d\n",numero_pontos_turisticos2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo de números turísticos\n");
                         
            }else
            {   
                 printf("Você escolheu como segundo atributo o PIB:\n");
                 printf(" O número de pontos turisticos da Carta 1 é:.%d\n",numero_pontos_turisticos1);
                 printf("O número de pontos turísticos da carta 2 é:%d\n",numero_pontos_turisticos2);
                 numero_pontos_turisticos2>numero_pontos_turisticos2 ? printf(" A carta 1 vence no quesito popualação\n") : printf("A carta 2 vence no quesito população!!\n");
                 printf("A soma dos atributos selecionados para carta 1 é:%d\n ",soma_1);
                 printf("A soma dos atribturos selcionados para a carta 2  é:%d\n ",soma_2); 
            }
            break;

           case 5:
           if(densidade_populacional1==densidade_populacional2){
                printf(" A densidade demográfica da Carta 1 é:%.2f\n ",densidade_populacional1);
                printf("A densidade demográfica carta 2 é:%.2f\n",densidade_populacional2);
                printf("A carta 1 e a carta 2 estão empatadas no atributo população\n");
                         
            }else
            {   
                 printf("Você escolheu como segundo atributo a densiadade demográfica:\n");
                 printf(" A densidade demográfica da Carta 1 é:.%2f\n",densidade_populacional1);
                 printf("A densidade demográfica da carta 2 é:%.2f\n",densidade_populacional2);
                 densidade_populacional1<densidade_populacional2 ? printf(" A carta 1 vence no quesito pdensidade demográfica\n") : printf("A carta 2 vence no quesito densidade demogra´fica!!\n");
                 printf("A soma dos atributos selecionados para carta 1 é:%d\n ",soma_1);
                 printf("A soma dos atribturos selcionados para a carta 2  é:%d\n ",soma_2);      
        }  
        break;
        }
    }
}
    
  