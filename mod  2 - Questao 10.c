//Quest�o 10 
//Uma transportadora utiliza caminh�es que suportam at� 10 toneladas de peso, as caixas transportadas tem tamanho fixo e o caminh�o comporta no m�ximo 200 volumes,
//assim, esta transportadora precisa controlar a quantidade e o peso dos volumes para acomodar nos caminh�es. 
//Fa�a um programa que leia n caixas e seu peso, ao final, o programa deve imprimir a quantidade de volumes, o peso total dos volumes e o peso m�dio dos volumes.

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
