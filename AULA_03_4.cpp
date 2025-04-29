#include <iostream>
#define TAM_MAX_VETOR 10000
int preco[TAM_MAX_VETOR];
int quantidadeElementos = 0;
int i=0;
int main(int argc, char** argv) {
	for(int k=0;k < TAM_MAX_VETOR; k++){
		preco[k] = 1;	
	}	
	while( (i < TAM_MAX_VETOR) && (preco[i]>0) ){
	   // Todos os comandos aqui entre as chaves
	   printf("Quanto voce gastou na compra %i ? \n",i);
	   printf("Digite 0 para encerrar\n");
	   scanf("%i",&preco[i]); 
	   if(preco[i] > 0) {
	   	i++;
	   } 
	   // sizeof(preco) ==> NAO É O TAMANHO nem do vetor nem a quantidade de elementos 
	   // Em outras linguagens, existem comandos como "Apende" ou "Anexar"
	}	
	quantidadeElementos = i;
	int total = 0;
	for(int j=0; j<quantidadeElementos; j++){
		printf("o valor gasto na compra %i foi %i\n",j,preco[j]);
		total = total + preco[j];
	}
	printf("Voce gastou %i - cuidado pra nao ficar pobre",total);
	return 0;
}