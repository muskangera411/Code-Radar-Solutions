#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){scanf("%d",&arr[i]);}
    int sum=0;
    for(int i=0;i<a;i++){
    while(a>0){
        sum+=arr[i]%10;
        arr[i]/=10;
    }
    printf("%d",sum);}
    return 0;
}