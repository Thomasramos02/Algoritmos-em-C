#include<stdlib.h>
#include <stdio.h>

int cigarrosAoLongoVida(int cigarrosDia, int numeroAnos) {
    return cigarrosDia * numeroAnos * 365;
}

float totalGastoEmCigarros(int cigarrosAoLongoVida, float precoCigarro){
    return (cigarrosAoLongoVida / 20.0) * precoCigarro;
}

int main(void){
    int numeroAnos, cigarrosDia;
    float precoCigarro;

    printf("Quantidade de anos que fuma: ");
    scanf("%d", &numeroAnos);
    printf("Cigarros por dia: ");
    scanf("%d", &cigarrosDia);
    printf("Preço médio do cigarro em reais: ");
    scanf("%f", &precoCigarro);

    int totalCigarros = cigarrosAoLongoVida(cigarrosDia, numeroAnos);
    float totalGasto = totalGastoEmCigarros(totalCigarros, precoCigarro);

    printf("Total de Cigarros Fumados: %d\n", totalCigarros);
    printf("Total gasto em cigarros ao longo da vida: R$ %.2f\n ", totalGasto);
    return 0;
}
