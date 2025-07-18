#include <stdio.h>
long long int fibo[1000], facto[1000];
void initialize()
{
    for (int i = 0  ; i < 1000; i++ )
        {
            fibo[i]=-1;
            facto[i]=-1;
        }
}
long long int fib(int n)
{
    if ( n <= 1)
        return n;
    if ( fibo[n] != -1)
        return fibo[n];

    return fibo[n]= fib(n-1)+fib(n-2);

}
long long int fact(int n)
{
    if ( n < 2)
        return 1;
    if (facto[n]!= -1)
        return facto[n];

    return facto[n]=  n*fact(n-1);
}
int main( )
{
    initialize();
    int n;
    printf("enter an integer \n");
    scanf(" %d", &n);
    long long int  a = fib(n);
    long long int b = fact(n);
    printf("%d-th Fibonacci: %lld\n", n, a);
    printf("%d! (Factorial): %lld\n", n, b);

    return 0;
}
