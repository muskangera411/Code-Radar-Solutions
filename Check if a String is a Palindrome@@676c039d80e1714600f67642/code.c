#include <stdio.h>
#include <string.h>
int main(){
    char str[100],temp;
    int i,length;
    scanf("%d",&str);
    length=strlen(str);
    for(int i=0;i<length;i++){
        temp=str[i];str[i]=str[length-i-1];str[length-i-1]=temp;
    }
    printf("s",str);
    return 0;
}