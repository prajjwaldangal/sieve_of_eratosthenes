#include <stdio.h>
#include <stdbool.h>

int N = 100000000;

int main() {
	bool prime[N+1];
	// prime[2] = true;
	for (int i=2; i<=N; i++) {
		prime[i] = true;
	}
	for (int i=2; i*i <= N; i++) {
		if (!prime[i]) {
			continue;
		}
		for (int j=i*i; j <= N; j+=i) {
			prime[j] = false;
		}
	}
	int c = 0;
	for (int i=2; i <= N; i++) {
		if (prime[i]) {
			c++;
		}
	}
	printf("No. of primes <= %d: %d", N, c);
	return 0;
}