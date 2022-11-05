#include <stdio.h>
#include <stdlib.h>


struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
};

 Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);
void menu();
void mostrarArbol(Nodo *,int);
	
Nodo *arbol =NULL;


int main(){
	
	menu();
	
}

//Derecha 

void menu(){
	int dato, opcion, contador=0;
	
	do{
		printf("\n\t\t\t\t\t Menu:\n");
		printf("\n\t 1. Insertar un nuevo nodo");
		printf("\n\t 2.Mostrar arbol completo");
		printf("\n\t 3.-Salir");
		printf("\n\t ");
		printf("\n\t Ingrese su opcion: ");
		scanf("%d",&opcion);
		
		switch(opcion){
			case 1:
				printf("\n ");
				printf("Ingrese un numero:");
					scanf("%d",&dato);
					insertarNodo(arbol,dato); 
					printf("\n");
					system("pause");
					break;
			case 2:
			printf("\nMostrar el arbol : \n\n");
			mostrarArbol(arbol,contador);
			printf("\n \n");
			system("pause");
			break;
					
		}
		system("cls");
	}while(opcion != 3);
}



 Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
		
	nuevo_nodo->dato =n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;	
		
		return nuevo_nodo;
}


void insertarNodo(Nodo *&arbol,int n){
	if(arbol==NULL){ 
		struct Nodo *nuevo_nodo = crearNodo(n);
		arbol=nuevo_nodo;
	}
	else{
	int valorRaiz = arbol ->dato; 
	if(n<valorRaiz){ 
		insertarNodo(arbol->izq,n);
	}
	else{ 
	insertarNodo(arbol->der,n);
	}
	
	}
}



void mostrarArbol(Nodo *arbol,int contador){
	if(arbol==NULL){
		return;
		
	}
	else{
		mostrarArbol(arbol ->der,contador+1);
		for(int i=0;i<contador;i++){
			printf("   ");
		}
		printf("%d-----\n",arbol->dato);
		mostrarArbol(arbol->izq,contador+1);
	}
}

