#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	float numero[3],media,soma_numero,dist_maior, dist_menor;
	int i = 0, maior = 0, menor = 0;
	
	setlocale(LC_ALL,"portuguese");

	soma_numero = 0;
	
	for (i = 0; i < 3; i++){
		printf("Informe a %d� numero: ",i+1);
		scanf("%f",&numero[i]);
		soma_numero += numero[i];
		
	}
	
	maior = numero[0];  //o n�mero de entrada ele vai ser tanto o primeiro quanto o segundo 
	menor = numero[0];
	//maior valor informado / menor valor
	for(i = 0; i < 3;i++){
		
		if(numero[i] > maior){
			maior = numero[i];
		}
		
		if(numero[i] < menor){
				menor = numero[i];
		}
	}
	
	media = soma_numero / 3.0;
	printf("Maior Valor: %d\n",maior);
	printf("Menor Valor: %d\n",menor);
	printf("M�dia: %.1f\n",media);
	
	//verifique se a m�dia est� mais proxima do valor informado ou mais proxima do menor valor informado
	
	dist_menor = media - menor;
	dist_maior = maior - media;
	
	if(dist_menor < dist_maior){
		printf("A m�dia est� mais proximo do menor valor informado\n");
	}else{
		if(dist_maior > dist_menor){
			printf("A m�dia est� mais proximo do maior valor informado\n");
		}else{
			printf("A m�dia est� na mesma dist�ncia\n");
		}
	}
	
	return 0;
}
