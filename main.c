#include "calceng.h"
#include<stdio.h>


int main(){
   
    int opcao;
    double base , altura , raio;
    double resultado;

    do{
       
        printf("\n========================\n");
        printf("CALCULADORA ENGENHARIA\n");
        printf("========================\n");
        printf("1 - CALCULAR AREA RETANGULO\n");
        printf("2 - CALCULAR AREA DO TRIANGULO\n");
        printf("3 - CALCULAR AREA DO CIRCULO\n");
        printf("4 - CALCULAR VOLUME DO PRIMAS\n");
        printf("5 - CALCULAR VOLUME DO CILINDRO\n");
        printf("6 - CONVERTER UNIDADES(M/CM/MM)\n");
        printf("7 - ESTIMAR QUANTIDADE DE TIJOLOS\n");
        printf("8 - CALCULAR PESO ESTIMADO DA VIGA\n");
        printf("0 - SAIR\n");
        printf("========================\n");
        printf("Escolha uma opcao : ");
        scanf("%d" , &opcao);

    switch(opcao){
        case 1:
            printf("\nBase : ");
            scanf("%lf", &base);
            printf("Altura : ");
            scanf("%lf", &altura);
            resultado = areaRetangulo(base , altura);
            printf("Area do retangulo : %.2lf m²\n" , resultado);
            break;

        case 2:
            printf("\nBase:");
            scanf("%lf" , &base);
            printf("Altura : ");
            scanf("%lf" , &altura);
            resultado = areaTriangulo(base , altura);
            printf("Area do triangulo : %.2lf m²\n" , resultado);
            break;

        case 3:
            printf("\nRaio : ");
            scanf("%lf" , &raio);
            resultado = areaCirculo(raio);
            printf("Area do circulo : %.2lf m^2\n" , resultado);
            break;

        case 4:
            printf("\nBase : ");
            scanf("%lf" , &base);
            printf("Altura : ");
            scanf("%lf" , &altura);
            resultado = volumePrisma(base , altura);
            printf("Volume do prisma : %.2lf m^2" , resultado);
            break;

        case 5:
            printf("Raio : ");
            scanf("%lf" , &raio);
            printf("Altura : ");
            scanf("%lf" , &altura);
            resultado = volumeCilindro(raio , altura)
            printf("Volume do cilindro : %.2lf" , resultado);

        case 6:
            int tipoConversao;
            double valor , convertido;

            printf("\n--- CONVERSAO DE VALORES ---\n");
            printf("1 - Metros para centimetros\n");
            printf("2 - Centimetros para metros\n");
            printf("3 - Metros para milimetros\n");
            printf("4 - Milimetros para metros\n");
            printf("Escolha uma opcao: ");
            scanf("%d" , &tipoConversao);

            printf("Insira o valor a ser convertido : ");
            scanf("%d" , &valor);

            switch (tipoConversao){
                case 1:
                    convertido = metrosCentimetros(valor);
                    printf("Resultado : %.2lf cm" , convertido);
                    break;
                

            }

    }


    }while(opcao != 0);

        return 0;
    }
