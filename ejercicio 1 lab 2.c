//CRISTIAN SOTO

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



float **iniciarMatriz(float **p,int fil,int col);
float **llenarMatriz(float **p,int fil,int col);
void mostrarMatriz(float **p,int fil,int col);
void primofobico(float **p,int fil,int col);
int primo(int p);

int main(){
	float **matriz;
	int fil=3;
	int col=3;
	
	matriz=iniciarMatriz(matriz,fil,col);
	matriz=llenarMatriz(matriz,fil,col);
	mostrarMatriz(matriz,fil,col);
	primofobico(matriz,fil,col);
	primo(5);
	return 0;
}

int primo(int p){
	int i;
	int a=0;
	for(i=1;i<=p;i++){
       	if(p%i==0){
       		a++;
       	}       
	}
    if(a==2){
		p=0;
    }
    return p;
}

float **iniciarMatriz(float **p,int fil,int col){
	int i,j;
	p=malloc(fil*sizeof(float*));
	for(i=0;i<fil;i++){
		p[i]=malloc(col*sizeof(float));	
	}
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			p[i][j]=0;
		}
	}
	return p;
}

float **llenarMatriz(float **p,int fil,int col){
	int i,j;
	int hora = time(NULL);    
    srand(hora);
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			p[i][j]=rand()%100;
			printf("los valores de la matriz %d son: %d\n",i,p[i][j]);
		}
	}
	return p;	
}
void mostrarMatriz(float **p,int fil,int col){
	int i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%2.f  ",p[i][j]);
		}
		printf("\n");
	}	
}
void primofobico(float **p,int fil,int col){
	int i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			p[i][j]=primo(p[i][j]);
		}
	}
}
