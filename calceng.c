#include "calceng.h"
#include<stdio.h>
#include<math.h>

//--------AREA--------

double areaRetangulo(double base , double altura){
    if(base <= 0 || altura <= 0){
        printf("ERRO : Valores Invalidos\n");
        return -1;
}
    return base * altura;
}
 
double areaTriangulo(double base , double altura){
    if(base <= 0 || altura <= 0){
        printf("ERRO : Valores Invalidos\n");
        return -1;
    }
    return (base * altura) / 2.0;
}

double areaCirculo(double raio){
    if(raio <= 0){
        printf("ERRO : Raio Invalido\n");
        return -1;
    }
    return M_PI * raio * raio;
 }


//--------VOLUME--------//

double volumePrisma(double base , double altura){
    if(base <= 0 || altura <= 0){
        printf("ERRO : Valores Invalidos\n");
        return -1;
    }
    return base * altura;
 }

double volumeCilindro(double raio , double altura){
    if(raio <= 0 || altura <= 0){
        printf("ERRO : Valores Invalidos\n");
        return -1;
    }
    return M_PI * raio * raio * altura;

 }

//--------CONVERSÃO DE VALORES--------

double metrosCentimetros(double metros){
    if(metros <= 0){
        printf("ERRO : VALOR INVALIDO\n");
        return -1;
    }
    return metros * 100;
}

double centimetrosMetros(double centimetros){
    if(centimetros <= 0){
        printf("ERRO : VALOR INVALIDO\n");
        return - 1;
    }
    return centimetros / 100;
}

double metrosMilimetros(double metros){
    if(metros <= 0){
        printf("ERRO : VALOR INVALIDO\n");
        return -1;
    }
    return metros * 1000;
}

double milimetrosMetros(double milimetros){
    if(milimetros <= 0){
        printf("ERRO: VALOR INVALIDO\n");
        return -1;
    }
    return milimetros / 1000;
}

//-------- ESTIMATIVA DE MATERIAIS--------
double quantidadeTijolo(double areaParede , double areaTijolo){
    if(areaParede <= 0 || areaTijolo <= 0){
        printf("ERRO : AREA INVALIDA");
        return 0;
    }
    return (int) ceil(areaParede / areaTijolo);
}

