#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    int count=0,inWord=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(isspace((unsigned char)str[i])){inWord=0;}
        else if(!inWord){inWord=1;count++;}


    }
    printf("%d",count);
    return 0;
}