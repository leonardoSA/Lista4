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

void contaVogais(char pal[],char c){
int i,cont=0;	
	
for(i=0;i<strlen(pal);i++){
	if((pal[i]=='a')||(pal[i]=='e')||(pal[i]=='i')||(pal[i]=='o')||(pal[i]=='u')){
		cont++;
		pal[i]=c;}
}
  LeMensg("A STRING POSSUI ");
  printf("%d VOGAIS\n",cont);
  LeMensg(pal);
}

int main(){
	
char pal[50];	
char c;

LeMensg("DIGITE UMA STRING\n");
LeString(pal);
LeMensg("DIGITE UM CARACTERE\n");
c=LeCaractere();
contaVogais(pal,c);	


return 0;}
