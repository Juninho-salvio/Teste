//Questão 06  
//Um banco de Uberaba abriu uma linha de crédito para diversos clientes. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. 
//Faça um programa em linguagem C que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 main()

{
	float salarioB, prestacao;
	
	pintf("\nDigite o valor do salario bruto: \t");
	scanf("%f", &salarioB);
	
	print("\nDigite o valor da pretação: \t");
	scanf("%f", &prestacao);

		if ( prestacao <= (salarioB * 0.3))
			printf("\n\nEMPRESTIMO CONCEDIDO!!!\n");
		else
			printf("\n\nEMPRESTIMO NAO CONCEDIDO!!!\n");	
	
}

