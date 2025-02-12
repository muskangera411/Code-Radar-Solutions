#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){scanf("%d",&arr[i]);}
    int max=arr[0],second=-1;
    for(int i=0;i<a;i++){if(arr[i]>max){max=arr[i];}}
    for(int i=0;i<a;i++){if(arr[i]>second && arr[i]<max){second=arr[i];}}
    printf("%d",second);
    return 0;
}