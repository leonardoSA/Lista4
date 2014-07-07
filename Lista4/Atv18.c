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

void PosicaoCaratere(char pal[],char c,int num){
int i;

for(i=num;i<strlen(pal);i++)
	if(pal[i]==c)
		printf("O INDICE EH: %d",i);
	else
		continue;

}

int main(){

char pal[20];	
char c;
int num;

 LeMensg("DIGITE A STRING\n");
 LeString(pal);
 LeMensg("DIGITE UM CARACTERE\n");
 c=LeCaractere();
 LeMensg("DIGITE UM NUMERO\n");
 num=LeInteiro();
 PosicaoCaratere(pal,c,num);
 
 return 0;
}
