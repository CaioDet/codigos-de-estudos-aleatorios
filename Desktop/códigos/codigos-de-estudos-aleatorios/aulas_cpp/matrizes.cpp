#include <iostream>

using namespace std;

int main() {

    int matriz [2] [3]; //1ºlinha, depois coluna; começa do 0;0

    matriz [0] [0] = 11; //0 = linha 1
    matriz [0] [1] = 12;
    matriz [0] [2] = 13;
    
    matriz [1] [0] = 21; //1 = linha 2
    matriz [1] [1] = 22;
    matriz [1] [2] = 23;
    
    //Para vetor, usar 1 'for'; para matriz, utilizar 2 'for'

    for (int i=0 ; i<2; i++){
        for (int j=0; j<3; j++){

            cout<<matriz [i][j]<< "  ";
        }
        cout<<endl;

    }
        

    

    return 0;

}