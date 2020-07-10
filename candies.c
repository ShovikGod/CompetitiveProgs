#include<stdio.h>
void main(){
    int n, t;
    int c[100009],s[100009];
    scanf("%d",&t);    //test cases
    for(int l=0; l<t; l++){
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%d", &c[i]);
        for(int i=0; i<n; i++)    //sorting
            for(int j=i+1; j<n; j++)
                if(c[i] > c[j]){
                    int temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
        int sum=0, k=0;
        for(int i=0; i<n; i++){
            sum=sum+c[i];
            s[k++]=sum;
        }
        sum=0;
        for(int i=1; i<k; i++)
            sum += s[i];
        printf("%d", sum);
    }
}