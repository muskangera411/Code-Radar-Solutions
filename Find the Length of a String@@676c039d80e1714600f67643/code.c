#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    int length;
    fgets(str,sizeof(str),stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    printf("%d",length);
    return 0;
}