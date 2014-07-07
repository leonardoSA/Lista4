#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeMensg(char mensg[]){
    
    printf("%s",mensg);
}

char LeString(char stri[]){
     
    //scanf("\n\r%[^\n]",stri);
    scanf("%s",stri);
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
//corrigir saida
void LeMatriz(char mod[5][10]){
int i,j;
	
LeMensg("DIGITE UM MODELO DE CARRO\n");
for(i=0;i<5;i++){
	//scanf("\n\r%[^\n]",stri);
	scanf("\n\r%[^\n]",mod[i]);
}
for(j=0;j<5;j++){
	printf("%s\n",mod[j]);}	


}

int main(){
	
char mod [5][10];


//LeMensg("DIGITE UM MODELO DE CARRO\n");
//for(i=0;i<5;i++){
//LeString(mod[i]);}
LeMatriz(&mod[10]);
//for(j=0;j<5;j++){
//printf("%s\n",mod[j]);}	

return 0;}
