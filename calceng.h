#ifndef CALCENG_H
#define CALCENG_H

//FUNÇÕES DE ÁREA

double areaRetangulo(double base , double altura);
double areaTriangulo(double base , double altura);
double areaCirculo(double raio);

//FUNÇÕES DE VOLUME

double volumePrisma(double base , double altura);
double volumeCilindro(double raio , double altura);

//FUNÇÕES CONVERSÃO DE UNIDADES

double metrosCentimetros(double metros);
double centimetrosMetros(double centimetros);
double metrosMilimetros(double metros);
double milimetrosMetros(double milimetros);

//FUNÇÕES ESTIMATIVA DE MATERIAIS

int quantidadeTijolo(double areaParede , double areaTijolo);
double quantidadeCimento(double areaParede);

//FUNÇÕES CÁLCULO DE PESO ESTIMADO

double pesoViga(double volume , double densidade);



#endif
