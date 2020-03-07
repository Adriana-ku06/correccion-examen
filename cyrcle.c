#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>
//Adriana Ku 
// verificar si n puntos estan dentro del radio  del circulo dado por un usuario
//los valores de entrada entra de la sigueinte manera ./a.out r x1 y1 x2 y2 .. xn yn
int cyrcle( int argc, char** argv){
int i; 
float x1;
int r;
int v1;
int v2;
 
  r =atoi(argv[1]); 
  printf(" el radio es %d\n ",r);
  for (i = 2; i < argc; i++) {
    v1=atoi(argv[i]);
  i++;
    v2=atoi(argv[i]);
    x1=sqrt(v1*v1+v2*v2);

    if (x1>r) {printf(" El punto (%d , %d) esta fuera del circulo \n",v1,v2);}
    else {printf("El punto (%d , %d) esta dentro del circulo\n",v1,v2);;}
	   }
  
}


int main(int  argc, char** argv){
int  i;
//float x=0;
//float  sum=0;
for(i=0;i<argc;i++){
//x=atoi(argv[i]);
//sum=sum+x;
}

cyrcle(argc,argv);
}