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


void ImpriSVogal(char pal1[]){
    int i;
    
    for(i=0;i<strlen(pal1);i++){
        if(pal1[i]=='a'||pal1[i]=='e'||pal1[i]=='i'||pal1[i]=='o'||pal1[i]=='u')
            continue;
        else
            printf("%c",pal1[i]);}
}
    

int main()
{
    char pal1[50];
    
    LeMensg("DIGITE UMA STRING\n");
	LeString(pal1);
    
    ImpriSVogal(pal1);
    
	return 0;
}

