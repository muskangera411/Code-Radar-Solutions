#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==0){printf("0");}
    int binary[32];
    int index=0;
    while(a>0){
        binary[index]=a%2;
        a=a/2;
        index++;
    }for(int i=index-1;i>=0;i--){
        printf("%d",binary[i]);
    }
    return 0;
}