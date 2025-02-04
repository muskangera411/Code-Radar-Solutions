#include <stdio.h>
int main(){
    char a[50],b;
    scanf("%49s\n",a);
    scanf("%c",&b);
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==b){count++;}
    }
    printf("%d",count);
    return 0;
}