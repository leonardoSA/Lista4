#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeMensg(char mensg[]){
    
    printf("%s",mensg);
}

char LeString(char stri[]){
     
    //scanf("\n\r%[^\n]",stri);
    scanf("%s",stri);
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

void ImpriAceita(char nome[], char sexo, int idade){
	
if(((sexo=='f')||(sexo=='F'))&&(idade<25))
	printf("%s ACEITA\n",nome);
else
	printf("%s NAO ACEITA\n",nome);
	

}


int main(){
	
char nome[50];
char sexo;
int idade;

LeMensg("DIGITE O NOME:\n");
LeString(nome);
LeMensg("DIGITE O SEXO:\n");
sexo=LeCaractere();
LeMensg("DIGITE A IDADE:\n");
idade=LeInteiro();	
ImpriAceita(nome,sexo,idade);
	
return 0;}

