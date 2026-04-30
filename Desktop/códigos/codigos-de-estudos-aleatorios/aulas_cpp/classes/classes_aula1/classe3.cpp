#include <iostream>

using namespace std;

class carro {  // Nome da classe em minúsculas
private:
    int ano;
    float valor, km;

public:
    // Construtor
    carro(int a, float v, float k);

    // Funções set (modificar os valores)
    void SetAno(int ano);
    void SetValor(float v);
    void SetKm(float k);

    // Funções get (obter os valores)
    int GetAno();
    float GetValor();
    float GetKm();
};

// Definição do construtor
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

int main() {
    // Criando o objeto uno com os dados fornecidos pelo construtor
    carro uno(1991, 5500, 150000);
    cout << "Uno: \n";
    cout << "Ano: " << uno.GetAno() << endl;
    cout << "Valor: " << uno.GetValor() << endl;
    cout << "Quilometragem: " << uno.GetKm() << endl;

    // Criando o objeto clio com outros dados
    carro clio(2011, 25000, 170000);
    cout << "Clio: \n";
    cout << "Ano: " << clio.GetAno() << endl;
    cout << "Valor: " << clio.GetValor() << endl;
    cout << "Quilometragem: " << clio.GetKm() << endl;

    return 0;
}