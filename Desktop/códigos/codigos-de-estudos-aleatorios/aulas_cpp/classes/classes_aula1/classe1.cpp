#include <iostream>

using namespace std;

class Teste {

    private:
        // Atributos e métodos privados só podem ser acessados dentro da classe

    public:
        // Métodos públicos podem ser acessados de fora da classe
        void testedeclasse() {
            cout << "Teste de classe 1\n";
        }

        void maisumteste() {
            cout << "Teste de classe pública 2\n";  // Corrigido o texto
        }
};

int main() {

    Teste aula; // Criação de um objeto da classe Teste
    aula.testedeclasse(); // Chama o método publicamente acessível
    aula.maisumteste();   // Chama o segundo método publicamente acessível

    return 0;
}