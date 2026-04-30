class carro {  // Nome da classe em minúsculas
private:
    int ano;
    float valor, km;

public:
    // Construtor
    carro(int a, float v, float k);

    // Funções set (modificar os valores)
    void SetAno(int ano);
    void SetValor(float v);
    void SetKm(float k);

    // Funções get (obter os valores)
    int GetAno();
    float GetValor();
    float GetKm();
};