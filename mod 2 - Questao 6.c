//Quest�o 06  
//Um banco de Uberaba abriu uma linha de cr�dito para diversos clientes. O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. 
//Fa�a um programa em linguagem C que permita entrar com o sal�rio bruto e o valor da presta��o e informar se o empr�stimo pode ou n�o ser concedido.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 main()

{
	float salarioB, prestacao;
	
	pintf("\nDigite o valor do salario bruto: \t");
	scanf("%f", &salarioB);
	
	print("\nDigite o valor da preta��o: \t");
	scanf("%f", &prestacao);

		if ( prestacao <= (salarioB * 0.3))
			printf("\n\nEMPRESTIMO CONCEDIDO!!!\n");
		else
			printf("\n\nEMPRESTIMO NAO CONCEDIDO!!!\n");	
	
}

