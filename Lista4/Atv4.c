#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeMensg(char mensg[]){
    
    printf("%s",mensg);
    
}

char LeString(char stri[]){
     
    scanf("%s",stri);
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


void CompString(char pal1[],char pal2[]){
    int i,cont=0;
    
    for(i=0;i<strlen(pal1);i++){
        if(pal1[i]==pal2[i])
            continue;
        else
            cont++;}
            
if(cont>1)
    printf("SAO DIFERENTES\n");
else
    printf("SAO IGUAIS\n");
}
    

int main()
{
    char pal1[50];
    char pal2[50];
    
    LeMensg("DIGITE DUAS STRINGS\n");
	LeString(pal1);
    LeString(pal2);
    
    CompString(pal1,pal2);
    
	return 0;
}

