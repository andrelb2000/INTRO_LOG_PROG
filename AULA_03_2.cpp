#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int preco[10];
int main(int argc, char** argv) {
	// While - Executa enquanto algo for verdade
	// FOR - Executa um numero determinado de vezes
	for(int i=0;i<10; i++){
	   // Todos os comandos aqui entre as chaves
	   printf("O preco %i vai receber 33\n",i);	
	   preco[i] = 33;    
	}
	for(int j=0; j<10; j++){
		printf("o valor da posicao %i recebeu %i\n",j,preco[j]);
	}
	
	return 0;
}