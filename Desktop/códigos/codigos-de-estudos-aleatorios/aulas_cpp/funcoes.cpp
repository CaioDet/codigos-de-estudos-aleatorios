#include <iostream>

using namespace std;

/*void chama uma uma função que nao retorna nada*/
void testedefuncao() { 
    
    cout << " Teste de funcao tipo void!\n"; }

#define pi 3.14;
/*variável imutável*/
#define aparecer cout << "funcao define imutavel!\n";

// t = 1; /*variavel global*/

int somar(int &x, int &y) {
/*& altera a variavel global*/
  int soma;
  soma = x + y;
  x = 30;
  return soma;
}

int main() {

  int t;
  t = 0; /*variavel local*/
  testedefuncao();

  int a = 5, b = 4;

  int s;

  s = somar(a, b);
  cout << "Soma: " << s << endl;
  cout << "Valor de a: " << a << endl;

  cout << "valor de t: " << t << endl;

  // cout << pi;
  aparecer;
  return 0;
}