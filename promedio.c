//Adriana Ku 
//introducir n valores, buscar el promedio, el maximo y el minimo

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>

float promedio(float  sum, int argc){
float pro=0;
argc=argc-1;
pro=sum/argc;
printf("Promedio es %f \n",pro);

}

float max(int argc, char** argv){
int i; 
  float  max; 
  
  max =atof(argv[0]); 
  for (i = 1; i < argc; i++) 
    if (atof(argv[i]) > max) 
	  max = atof(argv[i]); 
  return (max); 
}

float min(int argc, char** argv){
int i;
float  min;
min= atof(argv[1]);
for (i = 1; i < argc; i++) {
    if (atof(argv[i]) < min){ 
	  min = atof(argv[i]);} }
  return (min);
  

}

int main(int  argc, char** argv){
int  i;
float x=0;
float  sum=0;
for(i=0;i<argc;i++){
// printf("argv[%d] is %s \n", i,argv[i]);
//printf("argc= %d",argc);verificar el valor de argc
x=atof(argv[i]);
sum=sum+x;
//promedio(sum,argc)

}
//printf("%f",sum); imprimir la suma
promedio(sum,argc);
float m=max(argc,argv);
float mini=min(argc,argv);

printf("max i %f\n", m);
printf("min is %f\n",mini);
//return 0;


}
