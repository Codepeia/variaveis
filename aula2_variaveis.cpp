#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	/*declaracao de variavel
	
	letras minusculas
	N�o iniciar com caracteres especiais, numeros, letras maiusculas 
	A variavel precisa representar o dados que armazena
	usar padr�o camel case 
	
	*/
	/*
	Especificadores de formato (onde apresentar o dado da vari�vel)
		int = "%d" "%i"
		double = "%lf"
		float = "%f"
		char = "%s" "%c"
	*/
	
	int numero1 = 20000;
	int numero2 = 10;
	
	float numero3 = 2.1;
	double numero4 = 3.5;
	
	//concatena��o de string com vari�veis
	printf("O valor armazenado na vari�vel 1 �: %d e na variavel 2 �: %d", numero1, numero2);
	printf("\n  O valor da variavel float �: %.2f", numero3);
	printf("\n O valor da variavel double �: %.2lf", numero4);
	
	int idade;
	printf("\n\n Digite sua idade \n");
	scanf("%d", &idade);
	
	printf("Sua idade �: %d",idade);
	

	

}
