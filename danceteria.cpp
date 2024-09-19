//Alunos:Lucas Ramos Amaral, Leidiane Santos dos Santos
#include <iostream>

using namespace std;

struct Pessoa {
    char sexo; // 'H' para Homem, 'M' para Mulher
    string nome;
};

Pessoa homens[100]; // assume max 100 pessoas
Pessoa mulheres[100]; // assume max 100 pessoas
int indiceHomens = 0;
int indiceMulheres = 0;

void chega(Pessoa pessoa) {
    if (pessoa.sexo == 'H') { // Homem
        homens[indiceHomens] = pessoa;
        indiceHomens++;
    } else { // Mulher
        mulheres[indiceMulheres] = pessoa;
        indiceMulheres++;
    }
}

void formaPares() {
    int minIndice = min(indiceHomens, indiceMulheres);
    for (int i = 0; i < minIndice; i++) {
        cout << "Par: " << mulheres[i].nome << " e " << homens[i].nome << endl;
    }
    if (indiceHomens > indiceMulheres) {
        cout << indiceHomens - indiceMulheres << " homens esperam para dançar." << endl;
    } else {
        cout << indiceMulheres - indiceHomens << " mulheres esperam para dançar." << endl;
    }
}

int main() {
    Pessoa joana = {'M', "Joana"};
    Pessoa francisco = {'H', "Francisco"};
    Pessoa joao = {'H', "João"};
    Pessoa samuel = {'H', "Samuel"};
    Pessoa maria = {'M', "Maria"};
    Pessoa davi = {'H', "Davi"};
    Pessoa cristiano = {'H', "Christiano"};
    Pessoa beatriz = {'M', "Beatriz"};

    chega(joana);
    chega(francisco);
    chega(joao);
    chega(samuel);
    chega(maria);
    chega(davi);
    chega(cristiano);
    chega(beatriz);

    formaPares();

    return 0;
}