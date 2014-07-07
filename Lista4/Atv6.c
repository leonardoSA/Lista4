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


void ConcatenaN(char pal1[],char pal2[], int num){
    int i;
    
    for(i=0;i<num;i++){
        pal1[strlen(pal1)+i]=pal2[i];
        printf("%c",pal1[i]);}
}
    

int main()
{
    char pal1[50];
	char pal2[50];
	int num;
		
    LeMensg("DIGITE UMA STRING\n");
	LeString(pal1);
    LeMensg("DIGITE UMA STRING\n");
	LeString(pal2);
	LeMensg("DIGITE UM NUMERO\n");
	num=LeInteiro();
	
	
    ConcatenaN(pal1,pal2,num);
    
	return 0;
}

