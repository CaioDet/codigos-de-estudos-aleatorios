#include <iostream>

using namespace std;

class carro {

    private:
    int ano;
    float valor, km;


    public:
    // construtor
    carro(int a=0, float v=-1, float k=-1){
        //Construtor usado para lançar dados diretamente
        ano=a;
        valor=v;
        km= k;
    }


    //função get para obter 
    //função set para indicar

    void SetAno(int ano){

       this-> ano = ano; //função 'this' o ano dessa classe
    }
        int Getano (){

            return ano;
        }
    void SetValor(float v){
        valor = v;

    }
    float SetValor(){
        return valor;
    }
    void SetKm(float k){
        km = k;
    }
    float getKm(){
        return km;
    }
};

int main() {
    carro uno(1991, 5500, 150000); //insere dados caso tenha um construtor
    // uno.SetAno(1991);
    // uno.SetValor(5500);
    // uno.SetKm(150000);
    cout<< "Uno: \n";
    cout<<"Ano: "<<uno.Getano()<<endl;
    cout<<"Valor: "<<uno.SetValor()<<endl;
    cout<<"Quilometragem: "<<uno.getKm()<<endl;

    carro clio (2011,25000,170000);
    // uno.SetAno(2011);
    // uno.SetValor(25000);
    // uno.SetKm(170000);
    cout<< "Clio: \n";
    cout<<"Ano: "<<uno.Getano()<<endl;
    cout<<"Valor: "<<uno.SetValor()<<endl;
    cout<<"Quilometragem: "<<uno.getKm()<<endl;
    
    return 0;

}