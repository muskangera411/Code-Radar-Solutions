#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
    scanf("%d",&arr[i])}
    int x;
    scanf("%d",&x);
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            printf("%d %d",arr[i],arr[j]);
        }
    }
    return 0;
}
