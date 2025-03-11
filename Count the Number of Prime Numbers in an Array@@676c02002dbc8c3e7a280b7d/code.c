#include <stdio.h>
int is_prime(int a);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    int count=0;
    for(int j=0;j<n;j++){
        if(is_prime(arr[j])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
int is_prime(int a){
    if(a<2){
        return 0;
    }
    else{
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
                return 0;
            }
        }
            return 1;
    }
}