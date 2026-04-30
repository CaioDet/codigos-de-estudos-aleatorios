#include <iostream>
//Estrutura de repetição
//utilizado para repetir linhas de comandos
//while enquanto; do...while faça...enquanto; for para

using namespace std;


int main (){
    
    int n;
    cout<<" Diga um numero inteiro nao negativo: \n";
    cin>> n;

    int soma=0;
    int cont=1;

    //while(cont <=n){
    //    soma +=cont; //ou soma=soma+cont;
   //     cont++;

   // }
    //break quebraria a estrutura de repetição

    // do {
    //     soma +=cont;
    //     cont++;
    // } while (cont <=n);

    cout << " A soma dos numeros de 0 ate "<<n<<"= "<<soma<<endl;
    for (int j=1 ; j<=n; j+=1){

        soma+=j;
    }
    return 0;
}