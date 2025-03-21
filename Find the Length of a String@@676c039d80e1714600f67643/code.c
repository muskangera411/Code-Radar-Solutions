#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    int length=strlen(str);
    fgets(str,sizeof(str),stdin);
    printf("%d",length);
    return 0;
}