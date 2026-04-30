// Definição do construtor
#include <iostream>
#include "carro.h"

using namespace std;

carro::carro(int a, float v, float k) {
    ano = a;
    valor = v;
    km = k;
}

// Definição das funções set
void carro::SetAno(int ano) {
    this->ano = ano;
}

void carro::SetValor(float v) {
    this->valor = v;
}

void carro::SetKm(float k) {
    this->km = k;
}

// Definição das funções get
int carro::GetAno() {
    return ano;
}

float carro::GetValor() {
    return valor;
}

float carro::GetKm() {
    return km;
}