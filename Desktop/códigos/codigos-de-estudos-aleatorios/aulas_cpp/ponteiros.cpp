#include <iostream>
//Ponteiros
using namespace std;

int main(){

   int var1;
   int* pont1; //* Declara um ponteiro para um inteiro
   var1=5;
   pont1=&var1;//& O ponteiro pont1 recebe o endereço de var1


   cout<<"Valor de var1: "<<var1<<endl;
   cout<<"endereco de var1 (em pont1): "<< pont1<<endl;

    return 0;
}