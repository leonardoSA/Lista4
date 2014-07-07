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

void consulMaiMenIdade(){
int id,idMai=0,idMen;
char nome[10];
char nomeMai[10];
char nomeMen[10];

LeMensg("DIGITE UM NOME\n");
LeString(nome);	
LeMensg("DIGITE A IDADE\n");
id=LeInteiro();
idMen=id;
idMai=id;

while(id>0){
	
	if(id>idMai){
		idMai=id;
		strcpy(nomeMai,nome);}
	if(id<idMen){
		idMen=id;
		strcpy(nomeMen,nome);}	

	LeMensg("DIGITE UM NOME\n");
	LeString(nome);	
	LeMensg("DIGITE A IDADE\n");
	id=LeInteiro();
}

printf("A PESSOA MAIS VELHA EH %s COM A IDADE %d\n",nomeMai,idMai);
printf("A PESSOA MAIS NOVA EH %s COM A IDADE %d",nomeMen,idMen);

}


int main(){
	


consulMaiMenIdade();
	
	
return 0;}
