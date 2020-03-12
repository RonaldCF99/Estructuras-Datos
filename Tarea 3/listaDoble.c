#include <stdio.h>  
#include <stdlib.h>

struct _agenda {
		int posContacto;
		float codigo;
		char apodo[10];
		char apellido[15];
        char nombre[50];
        char telefono[12];
        struct _agenda *siguiente;
        struct _agenda *anterior
        };

struct _agenda *primero, *ultimo;

typedef struct _agenda nodo;

void mostrar_menu() {
      printf("\n\nMenú Lista doble:\n=====\n\n");
      printf("1.- Añadir elementos\n");
      printf("2.- Borrar elementos\n");
      printf("3.- Mostrar lista\n");
      printf("4.- Consultar indice: \n");
      printf("5.- Borrar indice: \n");
      printf("6.- Consulta Codigo: \n");
      printf("7.- Recorrer paso a paso\n");
      printf("8.- Salir\n\n");
      printf("Escoge una opción: ");
      fflush(stdout);
 }
 
 /* Con esta función añadimos un elemento al final de la lista */

void anadir_elemento() {
      nodo *nuevo;

      /* reservamos memoria para el nuevo elemento */
      nuevo = (nodo *) malloc (sizeof(nodo));
      
	if (nuevo==NULL) 
		printf( "No hay memoria disponible!\n");
		
	printf("\nNuevo elemento:\n");
	printf("Nombre: ");
	scanf("%s", &nuevo->nombre);
	
	printf("\nTeléfono: ");
	scanf("%s", &nuevo->telefono); 
	
	printf("\nPosición de contacto: ");
	scanf("%i", &nuevo->posContacto);
	
	printf("\nCódigo: ");
	scanf("%f", &nuevo->codigo);
	
	printf("\nApodo: ");
	scanf("%s", &nuevo->apodo);
	
	printf("\nApellido: ");
	scanf("%s", &nuevo->apellido);
	/* el campo siguiente va a ser NULL por ser el último elemento de la lista */
      nuevo->siguiente = NULL;
      nuevo->anterior = NULL;
      
/* ahora metemos el nuevo elemento en la lista. lo situamos         al final de la lista, se comprueba si la lista está vacía. si primero==NULL es que no hay ningún elemento en la lista. también vale ultimo==NULL */
      if (primero==NULL) {
		printf( "Primer elemento\n");
		primero = nuevo;
		ultimo = nuevo;
	} else {
           /* el hasta ahora último apuntará al nuevo */
           ultimo->siguiente = nuevo;
           nuevo->anterior = ultimo;
           /* hacemos que el nuevo sea ahora el último */
           ultimo = nuevo;
      }
 
 }
 
void mostrar_lista() {
      struct _agenda *auxiliar; /* para recorrer la lista */

      int i; i=0;
      auxiliar = primero;
      printf("\nMostrando la lista completa:\n");
      while (auxiliar!=NULL) {
            printf( "Nombre: %s, Telefono: %s, PosContacto: %i, Código %f, Apodo: %s, Apellido: %s\n",
                	auxiliar->nombre,auxiliar->telefono,auxiliar->posContacto,auxiliar->codigo,auxiliar->apodo,auxiliar->apellido);
            auxiliar = auxiliar->siguiente;
            i++;
      }
      if (i==0) printf( "\nLa lista está vacía!!\n" );
}

