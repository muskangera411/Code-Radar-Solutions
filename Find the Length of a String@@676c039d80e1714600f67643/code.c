#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    int length=sizeof(str)/sizeof(str[0]);
    fgets(str,sizeof(str),stdin);
    printf("%d",length);
    return 0;
}