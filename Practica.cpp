#include <stdio.h>
#include <stdlib.h>

struct empleados
{
	char *nombre;
	int edad;
	int id;
}; typedef struct empleados Persona;

void Cargar(Persona *punt, int i);
void Mostrar(Persona *puntEstruc,int i);

int main(void){
	Persona *puntEstruc=(Persona *)malloc(sizeof(Persona)*5);
	int i=0;
	puntEstruc[2].edad=22;
	printf("Edad : %d\n",puntEstruc[2].edad);
	while (i<5){
		Cargar(puntEstruc, i);
		i++;
	}

	i=0;
	while(i<5){
		Mostrar(puntEstruc, i);
		i++;
	}

	return 0; 
}

void Cargar(Persona *puntEstruc, int i){
	
	printf("Escriba el nombre del empleado: ");
	gets(puntEstruc[i].nombre);
	puntEstruc[i].edad=21;
	puntEstruc[i].id=37309086;

}

void Mostrar(Persona *puntEstruc, int i){
	printf("Nombre del empleado: %s\n",puntEstruc[i].nombre);
	printf("Edad del empleado: %d\n",puntEstruc[i].edad);
	printf("ID del empleado: %d\n", puntEstruc[i].id);
}