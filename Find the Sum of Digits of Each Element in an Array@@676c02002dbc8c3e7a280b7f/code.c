#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){scanf("%d",&arr[i]);}
    for(int i=0;i<a;i++){
    int sum=0;
    int num=abs(arr[i]);
    while(arr[i]>0){
        sum=sum+num%10;
        num/=10;
    }
    printf("%d ",sum);}
    return 0;
}