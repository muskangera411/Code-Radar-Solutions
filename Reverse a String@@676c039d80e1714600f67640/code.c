#include <stdio.h>
#include <string.h>
int main(){
    char str[100],temp;
    int i,length;
    scanf("%s",&str);
    length=sizeof(str)/sizeof(str[0])
    for(i=0,i<length/2;i++){
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
    printf("%s\n",str);
    return 0;
}