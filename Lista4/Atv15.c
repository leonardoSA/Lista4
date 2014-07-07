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



void ConcatenaString(char pal[],char pal2[],char pal3[]){
int i,j;

for(i=0;i<strlen(pal);i++){
	pal3[i]=pal[i];}
	
pal3[i++]=' ';

for(j=0;j<strlen(pal2);j++,i++){
	pal3[i]=pal2[j];}
	
pal3[i]='\0';
}

int main(){
	
char pal[16];
char pal2[16];
char pal3[32];
	
LeMensg("DIGITE UMA STRING\n");
LeString(pal);
LeMensg("DIGITE UMA STRING\n");
LeString(pal2);
ConcatenaString(pal,pal2,pal3);
LeMensg(pal3);


return 0;
}
