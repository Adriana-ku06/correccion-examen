#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>
//Adriana Ku 
// producto punto entrada t x1 y1 x2 y2 or x1 y1 z1 x2 y2 z2
// donde t es el tamaño del vector y x,y z son los valores de los vectores
int producto_punto( int argc, char** argv){
  int i; 
//float x1;
//int r;
int tam_2=1;
int tam_3=1;
int tam_4=1;
int suma=0;
int t=atoi(argv[1]);
if(t==2){

  printf(" el tamaño del vector es %d\n ",t);
  for (i =2; i < argc; i++) {
    //printf("%d",i); verificar el valor de i
    tam_2=tam_2*atoi(argv[i]);
   // printf("%d",atoi(argv[i])); verificar el valor  de argv[i]
  i++;
   //printf("%d",i);
    tam_3=tam_3*atoi(argv[i]);
    //printf("%d",atoi(argv[i]));
   
   // printf("%d",i);
    //printf("%d",atoi(argv[i]));
    suma=tam_2+tam_3;
    
   
	   }

 printf("El producto punto es %d",suma);
}
else{if(t==3){printf(" el tamaño del vector es %d\n ",t);
  for (i = 2; i < argc; i++) {
    //printf("%d",i); verificar el valor de i
    tam_2=tam_2*atoi(argv[i]);
   // printf("%d",atoi(argv[i])); verificar el valor  de argv[i]
  i++;
   //printf("%d",i);
    tam_3=tam_3*atoi(argv[i]);
    //printf("%d",atoi(argv[i]));
   i++;
     tam_4=tam_4*atoi(argv[i]);
   // printf("%d",i);
    //printf("%d",atoi(argv[i]));
    suma=tam_2+tam_3+tam_4;
    

    
    
	   }
     printf("El producto punto es %d",suma);


}}


 
  
  
  
}


int main(int  argc, char** argv){
int  i;
//float x=0;
//float  sum=0;
for(i=0;i<argc;i++){
//x=atoi(argv[i]);
//sum=sum+x;
}

producto_punto(argc,argv);
}