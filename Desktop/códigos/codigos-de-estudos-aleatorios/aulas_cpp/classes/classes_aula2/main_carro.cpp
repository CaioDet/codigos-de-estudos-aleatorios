#include <iostream>
using namespace std;
#include "carro.h"

int main(){
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

    system("pause");
    
    return 0;
}