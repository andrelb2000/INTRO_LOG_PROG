#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int preco[10];
int main(int argc, char** argv) {
	// While - Executa enquanto algo for verdade
	// FOR - Executa um numero determinado de vezes
	for(int i=0;i<5; i++){
	   // Todos os comandos aqui entre as chaves
	   printf("Quanto voce gastou na compra %i ? \n",i);
	   scanf("%i",&preco[i]);  
	}
	int total = 0;
	for(int j=0; j<5; j++){
		printf("o valor gasto na compra %i foi %i\n",j,preco[j]);
		total = total + preco[j];
	}
	printf("Voce gastou %i - cuidado pra nao ficar pobre",total);
	
	return 0;
}