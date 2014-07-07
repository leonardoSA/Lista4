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

void PosicaoCaratere(char pal[], int x, int y){
int i;	

 for(i=x;i<=y;i++){
	printf("%c",pal[i]);	
}
	
}

int main(){

char pal[20];	
int x,y;

 LeMensg("DIGITE A STRING\n");
 LeString(pal);
 LeMensg("DIGITE UM NUMERO INTEIRO\n");
 x=LeInteiro();
 LeMensg("DIGITE UM NUMERO INTEIRO\n");
 y=LeInteiro();
 PosicaoCaratere(pal,x,y);
 
 return 0;
}
