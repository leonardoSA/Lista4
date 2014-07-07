#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeMensg(char mensg[]){
    
    printf("%s",mensg);
    
}

void TamString(char pal[]){
    int tam;
    
    tam=strlen(pal);
    printf("O TAMANHO DA STRING EH: %d",tam); 

}


int main()
{
    char pal[100];
    
    LeMensg("DIGITE UMA STRING\n");
    scanf("%[^\n]",pal);
    TamString(pal);    
	
	return 0;
}


