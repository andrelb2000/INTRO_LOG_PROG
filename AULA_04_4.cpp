#include <iostream>
#define TAM_MAX_VETOR 10000
// troquei de DOIS vetores, um pra cada coisa para UMA matriz onde a primeira coluna
// corresponde ao preço e a segunda a quantidade
float compra[TAM_MAX_VETOR][2];
// Armazena a quantidadade de elementos "usados" dentro da matirz
int   quantidadeElementos = 0;
// Declarar a variavel arquivo
FILE *arquivoCompras;

int i=0;
int main(int argc, char** argv) {
	// Abrindo e criando o arquivo
	arquivoCompras = fopen("Compras_1.txt","w");
	// Criando um titulo para o nosso relatorio
	fprintf(arquivoCompras,"Relatorio de compras:\n");	
    // Inicializa o valor de todas as posições do vetor de quantidades para garantir o 
	// funcionamento do while
	// Mudando para inicializar a SEGUNDA coluna da matriz
	for(int k=0;k < TAM_MAX_VETOR; k++){
		// inicializando a SEGUNDA coluna da matriz com "1"
		// "k" é cada linha da matriz
		compra[k][1] = 1;		
	}	
	
	// Repete ENQUANTO o valor digitado da quantidade comprada for maior que zero, ou seja
	// se não comprou NADA, para e sai do while
	// testa também se nao ultrapassou o o valor máximo de quantidade do vetor.
	// TROCA para: quantidade agora é a segunda coluna da matriz,sendo que "i" continua sendo o
	// numero da compra ou linha da matriz
	while( (i < TAM_MAX_VETOR) && (compra[i][1]>0) ){	
	   // Todos os comandos aqui entre as chaves
	   // Pergunta o preço do item comprado e coloca na posição "i" do vetor de preços
	   printf("Quanto voce gastou na no item %i ? \n",i);
	   printf("Digite 0 para encerrar\n");  
	   // Muda para a linha "i" mas da primeira coluna onde está o "preço"
	   scanf("%f",&compra[i][0]);
	   
   
	   // Checa se comprou algo, ou seja, maior que zero, incrementa o contador para a proxima compra
	   // troca para a segunda coluna da matriz
	   if(compra[i][0] > 0) {
	   	  // Pergunta a quantidade comprada daquele item e coloca no vetor de quantidade de itens
	   	  printf("Quantos itens voce comprou ? \n");
          // Muda para a linha "i" mas da SEGUNDA coluna onde está a quantidade
	      scanf("%f",&compra[i][1]);  		
	   	i++;
	   	// Caso o valor comprado seja zero, eu já digo que a quantidade é zero também
	   }else{
	   	  compra[i][1] = 0;
	   } 
	}	
	quantidadeElementos = i;
	float total = 0.0;
	// Varre todos os dois vetores calculando o totalpreco[j] * (float)quantidade[j]
	// Troca para VARRE A MATRIZ, ou melhor, todas as linhas da matriz
	for(int j=0; j<quantidadeElementos; j++){
		// Troca para a Matriz Compra, usando a primeira e segunda coluna de cada linha
		printf("o valor gasto na compra %i foi %5.2f\n",j,   compra[j][0] * compra[j][1]);
		// Jogar para o arquivo ao mesmo tempo:
		// %5.2 --> 5 casas antes da virgula e 2 depois: xxxxx.xx
		fprintf(arquivoCompras,"Compra %i: R$ %5.2f\n",j+1,   compra[j][0] * compra[j][1]);
		// Troca para preço e quantidade pelas respectivas colunas da linha "j" da matriz
		total = total +  compra[j][0] * compra[j][1];
	}
	printf("Voce gastou R$ %5.2f - cuidado pra nao ficar pobre",total);
	// Jogar para o arquivo o total:
	fprintf(arquivoCompras,"Total gasto: R$ %5.2f\n",total);
	// Nao se esquecer de fechar o arquivo
	fclose(arquivoCompras);
	return 0;
}