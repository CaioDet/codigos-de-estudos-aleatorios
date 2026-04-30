#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // Para std::shuffle
#include <random>     // Para std::default_random_engine
#include <ctime>      // Para std::time

using namespace std;

// Função para verificar se dois alunos estão próximos
bool podeAlocar(vector<vector<string>>& sala, int fileiras, int colunas, int x, int y, string alunoA, string alunoB) {
    // Verifica se o aluno A está perto do aluno B nas posições adjacentes (acima, abaixo, à esquerda ou à direita)
    if (x > 0 && sala[x - 1][y] == alunoB) return false;  // Verifica acima
    if (x < fileiras - 1 && sala[x + 1][y] == alunoB) return false;  // Verifica abaixo
    if (y > 0 && sala[x][y - 1] == alunoB) return false;  // Verifica à esquerda
    if (y < colunas - 1 && sala[x][y + 1] == alunoB) return false;  // Verifica à direita
    return true;
}

int main() {
    // Semente aleatória para embaralhar
    random_device rd;
    mt19937 g(rd());

    int fileiras, colunas;
    cout << "Digite o número de fileiras: ";
    cin >> fileiras;
    cout << "Digite o número de colunas (carteiras por fileira): ";
    cin >> colunas;

    int totalAlunos = fileiras * colunas;
    vector<string> alunos(totalAlunos);  // Vetor para armazenar os nomes dos alunos

    // Coletando os nomes dos alunos
    for (int i = 0; i < totalAlunos; i++) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i];
    }

    // Solicita os alunos que não podem ficar próximos
    string alunoA, alunoB;
    cout << "Digite o nome do aluno que não pode ficar perto de outro: ";
    cin >> alunoA;
    cout << "Digite o nome do aluno que " << alunoA << " não pode ficar perto: ";
    cin >> alunoB;

    // Inicializa a sala como uma matriz vazia
    vector<vector<string>> sala(fileiras, vector<string>(colunas, ""));

    // Embaralha os alunos para tentar alocar de forma aleatória
    shuffle(alunos.begin(), alunos.end(), g);

    // Aloca os alunos na sala, verificando a restrição de proximidade
    int alunoIndex = 0;
    bool sucesso = true;

    for (int i = 0; i < fileiras; i++) {
        for (int j = 0; j < colunas; j++) {
            // Verifica se o aluno pode ser alocado respeitando a restrição
            if (!podeAlocar(sala, fileiras, colunas, i, j, alunos[alunoIndex], alunoB)) {
                sucesso = false;
                break;
            }
            sala[i][j] = alunos[alunoIndex];
            alunoIndex++;
        }
        if (!sucesso) break;
    }

    if (!sucesso) {
        cout << "Não foi possível alocar os alunos de forma que " << alunoA << " e " << alunoB << " fiquem distantes.\n";
    } else {
        // Imprime a sala em forma de matriz
        cout << "\nMapa da sala:\n";
        for (int i = 0; i < fileiras; i++) {
            for (int j = 0; j < colunas; j++) {
                cout << sala[i][j] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}
