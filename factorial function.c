#include <stdio.h>
int fact(int n){
    int factorial =1;

    for(int i =1 ; i<=n ;i++){
        factorial = factorial*i;
    }
    printf("factorial:%d",factorial);
    
}
int main(){
    printf("enter the num u want the factorial of:");
    int n;
    scanf("%d",&n);
    fact(n);
    
}