/* 
Autor: Franciscomilan
Escuela: Universidad uvm
Profesor: Armando Cruz
Materia: Programacion estructurada
Realizado: 16/02/2022
Descripcion: Programa en C tarea 2, se quiere comprar una casa , hay tres modelos chico, mediano, grande, la construcctora tiene un precio base por area en pies cuadrados, se calculan los precios y se muestran para la materia programacion estructurada.
*/

//Librerias
#include<stdio.h>
#include<math.h>

//Principal
int main() {	
	//Variables
	int pBase;
	float terrenoChico, terrenoMediano, terrenoGrande,precioC,precioM,precioG;
	//Entrada de datos
	printf("\n Ingresa el precio base $: ");
	scanf("%d",&pBase);
	printf("\n Ingresa el area del chico: ");
	scanf("%f",&terrenoChico);
	printf("\n Ingresa el area del mediano: ");
	scanf("%f",&terrenoMediano);
	printf("\n Ingresa el area del grande: ");
	scanf("%f",&terrenoGrande);
	//Proceso
	precioC=terrenoChico*pBase;
	precioM=terrenoMediano*pBase;
	precioG=terrenoGrande*pBase;
	//Salida
	printf("\n El precio total del Chico es: \t$%.2f",precioC);
	printf("\n El precio total del Mediano es: \t$%.2f",precioM);
	printf("\n El precio total del Grande es: \t\t$%.2f",precioG);	
	//Retorno
	return 0;
}
