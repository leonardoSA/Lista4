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


void StringMaiuscu(char pal1[]){
    int i;
    
    for(i=0;i<strlen(pal1);i++){
        pal1[i]=toupper(pal1[i]);
           printf("%c",pal1[i]);}
    printf("\n");
}


void ConvertString(char pal1[]){
    int i;
    
    for(i=0;i<strlen(pal1);i++){
        if(pal1[i]==' ')
			pal1[i]=' ';
		else
			pal1[i]=pal1[i]+3;
           printf("%c",pal1[i]);}
}
    

int main()
{
    char pal1[50];
    
    LeMensg("DIGITE UMA STRING\n");
	LeString(pal1);
    StringMaiuscu(pal1);
    ConvertString(pal1);
    
	return 0;
}

