#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int lin, col, i, j, campo, conta;
	campo=0;
	conta=0;
	
	char vet[500][500];
		
	while(1){
		printf("Digite o numero de linhas e colunas:\n");
		scanf("%d %d", &lin, &col);
		fflush(stdin);
		campo++;
				
		if(lin==0 && col==0){
			break;
		}
		
		printf("Digite ponto para lugar seguro e asterisco para mina:\n");
		
		for(i=0;i<lin;i++){
			scanf("%s", vet[i]);
			fflush(stdin);
		}
		
		printf("Campo %d:\n", campo);
		
		for(i=0;i<lin;i++){
			for(j=0;j<col;j++){
				printf("%c", vet[i][j]);
			}
			printf("\n");
		}
		printf("\n");	

		for(i=0;i<lin;i++){
			for(j=0;j<col;j++){
					if(vet[i][j]=='*'){
						printf("%c", vet[i][j]);
					}
					else{ 							
						if(i>0 && j>0 && (vet[i-1][j-1]=='*')){
							conta++;
						}
						if(i>0 && (vet[i-1][j]=='*')){
							conta++;
						}
						if(i>0 && j<(col-1) && (vet[i-1][j+1]=='*')){
							conta++;
						}
						if(j>0 && (vet[i][j-1]=='*')){
							conta++;
						}
						if(j<(col-1) && (vet[i][j+1]=='*')){
							conta++;
						}
						if(i<(lin-1) && j>0 && (vet[i+1][j-1]=='*')) {
							conta++;
						}
						if(i<(lin-1) && (vet[i+1][j]=='*')){
							conta++;
						}
						if(i<(lin-1) && j<(col-1) && (vet[i+1][j+1]=='*')){
							conta++;
						}
						printf("%d", conta);
					}
					conta=0;
				}
			printf("\n");	
		}
		printf("\n");
	}
}