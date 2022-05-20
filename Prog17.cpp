/*Autor: Ricardo Jafet Granados Chable, Realizado: 16/02/2022
	Decimo Septimo programa en C: Compra de casa.
	*/

#include<stdio.h>
int main(){
	int opcion;
	float area,precio,metros,area2,precio2,metros2,area3,precio3,metros3;
	printf("Bienvenido");
	printf("\nCual opcion desea ver? (1. Colonial,  2. Dividida,  3. Planta baja,  4. Todas las anteriores): ");
	scanf("%d",&opcion); 
	if(opcion==1){
		printf("Introduzca el precio de la casa: $");
		scanf("%f",&precio);
		printf("\nIntroduzca los metros cuadrados de la casa: ");
		scanf("%f",&area);
		metros = precio/area;
		printf("\nEl precio por metro cuadrado es: $%.2f", metros);
	}else if(opcion==2){
		printf("\nIntroduzca el precio de la casa: $");
		scanf("%f",&precio);
		printf("\nIntroduzca los metros cuadrados de la casa: ");
		scanf("%f",&area);
		metros = precio/area;
		printf("\nEl precio por metro cuadrado es: $%.2f", metros);
	}else if(opcion==3){
		printf("\nIntroduzca el precio de la casa: $");
		scanf("%f",&precio);
		printf("\nIntroduzca los metros cuadrados de la casa: ");
		scanf("%f",&area);
		metros = precio/area;
		printf("\nEl precio por metro cuadrado es: $%.2f", metros);
    }else if(opcion==4){
		printf("\nIntroduzca el precio de la casa colonial: $");
		scanf("%f",&precio);
		printf("\nIntroduzca los metros cuadrados de la casa colonial: ");
		scanf("%f",&area);
		metros = precio/area;
		printf("\n-----------------------------------------------------");
		printf("\nIntroduzca el precio de la casa dividida: $");
		scanf("%f",&precio2);
		printf("\nIntroduzca los metros cuadrados de la casa dividida: ");
		scanf("%f",&area2);
		metros2 = precio2/area2;
		printf("\n-----------------------------------------------------");
		printf("\nIntroduzca el precio de la casa de planta baja: $");
		scanf("%f",&precio3);
		printf("\nIntroduzca los metros cuadrados de la casa de planta baja: ");
		scanf("%f",&area3);
		metros3 = precio3/area3;
		printf("\n-----------------------------------------------------");
		printf("\nEl precio por metro cuadrado de la casa colonial es: $%.2f", metros);
		
		printf("\nEl precio por metro cuadrado de la casa dividida es: $%.2f", metros2);
		
		printf("\nEl precio por metro cuadrado de la casa de planta baja es: $%.2f", metros3);
		printf("\n-----------------------------------------------------");
		if((metros<metros2) && (metros<metros3)){
			printf("\nLa primera casa es mas barata en metros cuadrados: $%.2f",metros);
		}else if((metros2<metros) && (metros2<metros3)){
			printf("\nLa segunda casa es mas barata en metros cuadrados: $%.2f",metros2);
		}else{
			printf("\nLa tercera casa es mas barata en metros cuadrados: $%.2f",metros3);
		}
    }
	return 0; 
}
