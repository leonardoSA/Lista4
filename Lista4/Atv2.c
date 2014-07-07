#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeMensg(){

    
}

void recebeString(char pal[]){
    int i=0,j,p=0;
    
    for(i=0,j=strlen(pal);i<(j/2);i++,j--){
        if(pal[i]==pal[j])
            continue;
        else
            p++;}
if(p>0)
    printf("A PALAVRA NAO EH PALINDROMO\n");
else
     printf("A PALAVRA EH PALINDROMO\n");

}



int main()
{
    char pal[100];
    
    scanf("%[^\n]",pal);
    recebeString(pal);    
	
	return 0;
}

