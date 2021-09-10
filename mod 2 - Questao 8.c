//Questão 08 
//Faça um programa em C que imprima todos os valores pares entre 1 e 20.

#include<stdio.h>
#include<stdlib.h>

main()

{
	int x;
	
	for( x=1 ; x <= 20 ; x++)
	{
		if(( x%2 ) == 0)
			printf("\nNumero par : %d\n", x);
	}
}
