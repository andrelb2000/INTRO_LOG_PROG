#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Declarar variavel do tipo arquivo
FILE *arquivo;


int main(int argc, char** argv) {
	// ABRIR o arquivo 
	arquivo = fopen("Aula_04_1.txt","w");
	// escrever no arquivo o texto "hello world"
	fprintf(arquivo,"Hello World\n");
	// Fechar o arquivo 
	fclose(arquivo);	
	return 0;
}