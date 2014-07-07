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

void StringSomaUm(char pal1[]){
    int i;
    
    for(i=0;i<strlen(pal1);i++){
        pal1[i]=pal1[i]+1;
           printf("%c",pal1[i]);}
}

int main(){
	
char pal[50];
	
LeMensg("DIGITE UMA STRING\n");
LeString(pal);
StringSomaUm(pal);	

return 0;
}
