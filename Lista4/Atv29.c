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


int TamString(char pal[]) { 

return strlen(pal);

}

int Contespacbrancos(char pal[]){
int i,cont=0;
	
for(i=0;i<strlen(pal);i++){
	if(pal[i]==' ')
		cont++;}
		
return cont;
}

int main()
{

char nome[50];
int tamanho,espBranc=0;


LeMensg("DIGITE UMA STRING\n");
LeString(nome);
tamanho=TamString(nome);
espBranc=Contespacbrancos(nome);
printf("%d\n",espBranc);
printf("O TAMANHO DA STRING EH: %d\n",tamanho-espBranc);

return 0;
}
