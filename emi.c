#include<stdio.h> 
#include<math.h>
void main(){
    double p, s, mi, bank[2];
    int y, n, yrs;
    scanf("%lf",&p);    //principle
    scanf("%d",&y);    //tenure
    for(int k=0; k<2; k++){
        scanf("%d",&n);    //slabs
        double sum=0;
        for(int i=0; i<n; i++){
            scanf("%d",&yrs);   //slab tenure
            scanf("%lf",&s);    //slab intrest
            double sq=pow((1+s), yrs*12);
            double emi = (p*(s)) / (1-1/sq);
            sum += emi;
        }
        bank[k]=sum;
    }
    if(bank[0]<bank[1]) printf("Bank A");
    else printf("Bank B");
}