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

void ImprimContrario(char pal[]){
int i;	
	
for(i=strlen(pal);i>=0;i--){
	printf("%c",pal[i]);
}	

}

int main(){
	
char pal[50];	
	
LeMensg("DIGITE UMA STRING\n");
LeString(pal);
ImprimContrario(pal);


return 0;}
