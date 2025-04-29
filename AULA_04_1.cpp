#include <iostream>
#define TAM_MAX_VETOR 10000
// Dois vetores, um para armazenar lista de preços outro para as quantidades
//float preco[TAM_MAX_VETOR];
//int   quantidade[TAM_MAX_VETOR];

// troquei de DOIS vetores, um pra cada coisa para UMA matriz onde a primeira coluna
// corresponde ao preço e a segunda a quantidade
float compra[TAM_MAX_VETOR][2];
// Armazena a quantidadade de elementos "usados" dentro da matirz
int   quantidadeElementos = 0;

int i=0;
int main(int argc, char** argv) {
    // Inicializa o valor de todas as posições do vetor de quantidades para garantir o 
	// funcionamento do while
	// Mudando para inicializar a SEGUNDA coluna da matriz
	for(int k=0;k < TAM_MAX_VETOR; k++){
		//quantidade[k] = 1;
		// inicializando a SEGUNDA coluna da matriz com "1"
		// "k" é cada linha da matriz
		compra[k][1] = 1;		
	}	
	
	// Repete ENQUANTO o valor digitado da quantidade comprada for maior que zero, ou seja
	// se não comprou NADA, para e sai do while
	// testa também se nao ultrapassou o o valor máximo de quantidade do vetor.
	
	//while( (i < TAM_MAX_VETOR) && (quantidade[i]>0) ){4// 
	// TROCA para: quantidade agora é a segunda coluna da matriz,sendo que "i" continua sendo o
	// numero da compra ou linha da matriz
	while( (i < TAM_MAX_VETOR) && (compra[i][1]>0) ){	
	   // Todos os comandos aqui entre as chaves
	   // Pergunta o preço do item comprado e coloca na posição "i" do vetor de preços
	   printf("Quanto voce gastou na no item %i ? \n",i);
	   // scanf("%f",&preco[i]);
	   // Muda para a linha "i" mas da primeira coluna onde está o "preço"
	   scanf("%f",&compra[i][0]);
	   // Pergunta a quantidade comprada daquele item e coloca no vetor de quantidade de itens
	   printf("Quantos itens voce comprou ? \n");
	   // scanf("%i",&quantidade[i]);
	   // Muda para a linha "i" mas da SEGUNDA coluna onde está a quantidade
	   scanf("%f",&compra[i][1]);	   
	   printf("Digite 0 para encerrar\n");    
	   // Checa se comprou algo, ou seja, maior que zero, incrementa o contador para a proxima compra
	   //if(quantidade[i] > 0) {
	   // troca para a segunda coluna da matriz
	   if(compra[i][1] > 0) {
	   	i++;
	   } 
	}	
	quantidadeElementos = i;
	float total = 0.0;
	// Varre todos os dois vetores calculando o totalpreco[j] * (float)quantidade[j]
	// Troca para VARRE A MATRIZ, ou melhor, todas as linhas da matriz
	for(int j=0; j<quantidadeElementos; j++){
		// printf("o valor gasto na compra %i foi %f\n",j, preco[j] * (float)quantidade[j]);
		// Troca para a Matriz Compra, usando a primeira e segunda coluna de cada linha
		printf("o valor gasto na compra %i foi %f\n",j,   compra[j][0] * compra[j][1]);
		//total = total +  preco[j] * (float)quantidade[j];
		// Troca para preço e quantidade pelas respectivas colunas da linha "j" da matriz
		total = total +  compra[j][0] * compra[j][1];
	}
	printf("Voce gastou %f - cuidado pra nao ficar pobre",total);
	return 0;
}