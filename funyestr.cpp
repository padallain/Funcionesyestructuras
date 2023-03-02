#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct producto{
	int codigo;
	char descripcion [80];
	float precio; 
	float descuento;
	char fechadeVencimiento[30];
	int existencia;
}p[5];

void pedirDatos();
void imprimirProducto (producto);



int main (){
	
	
		pedirDatos();
		imprimirProducto(p[1,2,3,4,5]);	//se pone la variable dentro del parametro



getch ();
return 0;
}

void pedirDatos(){
	fflush(stdin);
	for (int i=0;i<5;i++){
		printf("Digita el codigo del producto: ");
		scanf("%i",&p[i].codigo);
		fflush(stdin);
		printf("Digita la descripcion del producto: ");
		gets(p[i].descripcion);
		fflush(stdin);
		printf("Digita el precio del producto: ");
		scanf("%f",&p[i].precio);
		fflush(stdin);
		printf("Digita el descuento del producto: ");
		scanf ("%f", &p[i].descuento);
		fflush(stdin);
		printf("Digita la fecha de vencimiento: ");
		gets(p[i].fechadeVencimiento);
		printf("Digita las existencia del producto: ");
		scanf("%i",&p[i].existencia);
		
		printf("\n");	
	}
	
	printf("\n");	
	

}

void imprimirProducto (producto ){
	
	for(int i=0; i<5;i++){
	
	printf("Codigo del producto: %i\n",p[i].codigo);
	printf("Descripcion: %s\n", p[i].descripcion );
	printf ("Precio: %.2f\n", p[i].precio);
	printf ("Descuento: %.2f\n", p[i].descuento);
	printf ("Fecha de vencimiento: %s\n",p[i].fechadeVencimiento);
	printf("Existencias: %i\n", p[i].existencia);
	
	printf("\n\n")
	}
	
}



