#include <iostream>
//Programa de análise para moradia popular
using namespace std;

int main(){

float renda;
int idade;

cout << "Insira sua idade: \n";
cin>> idade;
cout<<"Insira a sua renda:  \n";
cin>> renda;

if (idade < 21 || renda > 1200){

//Outra solução: if (idade >= 21 && renda < 1200){}

    cout<<"Voce nao pode participar do Programa Habitacional \n";
} else{

    cout<<"Voce pode participar do programa Habitacional! \n";
}






return 0;
}