/* 
 Author: 张添翼
 Result: AC	Submission_id: 4220138
 Created at: Wed Mar 23 2022 19:43:34 GMT+0800 (China Standard Time)
 Problem_id: 5467	Time: 12	Memory: 1652
*/

#include <stdio.h>
#include <math.h>
#define N 1000000007
int main()
{
    int n;
    unsigned long long a = 1;
    unsigned long long b = 1;
    unsigned long long c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        c = a;
        a = ((a%N+b%N)%N);
        b = c;
    }
    printf("%d",b);
}