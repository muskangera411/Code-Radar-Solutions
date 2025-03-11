#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr[i]);
    }
    int max_product=0;
    for(int i=0;i<a;i++){
        for(int j=1;j<a;j++){
            if(arr[i]*arr[j]>max_product){
                max_product=i*j;
            }

        }
    }
    printf("%d",max_product);
    return 0;
}