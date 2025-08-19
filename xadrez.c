#include <stdio.h>
#include <stdlib.h>

// Função recursiva para simular o movimento da Torre

void moverTorre(int passos_restantes) {
   
    if (passos_restantes <= 0) {
        return; 
    }
    
    printf("Direita\n");
    moverTorre(passos_restantes - 1);
}

// Função recursiva com loops aninhados para o movimento do Bispo
void moverBispo(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    
    // Loop externo (vertical): imprime a parte vertical do movimento
    printf("Cima,");
    
    // Loop interno (horizontal): imprime a parte horizontal
    for (int i = 0; i < 1; i++) {
        printf("Direita\n");
    }

    moverBispo(passos_restantes - 1);
}

// Função recursiva para simular o movimento da Rainha
void moverRainha(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    
    printf("Esquerda\n");
    moverRainha(passos_restantes - 1);
}

int main(int argc, char *argv[]) {	
	// Constantes para o número de movimentos de cada peça
	const int torre_passos = 5;
	const int bispo_passos = 5;
	const int rainha_passos = 8;
	const int cavalo_vertical = 2;
	const int cavalo_horizontal = 1;
				
	// Simulação do movimento da Torre usando recursividade
	printf("Torre movendo...\n");
	moverTorre(torre_passos);
		
	// Simulação do movimento do Bispo usando recursividade e loops aninhados
	printf("\nBispo movendo...\n");
	moverBispo(bispo_passos);
				
	// Simulação do movimento da Rainha usando recursividade
	printf("\nRainha movendo...\n");
	moverRainha(rainha_passos);
	
	// Simulação do movimento do cavalo

	printf("\nCavalo movendo...\n");
	for (int i = 0; i < cavalo_vertical; i++) {
		printf("Baixo\n");
	}
	
	int j = 0;
	
	while (j < cavalo_horizontal) {
		printf("Esquerda\n");
		j++;
	}
	
	return 0;
}
