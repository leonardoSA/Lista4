#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

void ConverterMinusculas(char pal[]){
int i;	

 for(i=0;i<strlen(pal);i++){
	pal[i]=tolower(pal[i]);
	}	
}

int main(){

char pal[50];	


 LeMensg("DIGITE A STRING\n");
 LeString(pal);
 ConverterMinusculas(pal);
 LeMensg(pal);
 return 0;
}
