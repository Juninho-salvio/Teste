//Quest�o 12 
//Jo�o tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Jos� tem 1,10 e cresce tem 3 cent�metros por ano. 
//Construa um programa utilizando o comando while, que calcule e imprima quantos anos ser�o necess�rios para que Ciclano seja maior que Fulano.

#include<stdio.h>
#include<stdlib.h>

int main()

{
	float joao = 1.50, jose = 1.10;
	int ano = 0;
	
	while( jose < joao)
	{
		jose = jose + 0.03;
		joao = joao + 0.02;
		ano = ano + 1;
	}
	
	printf("\n%d Anos deverao ser necessarios para que Jose seja maior que Joao. \n\n", ano);
	printf("\n%.2f A altura de Jose daqui a 41 anos \n\n", jose);
	printf("\n%.2f A altura de Joao daqui a 41 anos \n\n", joao);
}
