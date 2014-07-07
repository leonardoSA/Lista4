#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define posi 0

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

void InseriNome(char lista[][40],int posi){

scanf("\n\r%[^\n]",lista[posi]);

}


int main(){
	
char lista[20][40];	
int opcao=0;	
int posi=0;

LeInteiro(&opcao);

switch(opcao){
	case 1:
			InseriNome(lista[posi][40],posi);
			posi++;
			break;
	//case 2:

	//case 3:
}
return 0;}
