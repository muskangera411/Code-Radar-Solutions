#include <stdio.h>
int main(){
    int a;int arr[a];
    scanf("%d",&a);
    for(int i=0;i<a;i++){scanf("%d",&arr[i]);}
    int sum;
    for(int i=0;i<a;i++){sum+=arr[i];}
    printf("%d",sum);
    return 0;
}