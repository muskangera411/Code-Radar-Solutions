#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i+=2){
        for(int j=1;j<(a-i)/2;j++){printf(" ");}
        for(int k=1;k<i;k++){printf("*");}printf("\n");}
    for(int i=a-2;i>=1;i-=2){
        for(int j=0;j<(a-1)/2;j++){printf(" ");}
        for(int k=0;k<i;k++){printf("*");}printf("\n");}
        return 0;
}