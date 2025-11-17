

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
        printf("4 - CALCULAR VOLUME DO PRISMA\n"); 
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
            printf("Area do retangulo : %.2lf m^2\n" , resultado);
            break;

        case 2:
            printf("\nBase:");
            scanf("%lf" , &base);
            printf("Altura : ");
            scanf("%lf" , &altura);
            resultado = areaTriangulo(base , altura);
            printf("Area do triangulo : %.2lf m^2\n" , resultado);
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
            printf("Volume do prisma : %.2lf m^3\n" , resultado); 
            break;

        case 5:
            printf("\nRaio : ");
            scanf("%lf" , &raio);
            printf("Altura : ");
            scanf("%lf" , &altura);
            resultado = volumeCilindro(raio , altura);
        
            printf("Volume do cilindro : %.2lf m^3\n" , resultado);
            break; // <-- ESTE É O BREAK QUE FALTAVA

        
        case 6:{
            int tipoConversao;
            double valor , convertido;

            printf("\n--- CONVERSAO DE VALORES ---\n");
            printf("1 - Metros > centimetros\n");
            printf("2 - Centimetros > metros\n");
            printf("3 - Metros > milimetros\n");
            printf("4 - Milimetros > metros\n");
            printf("Escolha uma opcao: ");
            scanf("%d" , &tipoConversao);

            printf("Insira o valor a ser convertido : ");
            scanf("%lf" , &valor);

            switch (tipoConversao){
                case 1:
                    convertido = metrosCentimetros(valor);
                    printf("Resultado : %.2lf cm\n" , convertido);
                    break;
                case 2:
                    convertido = centimetrosMetros(valor);
                    printf("Resultado : %.2lf m\n" , convertido);
                    break; 
                case 3:
                    convertido = metrosMilimetros(valor);
                    printf("Resultado : %.2lf mm\n" , convertido);
                    break;
                case 4:
                    convertido = milimetrosMetros(valor);
                    printf("Resultado : %.2lf m\n" , convertido);
                    break;
                default:
                    printf("Opcao invalida!\n");
                    break;
            }
            break; 
        }
            
        case 7:{
            double larguraParede , alturaParede , areaParede;
            double larguraTijolo , alturaTijolo , areaTijolo;
            int quantidade;

            printf("\n--- ESTIMATIVA DE TIJOLOS ---\n");
            printf("Largura da parede (m): ");
            scanf("%lf" , &larguraParede);
            printf("Altura da parede (m) : ");
            scanf("%lf" , &alturaParede);
            
            areaParede = areaRetangulo(larguraParede , alturaParede);

            printf("Largura do tijolo (m) : ");
            scanf("%lf" , &larguraTijolo);
            printf("Altura do tijolo (m) : ");
            scanf("%lf" , &alturaTijolo);

            areaTijolo = areaRetangulo(larguraTijolo , alturaTijolo);

            quantidade = quantidadeTijolo(areaParede , areaTijolo);
            
            printf("Quantidade aproximada de tijolos: %d\n", quantidade);

            break;
        }

        case 8:
        
    } 

    }while(opcao != 0);

        return 0;
    }