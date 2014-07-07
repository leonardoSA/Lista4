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
//corrigir função
void ExcluiCaracter(char pal1[], char pal2[], char car){
int i,j=0;
	
for(i=0;i<strlen(pal1);i++){
	if(pal1[i]==car)
		continue;
	else
		pal2[j]=pal1[i];
	j++;}

}

int main(){
	
char pal1[30];
char pal2[30]="d";
char car;

LeMensg("DIGITE UMA STRING\n");
LeString(pal1);
LeMensg("DIGITE UM CARACTERE\n");
scanf("%s",&car);
ExcluiCaracter(pal1,pal2,car);
printf("%s",pal2);

return 0;
}
