#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int d;
    scanf("%d",&d);
    for(int i=0;i<d;i++){
        int last=arr[a-1];
        for(j=a-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
    for(i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}