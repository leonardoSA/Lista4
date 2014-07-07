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

void mercadoria(float descon,float predescon,char produ[],float preco){

	
descon=preco/10.0;
predescon=preco-descon;
LeMensg("O PRODUTO EH: ");
LeMensg(produ);	
LeMensg("\nO PRECO EH: R$ ");
printf("%.2f",preco);
LeMensg("\nO DESCONTO EH: R$ ");
printf("%.2f",descon);
LeMensg("\nO PRECO A VISTA EH: R$ ");
printf("%.2f",predescon);
}

int main(){

char produ[20];	
float preco;	
float descon=0;
float predescon=0;
	
LeMensg("DIGITE O NOME DO PRODUTO\n");
LeString(produ);
LeMensg("DIGITE O PRECO DO PRODUTO\n");
preco=LeFloat();

mercadoria(descon,predescon,produ,preco);
return 0;
}
