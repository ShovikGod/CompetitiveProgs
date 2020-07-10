#include<stdio.h> 
void main(){
    int s, t, low, high;
    scanf("%d",&s);
    scanf("%d",&t);
    int a[s], out[t];
    for(int i=0; i<s; i++)
        scanf("%d", &a[i]);
    for(int i=0;i<t;i++){
        int c=0;
        scanf("%d %d", &low, &high);
        for(int j=0; j<s; j++)
            if((a[j] >= low) && (a[j] <= high))
                c++;
        out[i]=c;        
    }
    for(int i=0; i<t; i++)
        printf("%d ", out[i]);
}