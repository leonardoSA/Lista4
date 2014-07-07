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

void InverString(char pal1[],char pal2[]){
int i,tam,j;

tam=strlen(pal1);

for(i=0,j=tam-1;i<tam;i++,j--){
	pal2[j]=pal1[i];}
	
pal2[tam]='\0';

}

void recebeString(char pal[],char pal2[]){
    int i=0,p=0;
    
    for(i=0;i<strlen(pal);i++){
        if(pal[i]==pal2[i])
            continue;
        else
            p++;}
if(p>0)
    printf("A PALAVRA NAO EH PALINDROMO\n");
else
     printf("A PALAVRA EH PALINDROMO\n");

}

int main(){
	
char pal[16];
char pal2[16];
	
LeMensg("DIGITE UMA STRING\n");
LeString(pal);
InverString(pal,pal2);	
printf("%s\n",pal2);
recebeString(pal,pal2);

return 0;
}
