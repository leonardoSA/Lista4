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

void LeDados(char nome[], char sexo, int idade, char nacio[]){
	
if((sexo!='m')){//||(sexo!='f')){
	printf("SEXO INVALIDO\n");
}
if((idade<0)||(idade>150)){
	printf("IDADE INVALIDA\n");
}	

if((!(strcmp(nacio,"brasileira")))!=1){
	printf("NACIONALIDADE INVALIDA\n");
}
if((!(strcmp(nacio,"estrangeira")))!=1){
	printf("NACIONALIDADE INVALIDA\n");}

else
	printf("%s, %s do sexo %c e maior de idade %d, esta habilitado a dirigir\n",nome,nacio,sexo,idade);
}

int main(){

char nome[50];
char nacio[20];	
int idade;
char sexo;

 LeMensg("DIGITE O SEU NOME\n");
 LeString(nome);
 LeMensg("DIGITE A SUA NACIONALIDADE\n");
 LeString(nacio);
 LeMensg("DIGITE O SEXO\n");
 sexo=LeCaractere();
 LeMensg("DIGITE SUA IDADE\n");
 idade=LeInteiro();
 LeDados(nome,sexo,idade,nacio);
 
 return 0;
}
