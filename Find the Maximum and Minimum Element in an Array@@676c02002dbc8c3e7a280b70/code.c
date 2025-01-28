#include <stdio.h>
int main(){
    int a;
    int arr[a];
    scanf("%d",&a);
    for(i=0;i<a;i++){scanf("%d",&arr[i]);}
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<a;i++){if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){min=arr[i];}
    }printf("%d %d",&min,&max);
    return 0;
}