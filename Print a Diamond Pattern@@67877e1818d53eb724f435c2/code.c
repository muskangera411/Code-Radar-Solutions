#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i+=2){
        for(int j=0,j<(n-i)/2;j++){printf(" ");}
        for(int k=0;k<i;k++){printf("*");}printf("\n");}
    for(int i=n-2;i>=1;i-=2){
        for(int j=0;j<(n-1)/2;j++){printf(" ");}
        for(int k=0;k<i;k++){printf("*");}printf("\n");}
        return 0;
}