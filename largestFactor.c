#include <stdio.h>
void main(){
    unsigned long long int n, k, i, c=0;
    scanf("%llu",&n);
    scanf("%llu",&k);
    for(i=n; i>=1; i--){
        if(n%i==0)
            c++;
        if(c==k){
            printf("%llu",i);
            break;
        }
    }
    if(c!=k) printf("1");
}