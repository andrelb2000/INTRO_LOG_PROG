#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Declarar variavel do tipo arquivo
FILE *arquivo;
char nome[100];
int  idade;

int main(int argc, char** argv) {
	// ABRIR o arquivo 
	arquivo = fopen("Aula_04_2.txt","w");
	// escrever no arquivo o texto "hello world"
	fprintf(arquivo,"Joao 30\n");
	// Fechar o arquivo 
	fclose(arquivo);
	
	// Abrindo o arquivo para leitura
	arquivo = fopen("Aula_04_2.txt","r");
	// Lendo o nome e a idade
	fscanf(arquivo,"%s %i",nome,&idade);
	printf("Li do arquivo o nome %s com idade %i\n",nome,idade);
	fclose(arquivo);
		
	return 0;
}