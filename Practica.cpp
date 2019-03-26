#include <stdio.h>
#include <stdlib.h>

struct empleados
{
	char nombre[32];
	int edad;
	int id;
}; typedef struct empleados Persona;

void Cargar(Persona *punt);
void Mostrar(Persona *punt);

int main(void){
	Persona * punt;
	int tamanio = sizeof(Persona);
	printf("%d\n", tamanio);

	punt=(Persona *)malloc(sizeof(Persona));
	Cargar(punt);
	Mostrar(punt);

	return 0; 
}

void Cargar(Persona *punt){
	
	printf("Escriba el nombre del empleado: ");
	gets(punt->nombre);
	punt->edad=21;
	punt->id=37309086;

}

void Mostrar(Persona *punt){
	printf("Nombre del empleado: %s\n",punt->nombre);
	printf("Edad del empleado: %d\n",punt->edad);
	printf("ID del empleado: %d\n", punt->id);
}