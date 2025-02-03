#include <stdio.h>
#include <string.h>
int main(){
    char str[100],temp;
    int i,l;
    scanf("%s",str);
    l=sizeof(str)/sizeof(str[0])
    for(i=0,i<l/2;i++){
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    printf("%s",str);
    return 0;
}