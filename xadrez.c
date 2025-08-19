#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {	
	int var = 0;
	const torre = 5;
	const bispo = 5;
	const rainha = 8;
				
	printf("Torre movendo...\n");
	for(int i = 0; i < torre; i++){
		printf("Direita\n");
	}
		
	printf("\nBispo movendo...\n");
	while(var < bispo){
		printf("Cima-direita\n");
		var++;
	}
				
	printf("\nRainha movendo...\n");
	var = 0; 
	do{
		printf("Esquerda\n");
		var ++;
	}while(var < rainha);
		
					
	return 0;
}
