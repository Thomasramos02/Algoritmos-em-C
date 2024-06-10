#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float Peso;
    int Idade;
    float Altura;
}Pessoa;

Pessoa SetPessoa(int idade, float peso, float altura){
    Pessoa P;
    P.Peso = peso;
    P.Altura = altura;
    P.Idade = idade;
    return P;
}
    void ImprimePessoa(Pessoa P){
        printf("Idade: %d Peso: %.2f Altura: %.2f", P.Idade, P.Peso,P.Altura);
    }
    
    int main(void){
        Pessoa Thomas;
        Thomas = SetPessoa(18, 79.0, 1.75);
        ImprimePessoa(Thomas);
        return 0;
    }
