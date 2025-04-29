#include <iostream>
#include "stdio.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Variavel 
// Entrada de informaçao
// Decisões / Condicao
// Repetição
// Saida


int main(int argc, char** argv) {
	int numero = 1;
	while(numero > 0){
		printf("Digite o numero\n");
		scanf("%i",&numero);
		if(numero > 1000){
		printf("O numero eh maior que 1000\n");
		numero = numero/2;
		}else{
			printf("O numero eh menor que 1000\n");
		}	
		printf("O novo NUMERO eh %i\n",numero);			
	}

		
	return 0;
}