#include<stdio.h>

#define MAX 800

int main(){
	
	int num[MAX], pos[MAX], neg[MAX];
	int i, p=0, n=0, tam;

	printf("Quantidade de numeros: ");
	scanf("%d",&tam);
	
	if(tam>MAX){
		printf("Tamanho invalido!");
		return 1;
	}
	
	printf("*** Vetor de numeros ***\n");
	for(i=0; i<tam; i++){
		printf("Numero %d: ",i);
		scanf("%d",&num[i]);
	}
	
	p = n = 0;
	for(i=0; i<tam; i++){
		if(num[i]>=0) {
			pos[p++] = num[i];
		}
		else {
			neg[n++] = num[i];
		} 
	}
	printf("\n\n");
	printf("Total de numeros positivos: %d\n",p);
	for(i=0; i<p; i++) printf("%d ",pos[i]);
	printf("\n\n");

	printf("Total de numeros negativos: %d\n",n);
	for(i=0; i<n; i++) printf("%d ",neg[i]);
	
	return 0;
}