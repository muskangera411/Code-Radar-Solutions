#include <stdio.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    char letter;
    scanf("%c",&letter);
    char replace;
    scanf("%d",&replace);
    for(int i=0;i<50;i++){
        if(letter==str[i]){
            str[i]=replace;
        }
    }
    printf("%s",str);
    return 0;
}