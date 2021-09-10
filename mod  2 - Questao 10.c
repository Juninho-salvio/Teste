//Questão 10 
//Uma transportadora utiliza caminhões que suportam até 10 toneladas de peso, as caixas transportadas tem tamanho fixo e o caminhão comporta no máximo 200 volumes,
//assim, esta transportadora precisa controlar a quantidade e o peso dos volumes para acomodar nos caminhões. 
//Faça um programa que leia n caixas e seu peso, ao final, o programa deve imprimir a quantidade de volumes, o peso total dos volumes e o peso médio dos volumes.

#include<stdio.h>
#include<stdlib.h>

 void main()
 
 {
 	float peso, pesototal, pesomedio;
 	int qtd, resp;
 	
 	printf("\nDeseja cadastrar uma caixa? 1-SIM / 2-NAO\n");
 	scanf("%d", &resp);
 	
 	while ( resp == 1)
 	{
 		qtd++;
 		
 		printf("\nInforme o peso da caixa = \n");
 		scanf("%f", &peso);
 		
 		pesototal += peso;
 		
 		printf("\nDeseja cadastrar uma caixa? 1-SIM / 2-NAO");
 		scanf("%d", &resp);
	 }
	
		pesomedio = (pesototal / qtd);
		
		printf("\nQuantidade de volume = %d \n", qtd);
		printf("\nPeso total dos volumes: %.2f \n", pesototal);
		printf("\nPeso medio dos volumes: %.2f \n", pesomedio);
 }
