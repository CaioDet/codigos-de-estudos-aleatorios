#include <iostream>
/*Operadores lógicos*/
using namespace std;

int main(){

    float nota1,nota2;

    cout<<"Informe a Nota 1: \n";
    cin>>nota1;
    cout<<"Informe a Nota 2: \n";
    cin>>nota2;
    float media = (nota1+nota2)/2;
    cout<<"Média= "<< media<< endl;

    //Comparações:Igual ==; Diferente !=; Outros: >, <, >=,<=

    //if (media >=5){
    //      cout <<"Aluno Aprovado \n";
    // }

   // if(media >=5){

    //   cout<<"Aluno aprovado\n";
    //}else{

     //  cout<<"Aluno Reprovado!\n";
    //}

    //0-2.5=D; 2.5-5 c; 5-7,5 B; 7.5-10 A

    if(media< 2.5){ //dentro do parênteses, condição
        cout<<"Nota final: D\n";
    
    }else if (media < 5){ //usar else if quando há mais de uma condição
        cout<<"Nota Final: C\n";
    }else if (media < 7.5){
        cout<< "Nota Final: B\n";
    }else{
        cout<<"Nota Final: A\n";
    }

// Operadores Lógicos: E &&; OU ||; NÃO !;
    
    float freq;
    cout<<"Qual é a frequencia do aluno?\n";
    cin >> freq;

    //if(media >=5 && freq >= 75){
   //     cout<< "Aluno Aprovado!";
    //}else{
      //  cout<<"Aluno Reprovado!";
    //}

    //if (media < 5 || freq < 75){
      ///  cout<<"Aluno Reprovado\n";

    //} else{
     //   cout<<"Aluno Aprovado!\n";
   // }

   // Operador Ternário
   (media >=5 )? cout<<"Aprovado":cout <<"Reprovado";
    return 0;
}