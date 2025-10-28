#include "calceng.h"
#include<stdio.h>


int main(){
   
    int opcao;
    double base , altura;
    double resultado;

    do{
        printf("========================");
        printf("CALCULADORA ENGENHARIA");
        printf("========================");
        printf("1 - CALCULAR AREA RETANGULO\n");
        printf("2 - CALCULAR AREA DO TRIANGULO\n");
        printf("3 - CALCULAR AREA DO CIRCULO\n");
        printf("4 - CALCULAR VOLUME DO PRIMA\n");
        printf("5 - CALCULAR VOLUME DO CILINDRO\n");
        print("6 - CONVERTER UNIDADES(M/CM/MM)\n");
        printf("7 - ESTIMAR QUANTIDADE DE TIJOLOS\n");
        printf("8 - CALCULAR PESO ESTIMADO DA VIGA\n");
        printf("0 - SAIR\n");
        printf("========================");
        printf("Escolha uma opcao : ");
        scanf("%d" , &opcao);

       
        


       

    }while(opcao != 5);

        return 0;
    }