void consulta(int indice){
	nodo * auxiliar = primero;
	if (primero == NULL)
		printf("Lista vacía");
	int i; i = 0;
	
	while (auxiliar!= NULL){
			if (i == indice){
				printf( "Nombre: %s, Telefono: %s, PosContacto: %i, Código %f, Apodo: %s, Apellido: %s\n",
		auxiliar->nombre,auxiliar->telefono,auxiliar->posContacto,auxiliar->codigo,auxiliar->apodo,auxiliar->apellido);
		break;
			}else{i++;
		}auxiliar = auxiliar->siguiente;		  
	}
 }
 
 void borrado(int indice){
	 nodo * auxiliar = primero;
	 nodo *temp = primero;
	if (primero == NULL)
		printf("Lista vacía");
	int i; i = 0;
	if (indice == 0){
		primero = primero->siguiente;
		primero->anterior == NULL;
		free(auxiliar);
	}
	while (auxiliar->siguiente != NULL){
			if(indice-1 == i){
				temp = temp->siguiente;
				auxiliar->siguiente = temp->siguiente;
				temp->siguiente->anterior = auxiliar;
				printf( "SE HA BORRADO Nombre: %s, Telefono: %s, PosContacto: %i, Código %f, Apodo: %s, Apellido: %s\n",
		temp->nombre,temp->telefono,temp->posContacto,temp->codigo,temp->apodo,temp->apellido);
				break;
			}else{
				auxiliar = auxiliar->siguiente;
				temp = temp->siguiente;
				i++;
			}	  
	}	 
}

void consultaCodigo(float codigo){
	nodo * auxiliar = primero;
	if (primero == NULL)
		printf("Lista vacía");
	
	while (auxiliar!= NULL){
			if (auxiliar->codigo == codigo){
				printf( "Nombre: %s, Telefono: %s, PosContacto: %i, Código %f, Apodo: %s, Apellido: %s\n",
		auxiliar->nombre,auxiliar->telefono,auxiliar->posContacto,auxiliar->codigo,auxiliar->apodo,auxiliar->apellido);
		break;}
		else if (auxiliar->siguiente == NULL && auxiliar->codigo != codigo){
			printf("Codigo no encontrado");
			break;
		}auxiliar = auxiliar->siguiente;	
	}	  
	
}
 
 
 void pasoAPaso(){
	nodo *auxiliar; /* para recorrer la lista */

      int i; i=0;
      auxiliar = primero;
      printf("\nRecorriendo lista:\n");
      int opcion;
      while (auxiliar!=NULL) {
            printf( "Nombre: %s, Telefono: %s, PosContacto: %i, Código %f, Apodo: %s, Apellido: %s\n",
                	auxiliar->nombre,auxiliar->telefono,auxiliar->posContacto,auxiliar->codigo,auxiliar->apodo,auxiliar->apellido);
            i++;
            printf("\n\nDigite 0 para el nodo anterior, 1 para el siguiente, 2: para salir: ");
            scanf("%c",&opcion);
            if (opcion=='0')
				auxiliar = auxiliar->anterior;
			if (opcion == '1')
				auxiliar = auxiliar->siguiente;
			if
      }if (auxiliar == NULL)
			printf("No se encuentran más valores");
      if (i==0) 
		printf( "\nLa lista está vacía!!\n" );
} 
 int main() {
	 void mostrar_lista();
	 void mostrar_menu();
	 void anadir_elemento();
	 void consulta(int indice);
	 void borrado(int indice);
	 void consultaCodigo(float codigo);
	 	 
     char opcion;
	primero = (nodo*) NULL;
     ultimo = (nodo*) NULL;
     do {
         mostrar_menu();
         opcion = getchar();
             switch ( opcion ) {
                case '1': anadir_elemento(); break;
                case '2':  printf("No disponible todavía!\n");  break;
                case '3': mostrar_lista(primero); break;
                case '4': {int indice;
						  printf("Digite el indice(empieza en 0): ");
						  scanf("%i", &indice);
						  consulta(indice);
						  break;}
				case '5': {int indice;
						  printf("Digite el indice(empieza en 0): ");
						  scanf("%i", &indice);
						  borrado(indice);
						  break;}
				case '6': {float codigo;
						  printf("Digite el codigo(recuerde decimales): ");
						  scanf("%f", &codigo);
						  consultaCodigo(codigo);
						  break;}
				case '7': pasoAPaso(primero);
                case '8': exit( 1 );
                default:
			printf( "Opción no válida\n" );
                         break;
             }
     } while (opcion!='8');
 }
