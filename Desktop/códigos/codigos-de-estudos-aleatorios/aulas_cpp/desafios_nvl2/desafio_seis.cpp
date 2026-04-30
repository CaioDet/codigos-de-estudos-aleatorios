// #include <iostream>

// using namespace std;
// //Cálculo de gastos familiares

// float mediaGastos (float fam1, float fam2, float fam3, float fam4, float fam5){

//     float med;
//     med = (fam1+fam2+fam3+fam4+fam5)/5;
//     return med;
// }

// float medGeral( float medG, float fami){
//     float ger;
//     float fam;


// }



// int main (){

//    float familia1, familia2, familia3, familia4, familia5;

//     cout<<"Digite os gastos da Família 1: "<<endl;
//     cin>> familia1;
//     cout<<"Digite os gastos da Família 2: "<<endl;
//     cin>>familia2;
//     cout<<"Digite os gastos da Família 3: "<<endl;
//     cin>>familia3;
//     cout<<"Digite os gastos da Família 4: "<<endl;
//     cin>>familia4;
//     cout<<"Digite os gastos da Família 5: "<<endl;
//     cin>>familia5;
  
//  float media =  mediaGastos (familia1, familia2,familia3,familia4,familia5);

//   cout<< "A media dos gastos de todas familias e de: "<<media<<endl;
  
//     return 0;
// }



// #include <iostream>

// using namespace std;

// int main(){

// int familias;

// cout<< "Digite o numero de familias: "<<endl;
// cin>>familias;
// int* familias = new int [familias];
// cout<< "voce cadastrou: "<< familias<<endl;

// float gastofamilia[familias];

// for(int i=0; i<familias; i++){
//     cout<<"Digite os gastos da familia "<< i+1<<endl;
//     cin>>gastofamilia[i];
// }
// float media=0;
// for (int i=0; i< familias; i++){
//     media+=gastofamilia[i];
// }
// media/=familias;
// cout<<"Media de gastos: "<<media<<endl;

//    for (int i=0 ; i<5 ; i++){
//         if (gastofamilia[i] < media){
//             cout << "A familia " << i+1 << " tem gastos abaixo da media\n";
//         } else if (gastofamilia[i] == media){
//             cout << "A familia " << i+1 << " tem gastos na media\n";
//         } else{
//             cout << "A familia " << i+1 << " tem gastos acima da media\n";
//         }
//     }


// return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int numFamilias;

    // Solicita o número de famílias
    cout << "Digite o número de famílias: " << endl;
    cin >> numFamilias;

    // Aloca dinamicamente um array para armazenar os gastos das famílias
    float* gastofamilia = new float[numFamilias];

    // Solicita os gastos de cada família
    for (int i = 0; i < numFamilias; i++) {
        cout << "Digite os gastos da família " << i + 1 << ": ";
        cin >> gastofamilia[i];
    }

    // Calcula a média dos gastos
    float media = 0;
    for (int i = 0; i < numFamilias; i++) {
        media += gastofamilia[i];
    }
    media /= numFamilias;

    // Exibe a média
    cout << "Média de gastos: " << media << endl;

    // Verifica se os gastos de cada família estão acima, abaixo ou na média
    for (int i = 0; i < numFamilias; i++) {
        if (gastofamilia[i] < media) {
            cout << "A família " << i + 1 << " tem gastos abaixo da média." << endl;
        } else if (gastofamilia[i] == media) {
            cout << "A família " << i + 1 << " tem gastos na média." << endl;
        } else {
            cout << "A família " << i + 1 << " tem gastos acima da média." << endl;
        }
    }

    // Libera a memória alocada dinamicamente
    delete[] gastofamilia;

    return 0;
}
