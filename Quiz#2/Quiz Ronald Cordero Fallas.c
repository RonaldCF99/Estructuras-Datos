#include <stdio.h>

void Planeta(){
	
	char nombre[20];
	int anio;
	float temperatura;
	char galaxia[40];
	char multiverso;
	
	printf("Digite un nombre para un planeta : ") ;
	scanf("%s", &nombre);

	printf("\nDigite el año actual del planeta: ");
	scanf("%i", &anio);

	printf("\nDigite la temperatura (con decimales) actual del planeta: ");
	scanf("%f", &temperatura);
	
	printf("\nDigite el nombre de la galaxia a la que pertenece el planeta: ");
	scanf("%s", &galaxia);
	
	printf("\nDigite el nombre del multiverso en que se encuentra (A,B,C,D...): ");
	scanf("%s", &multiverso);
	
	printf("___________________________________________________________________");

	printf("\n El planeta se llama: %s\n", nombre);
	printf("\n El año del planeta es %d\n", anio);
	printf("\n La temperatura del planeta es %f\n", temperatura);
	printf("\n El planeta %s se hubica en la galaxia %s\n",nombre, galaxia);
	printf("\n El multiverso en el que se encuentra es el  %s\n", multiverso);
}



int main(){
	void Planeta();
	Planeta();

}
