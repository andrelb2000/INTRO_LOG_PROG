#include <iostream>
#define TAM_MAX_VETOR 10000
// Dois vetores, um para armazenar lista de preços outro para as quantidades
float preco[TAM_MAX_VETOR];
int   quantidade[TAM_MAX_VETOR];
// Armazena a quantidadade de elementos "usados" dentro do vetor
int   quantidadeElementos = 0;

int i=0;
int main(int argc, char** argv) {
    // Inicializa o valor de todas as posições do vetor de quantidades para garantir o funcionamento do while
	for(int k=0;k < TAM_MAX_VETOR; k++){
		quantidade[k] = 1;	
	}	
	
	// Repete ENQUANTO o valor digitado da quantidade comprada for maior que zero, ou seja
	// se não comprou NADA, para e sai do while
	// testa também se nao ultrapassou o o valor máximo de quantidade do vetor.
	while( (i < TAM_MAX_VETOR) && (quantidade[i]>0) ){
	   // Todos os comandos aqui entre as chaves
	   // Pergunta o preço do item comprado e coloca na posição "i" do vetor de preços
	   printf("Quanto voce gastou na no item %i ? \n",i);
	   scanf("%f",&preco[i]); 
	   // Pergunta a quantidade comprada daquele item e coloca no vetor de quantidade de itens
	   printf("Quantos itens voce comprou ? \n");
	   scanf("%i",&quantidade[i]); 
	   printf("Digite 0 para encerrar\n");    
	   // Checa se comprou algo, ou seja, maior que zero, incrementa o contador para a proxima compra
	   if(quantidade[i] > 0) {
	   	i++;
	   } 
	}	
	quantidadeElementos = i;
	float total = 0.0;
	// Varre todos os dois vetores calculando o totalpreco[j] * (float)quantidade[j]
	for(int j=0; j<quantidadeElementos; j++){
		printf("o valor gasto na compra %i foi %f\n",j, preco[j] * (float)quantidade[j]);
		total = total +  preco[j] * (float)quantidade[j];
	}
	printf("Voce gastou %f - cuidado pra nao ficar pobre",total);
	return 0;
}