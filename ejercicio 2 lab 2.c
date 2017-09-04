//CRISTIAN SOTO

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *funcion_1(int *A, int n);
void funcion_2(int *A,int n);

int main(){
	int n=8;
	int a;
	int *A=&a;
	A=funcion_1(A,n);
	funcion_2(A,n);
	return 0;
}

int *funcion_1(int *A, int n){
	int hora = time(NULL);    
    srand(hora);  
	int i;
	A=malloc(n*sizeof(int));

	for(i=0;i<n;i++){
		A[i]=rand()%100;
	}
	for(i=0;i<n;i++){
		printf("%d\n",A[i]);
	}
	return A;
}

void funcion_2(int *A,int n){
	int i;
	int mayor=0;
	int menor=10000;
	for(i=0;i<n;i++){
		printf("el valor del arreglo %d es %d\n",i,A[i]);
		if(A[i]>mayor){
			mayor=A[i];
		}
		if(A[i]<menor){
			menor=A[i];
		}
	}
	printf("el numero menor es  %d y el numero mayor es %d\n",menor,mayor);
}
