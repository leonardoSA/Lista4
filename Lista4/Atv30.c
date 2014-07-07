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

void imprimeNome(char pal[]){
	
if((pal[0]=='a')||(pal[0]=='A')){	
	LeMensg("O NOME DIGITADO FOI: ");
	LeMensg(pal);}
else
	LeMensg("STRING INVALIDA\n");
	
}

int main(){
	
char nome[50];

LeMensg("DIGITE UM NOME\n");
LeString(nome);
imprimeNome(nome);

	
return 0;}
