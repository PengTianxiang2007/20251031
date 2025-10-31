#include <stdio.h>
#include <stdlib.h>  //Include standard library header for rand, srand, time
#include <time.h>   //Include time header for seeding random number generator

#define MAX_QUERIES 30

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}  //Function to compute GCD of two numbers using Euclidean algorithm

int main() {
    srand(time(NULL));  //Seed the random number generator with the current time

    int n;
    int a0;
    scanf("%d %d", &n, &a0);

    int resultGcd = 0;

    for (int i = 0; i < MAX_QUERIES; i++) {
        int queryIndex = (rand() % (n - 1)) + 1;  //Generate a random index between 1 and n-1

        printf("? %d\n", queryIndex);
        fflush(stdout); //Ensure the output is sent immediately

        int queriedValue;
        scanf("%d", &queriedValue);

        int difference;   //Calculate the absolute difference between queried value and a0
        if (queriedValue > a0) {
            difference = queriedValue - a0;
        } else {
            difference = a0 - queriedValue;
        }      
        resultGcd = gcd(resultGcd, difference);  //Update the GCD with the new difference
    }

    printf("! %d\n", resultGcd);
    return 0;
}
