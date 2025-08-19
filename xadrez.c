#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {	
	int var = 0;
	// Constantes para o número de movimentos de cada peça
	const int torre = 5;
	const int bispo = 5;
	const int rainha = 8;
	const int cavalo_vertical = 2;
	const int cavalo_horizontal = 1;

	// Simulação do movimento da Torre
	printf("Torre movendo...\n");
	for(int i = 0; i < torre; i++){
		printf("Direita\n");
	}
		
	// Simulação do movimento do Bispo
	printf("\nBispo movendo...\n");
	while(var < bispo){
		printf("Cima-direita\n");
		var++;
	}
				
	// Simulação do movimento da Rainha
	printf("\nRainha movendo...\n");
	var = 0; 
	do{
		printf("Esquerda\n");
		var ++;
	}while(var < rainha);
	
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
