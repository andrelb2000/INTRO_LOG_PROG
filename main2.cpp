#include <iostream>

//Variavel que vai armazenar o maior valor comprado
float maiorCompra = 0;
float menorCompra = 1000000000;
// Variavel que vai armazenar o valor que estou comprando
float compra=1;

int main(int argc, char** argv) {
	// Repete enquanto a condição for VERDADEIRA
	// Chaves "{}" indicam inicio e fim de comando
	while(compra!=0){
		printf("Qual valor da sua compra ? (0 pra terminar): ");
		scanf("%f",&compra);
		// Se a compra for MAIOR que maiorCompra, entao
		// A NOVA maiorCompra = compra
		if(compra > maiorCompra){
			// Novo maior compra <<-- compra atual
			printf("Achou uma compra maior\n");
			maiorCompra = compra;
		}else{
			printf("preço %f  é menor que %f\n",compra,maiorCompra);
		}
		
		if(compra < menorCompra && compra !=0){
			// Novo menor compra <<-- compra atual
			printf("Achou uma compra menor\n");
			menorCompra = compra;
		}else{
			printf("preço %f  é maior que %f\n",compra,menorCompra);
		}
		
		
		
		
	}
	// Imprima a maior compra:
	printf("A maior compra foi: %f\n",maiorCompra);	
	printf("A menor compra foi: %f\n",menorCompra);			
	return 0;
}

















/*
MOV 0010,"H"  ==> 0000 1111 -->Mov
                  0000 0010 -->Algum lugar
                  1111 0000 -->"H"
MOV 0011,"e"
MOV 0100,"l"
*/