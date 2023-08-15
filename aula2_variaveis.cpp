#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	/*declaracao de variavel
	
	letras minusculas
	Não iniciar com caracteres especiais, numeros, letras maiusculas 
	A variavel precisa representar o dados que armazena
	usar padrão camel case 
	
	*/
	/*
	Especificadores de formato (onde apresentar o dado da variável)
		int = "%d" "%i"
		double = "%lf"
		float = "%f"
		char = "%s" "%c"
	*/
	
	int numero1 = 20000;
	int numero2 = 10;
	
	float numero3 = 2.1;
	double numero4 = 3.5;
	
	//concatenação de string com variáveis
	printf("O valor armazenado na variável 1 é: %d e na variavel 2 é: %d", numero1, numero2);
	printf("\n  O valor da variavel float é: %.2f", numero3);
	printf("\n O valor da variavel double é: %.2lf", numero4);
	
	int idade;
	printf("\n\n Digite sua idade \n");
	scanf("%d", &idade);
	
	printf("Sua idade é: %d",idade);
	

	

}
