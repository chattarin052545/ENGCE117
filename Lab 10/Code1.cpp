#include <stdio.h>

long SumLoop(int);
long SumRecur(int);

int main()
{
    printf("SumLoop(n) = %d \n", SumLoop(100));
    printf("SumRecur(n) = %d", SumRecur(100));
    return 0;
} // end function

long SumLoop( int n ){
    int i;
    long sum = 1;
    for( int i = 1; i <= n; i++)
        sum *= i;
    return sum;
} // end function

long SumRecur( int n ){
    if( n > 1)
        return n * SumRecur(n - 1);
    return 1;
}  // end function