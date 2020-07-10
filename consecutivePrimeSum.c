#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPrime(unsigned long long int n) {
	if(n % 2 == 0) return false;
	unsigned long long int i, limit=(unsigned long long int)sqrt(n);
	for(i=3; i<=limit; i+=2)
		if(n % i == 0)
			return false;
	return true;
}
void main() {
	unsigned long long int N;
	scanf("%llu", &N);
	unsigned long long int sum=2;
	unsigned long long int count=0, i;
	for(i=3; i<N; i+=2){
		if(!isPrime(i))
			continue;
		sum+=i;
		if(sum>N)
			break;
		if(isPrime(sum))
			count++; 
	}
	printf("Number of primes satisfying the property: %llu", count);
}