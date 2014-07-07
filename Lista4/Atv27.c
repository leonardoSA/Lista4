#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeMensg(char mensg[]){
    
    printf("%s",mensg);
}

char LeString(char stri[]){
     
    scanf("\n\r%[^\n]",stri);
    return *stri;    
}

char LeCaractere(){
char cara;	

scanf("%s",&cara);
return cara;
}

int LeInteiro(){
    int num;
     
    scanf("%d",&num);
return num;
    
}

float LeFloat(){
    float num;
     
    scanf("%f",&num);
return num; 
}

void ImpriQuatroPrimeiras(char nome[]){
int i;

for(i=0;i<4;i++){
	printf("%c",nome[i]);	
}

}

int main()
{

char nome[50];

LeMensg("DIGITE UM NOME\n");
LeString(nome);
ImpriQuatroPrimeiras(nome);

return 0;}
