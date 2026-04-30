#include <iostream>

using namespace std;

float media(float prova1, float prova2, float prova3) {
    return (prova1 + prova2 + prova3) / 3;
}

int main() {
    float a, b, c, mediaTurma, mediaAluno;

    // Solicita as notas das provas
    cout << "Insira a nota da Prova 1: \n";
    cin >> a;
    cout << "Insira a nota da Prova 2: \n";
    cin >> b;
    cout << "Insira a nota da Prova 3: \n";
    cin >> c;

    // Calcula a média do aluno
    mediaAluno = media(a, b, c);

    // Solicita a média da turma
    cout << "Insira a média da turma: ";
    cin >> mediaTurma;

    // Compara a média do aluno com a média da turma
    if (mediaAluno > mediaTurma) {
        cout << "O aluno está acima da média da turma!" << endl;
    } else if (mediaAluno == mediaTurma) {
        cout << "O aluno está na média." << endl;
    } else {
        cout << "O aluno está abaixo da média!" << endl;
    }

    return 0;
}
