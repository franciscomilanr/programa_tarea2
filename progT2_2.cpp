/*
Autor: Franciscomilan
Escuela: Universidad uvm
Profesor: Armando cruz
Materia: Programacion estructurada
Realizado: 14/02/2022
Descripcion: Programa 2 en C de tarea 2 que calcula e imprime la factura de una compañia
telefonica, y ofrece dos tipos de servicios, el regular y el premium, sus tarifas varian 
dependiendo del tipo de servicio, el regular es de $10 y el premium de $25 para la materia 
programacion estructurada 
*/

//Librerias
#include<stdio.h>
#include<math.h>

//Principal
int main(){
	//Declarar variables
	float nCuenta,cServicio,numMinutos,total, minDia, minNoche;
	//Ingresar
	printf("\nIngresa el numero de cuenta: ");
	scanf("%f",&nCuenta);
	printf("\nIngresa el tipo de servico (1.Regular, 2.Premium): ");
	scanf("%f",&cServicio);
	printf("\nIngresa la cantidad de minutos que usaste el servicio: ");
	scanf("%f",&numMinutos");
	//Proceso
	if(codServicio<=1){
		total=numMinutos*0.10;
	}
	else if(codServicio==2){
		total=numMinutos*0.25;
		printf("\nIngresa los minutos que usaste en el dia: ");
		scanf("%f",&minDia);
		printf("Ingresa los minutos que usaste en la noche: ");
		scanf("%f",&minNoche);
	}
	else {
		printf("Error");
	}
	//Proceso
	printf("Numero de cuenta: %.2f\n",nCuenta);
	printf("Tipo de servicio: %.2f\n",cServicio);
	printf("Minutos usados: %.2f\n",numMinutos);
	printf("Total a pagar es de: $ %.2f\n",total);
	printf("--------------------------------------\n");
 	printf("Minutos usados en el dia:\t \t %.1f \n",minDia);
 	printf("Minutos usados en la noche: \t %.1f \n",minNoche);
	//retorno
	return 0;
}
