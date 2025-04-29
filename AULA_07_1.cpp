#include <iostream>
#define MAX_LISTA 1000
// PROBLEMA - Criar uma lista de compras e gerar relatorio em arquivo
// PASSOS:
// 1 - Entrar com os dados.
//     Que dados ? VARIAVEIS!!!
//     a - TEXTO - Como crio uma variavel do tipo texto (String)? 
//     b - Lista de TEXTO - Como crio uma variavel LISTA de Strings ? 
//     c - Preço e quantidade - Como crio uma matriz para por a lista 
//         de preços e quantidades
// 2 - Repetir o que ?  A leitura dos dados acima
//     Sabemos quantos ? Nao --> while (alguma coisa) 
// 3 - Condição - O que fazer se nao quero continuar ? 
//              - Nesse caso, digito "zero" para o preço
// 4 - Sair com os dados (Apresentar)
//   - Como apresento a lista ? Ela tem tamanho fixo ? Agora sim.
//   - Então vou usar um "for" para imprimir cada item da lista
// 5 - Apresentação "Persistente" - Abrir arquivo e jogar resultados 
//     - Apenas tenho que repetir os comandos de escrita em tela ajustando
//       para arquivo.




int main(int argc, char** argv) {
	// Vamos criar o relatorio de compras em um arquivo texto
	// Declarar uma variavel to tipo "Arquivo"
	FILE *arquivoSaida;
	// Primeiro "Abrimos" o arquivo para escrita
	arquivoSaida = fopen("RelatorioCompras.txt","w");
	// A variavel produto pode armazenar 1 nome de produto;
	char produto[200] = "Queijo Branco";
	// Se quiser ler a string "produto" com scanf, eu 
	// nao preciso de &:
	// scanf("%s",produto); ==> 'produto' já é o
	// endereço da string/lista de caracteres
	
	// (produto) é uma variavel do tipo String ou um texto
	// Lista de Preços de produtos
	// Eu quero que (preco) seja uma lista de variaveis do tipo (float)
	float preco[MAX_LISTA];
	preco[0] = 1.99;
	preco[1] = 120;
	// ENTÃO... UMA LISTA de "Variáveis do tipo texto"...
	// (TIPO) <nome da list>[tamanho da lista]
	// char ... [200] --> Tipo "String" de até 200 de tamanho
	char produtos[200][MAX_LISTA];
	// produtos[0] -->  "Banana"
	// produtos[1] -->  "Queijo Branco"
	// produtos[2] -->  "Milho"
	// [B][a][n]....[00h]
	// [Q][u]....  .[00h]
	//--------------------------------------------
	// compra[0][0] --> Preço da 1a compra
	// compra[0][1] --> Quantidade da 1a compra
	// produtos[0]  --> Nome do produto da 1a compra
	float compra[MAX_LISTA][2];
	// Contador de cada item da lista de compras
	int item = 0;
	compra[0][0] = 1;
	// Modificação para a AULA 07
	printf("Demonstracao da AULA 07\n");
	
	
	// O correto seria testar no While se o numero de itens não 
	// é maior que o máximo de itens da lista (MAX_LISTA)
	while((compra[item][0]>0) && (item < MAX_LISTA)) {
		// Perguntar dados do produto "item"(variavel com o numero do item)
		printf("Digite o produto: ");
		
		// Como pode ver, no caso de String, 
		// Nao precisamos do "&" porque
		// 
		scanf("%s",produtos[item]);
		printf("\nDigite o preco: ");
		// Agora que sabemos o que são ponteiros, 
		// podemos entender PORQUE o raio do 
		// "scanf" tem que botar esse "&" na frente
		// O que o comando faz:
		// 1 - Espera voce digitar
		// 2 - Pega o que voce digitou e coloca na variavel
		// scanf("%i", quantidade); ==> Somente
	    //      passaria o VALOR da variavel quantidade
	    // Por exemplo: scanf("%i",30);==> NAO FUNCIONA
	    // 3 - PRECISO dizer ONDE ele vai colocar o
	    //     valor digitado
	    // 4 - POR ISSO, preciso colocar: 
	    //     scanf("%i", &quantidade);
		// No caso acima eu tenho lista de Lista de
		// caracteres, ou seja, lista de strings,
		// por exemplo: 
		// "produtos[0] é o endereço da primeira string 
		// com até 200 caracteres
		// "produtos[1] é o endereço da segunda string,etc
		scanf("%f",&compra[item][0]);
		
		
		if(compra[item][0] > 0){
			printf("\nDigite a quantidade: ");
			scanf("%f",&compra[item][1]);
			// A mesma coisa que "item = item + 1"
			item++;
			// Até que se prove o contrario, o preço do próximo
			// item é "1" pra poder continuar na repetição
			compra[item][0] = 1;
		}
	}
	// Variavel para o total geral
	float totalGeral = 0;
	// Listar itens comprados:
	// for( <Inicializacao da variavel de contagem> ; 
	      //<condição de execução> ;
	      // Comando a ser executado a toda repetição (em geral contar)
	for(int nrCompra = 0; nrCompra < item; nrCompra++){
		// Imprime na tela encaixando cada variável na formatação 
		printf("prod(%i)-[%s] R$ %5.2f - %2.0f itens = R$ %5.2f\n",
		       nrCompra+1,produtos[nrCompra],
			   compra[nrCompra][0],
			   compra[nrCompra][1],
			   compra[nrCompra][0]*compra[nrCompra][1]);
		// Acrescenta o total gasto no item atual no total geral
		totalGeral = totalGeral + compra[nrCompra][0]*compra[nrCompra][1];		
		// "Roubando" o comando de escrita na tela para mandar 
		// igualzinho para o arquivo
		fprintf(arquivoSaida,
		        "prod(%i)-[%s] R$ %5.2f - %2.0f itens = R$ %5.2f\n",
		       nrCompra+1,produtos[nrCompra],
			   compra[nrCompra][0],
			   compra[nrCompra][1],
			   compra[nrCompra][0]*compra[nrCompra][1]);
	}
	// Imprime na tela o total geral
	printf("Total geral gasto R$ %5.2f\n",totalGeral);
	
	// Roubando para imprimir no arquivo, igual na tela
	fprintf(arquivoSaida,"Total geral gasto R$ %5.2f\n",totalGeral);
	// "Fecho" o arquivo para garantir que tudo seja escrito lá ao
	// terminar o programa
	fclose(arquivoSaida);
	return 0;
}