#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int   idade = 90;
	float aposentadoria = 1245.23;
	int tamanho = 0;
	char  genero[2] = "F"; // --> [F][00h]
	char  nome[10] = "maria"; // --> TAM_MAX --> 10  ; TAM -->5
	// nome --> [m][a][r][i][a][00h][ ][ ][ ][ ]
	// nome[0]  --> 'm'
	///------------------------------
	if( strcmp(genero,"F")==0  ){
		printf("A ");
	}
	if(strcmp(genero,"M")==0 ){
		printf("O ");		
	}
	printf("%s tem %i anos e ganha R$ %5.2f de aposentadoria\n",nome,idade,aposentadoria);
	printf("O tamanho do nome de %s e: %i\n",nome,strlen(nome));
	///------------------------------ 
	// nome --> [m][a][r][i][a][00h][ ][ ][ ][ ]
	// Substitui cada letra como abaixo
	// nome --> [A][l][e][x][a][n][d][r][e][00h]
	strcpy(nome,"Alexandre"); 
	strcpy(genero,"M");
	// Se genero = "F" - Imprima "A" 
	// Se genero = "M" - Imprima "O"
	if( strcmp(genero,"F")==0  ){
		printf("A ");
	}
	if(strcmp(genero,"M")==0 ){
		printf("O ");		
	}
	// Note que a funcao "strlen" dá o tamanho da PALAVRA sem 
	// considerar que o vetor tem sempre que ter 1 posição a mais
	// para colocar o terminador "00h" (0)
	printf("%s tem %i anos e ganha R$ %5.2f de aposentadoria\n",nome,idade,aposentadoria);
	printf("O tamanho do nome de %s e: %i\n",nome,strlen(nome));
	///---------------------------------------------------------
	// Vamos fazer a entrada de dados de uma string
	printf("Entre com o nome do aposentado \n");
	scanf("%s",nome); 
	printf("Entre com a idade\n");
	scanf("%i",&idade);
	printf("Entre com genero\n");
	scanf("%s",genero);
	// "touper" é uma função que converte tudo para maiúsculo
	// portanto, mesmo que o usuário digite "f" ele irá virar "F"
	if(stricmp(genero,"F")==0){
		printf("A ");
	}
	// Para garantir que eu aceite maiúsculo ou minusculo
	// eu farei a comparação usando conectivos logicos 
	if( (strcmp(genero,"M")==0)||(strcmp(genero,"m")==0) ){
		printf("O ");		
	}
	printf("%s tem %i anos e ganha R$ %5.2f de aposentadoria\n",nome,idade,aposentadoria);
	printf("O tamanho do nome de %s e: %i\n",nome,strlen(nome));
	  




	return 0;
}