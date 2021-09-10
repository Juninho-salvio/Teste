#include<stdio.h>
#include<stdlib.h>

main()

{
	int A[3][3], B[3][3], soma[3][3], x, y;
	
	for ( x = 0 ; x < 3; x++ ){
		for( y = 0 ; y < 3 ; y++){
			printf(" Matriz A , posicao %d , %d = \t ", x+1, y+1);
			scanf("%d", &A[x][y]);
			
			printf(" Matriz B , posicao %d , %d = \t ", x+1, y+1);
			scanf("%d", &B[x][y]);
		
			printf("\n");
		}
	}
	for ( x = 0 ; x < 3; x++ ){
		for ( y = 0 ; y < 3; y++ ){
			soma[x][y] = A[x][y] + B[x][y];
			printf("|  %d  | ", soma[x][y]);
		}
		printf("\n");
	}
	return 0;	
}
