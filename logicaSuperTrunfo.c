#include <stdio.h>

int main() {

    //atributo referente a cartas 1 e 2

    char letras,letras2;
    char codigo[10],codigo2[10];
    char cidade[50],cidade2[50];
    unsigned long int populacao,populacao2;
    float area,area2;
    float pib,pib2;
    int turistico,turistico2;
    float pibper1,pibper2;
    float densidade1,densidade2;
    float superpoderA ,superpoderB;

    //entradas de dados da carta 1

    printf("Desafio cadastro das cartas no super trunfo\n");

    printf("Faça o cadastro das carta 1 abaixo\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos 8 estados):\n");
    scanf(" %c",&letras);

    printf("A letra do estado seguida de um numero '01' a '04'(ex: A01,B02,...):\n");
    scanf("%s",&codigo);

    printf("Digita o nome da cidade:\n");
    scanf("%s",&cidade);

    printf("Digita o nomero de habitantes da cidade:\n");
    scanf("%u",&populacao);

    printf("Digita a área em quilômetros quadrados:\n");
    scanf("%f",&area);

    printf("Digita o protudo interno bruto(PIB):\n");
    scanf("%f",&pib);

    printf("Digita o numero da quatidade de pontos turisticos na cidade:\n");
    scanf("%d",&turistico);

    //entrada de dados da carta 2

    printf("Agora faça o cadastro da carta 2 abaixo\n");


    printf("Digite uma letra de 'A' a 'H' (representando um dos 8 estados):\n");
    scanf(" %c",&letras2);

    printf("A letra do estado seguida de um numero '01' a '04'(ex: A01,B02,...):\n");
    scanf(" %s",&codigo2);

    printf("Digita o nome da cidade:\n");
    scanf("%s",&cidade2);

    printf("Digita o nomero de habitantes da cidade:\n");
    scanf("%u",&populacao2);

    printf("Digita a área em quilômetros quadrados:\n");
    scanf("%f",&area2);

    printf("Digita o protudo interno bruto(PIB):\n");
    scanf("%f",&pib2);

    printf("Digita o numero da quatidade de pontos turisticos na cidade:\n");
    scanf("%d",&turistico2);

    //carta 1

    densidade1 = (float) populacao / area;
    pibper1 = (float) (pib * 1000000000) / populacao;


    printf("Carta 1:\n");
    printf("Estado: %c \nCodigo: %s\nNome da cidade: %s\n",letras ,codigo ,cidade);
    printf("População: %u\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\n",populacao ,area ,pib);
    printf("Numeros de pontos turisticos: %d\n",turistico);
    printf("Densidade populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per capita: %.2f reais\n",pibper1);
        
    //calculo do super poder carta 1

    superpoderA =  populacao + pib + turistico + (1/densidade1) + pibper1;
    printf("Super poder: %.2f\n",superpoderA);

    //carta 2

    densidade2 = (float) populacao2 / area2;
    pibper2 = (float) (pib2 * 1000000000) / populacao2;

    printf("Carta 2:\n");
    printf("Estado: %c \nCodigo: %s\nNome da cidade: %s\n",letras2 ,codigo2 ,cidade2);
    printf("População: %u\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\n",populacao2 ,area2 ,pib2);
    printf("Numeros de pontos turisticos: %d\n",turistico2);
    printf("Densidade populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per capita: %.2f reais\n",pibper2);

    //calculo do super poder carta 2
    superpoderB =  populacao2 + pib2 + turistico2 + (1/densidade2) + pibper2;
    printf("Super poder: %.2f\n",superpoderB);

    //comparador das cartas

    printf("****comparaçao das cartas****\n");
    
    //comparador População

    printf("Comparação de cartas (Atributo: População):\n");
    printf("carta 1: %s :%u\n",cidade ,populacao);
    printf("carta 2: %s :%u\n",cidade2 ,populacao2);

    if(populacao > populacao2){
        printf("carta 1 venceu\n");
    }else{
        printf("carta 2 venceu\n");
    }

        //comparador area

    printf("Comparação de cartas (Atributo: área):\n");
    printf("carta 1: %s :%.2f\n",cidade ,area);
    printf("carta 2: %s :%.2f\n",cidade2 ,area2);

    if(area > area2){
        printf("carta 1 venceu\n");
    }else{
        printf("carta 2 venceu\n");
    }

        //comparador PIB

    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("carta 1: %s :%.2f\n",cidade ,pib);
    printf("carta 2: %s :%.2f\n",cidade2 ,pib2);

    if(pib > pib2){
        printf("carta 1 venceu\n");
    }else{
        printf("carta 2 venceu\n");
    }

        //comparador turistico

    printf("Comparação de cartas (Atributo: Pontos turisticos):\n");
    printf("carta 1: %s :%d\n",cidade ,turistico);
    printf("carta 2: %s :%d\n",cidade2 ,turistico2);

    if(turistico > turistico2){
        printf("carta 1 venceu\n");
    }else{
       printf("carta 2 venceu\n");
    }

        //comparador densidade populacional

    printf("Comparação de cartas (Atributo: densidade populacional):\n");
    printf("carta 1: %s :%.2f\n",cidade ,densidade1);
    printf("carta 2: %s :%.2f\n",cidade2 ,densidade2);

    if(densidade1 < densidade2){
        printf("carta 1 venceu\n");
    }else{
        printf("carta 2 venceu\n");
    }

        //comparador PIB per capita

    printf("Comparação de cartas (Atributo: PIB per capita):\n");
    printf("carta 1: %s :%.2f\n",cidade ,pibper1);
    printf("carta 2: %s :%.2f\n",cidade2 ,pibper2);

    if(pibper1 > pibper2){
        printf("carta 1 venceu\n");
    }else{
        printf("carta 2 venceu\n");
     }

        //comparador super poder

    printf("Comparação de cartas (Atributo: Super poder):\n");
    printf("carta 1: %s :%.2f\n",cidade ,superpoderA);
    printf("carta 2: %s :%.2f\n",cidade2 ,superpoderB);

    if(superpoderA > superpoderB){
        printf("carta 1 venceu\n");
    }else{
        printf("carta 2 venceu\n");
    }


    return 0;
}
