/* 
 Author: 张添翼
 Result: AC	Submission_id: 4222399
 Created at: Wed Mar 23 2022 20:00:45 GMT+0800 (China Standard Time)
 Problem_id: 5448	Time: 24	Memory: 1716
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    // a max
    if (b + c <= a)
    {
        printf("no triangle");
        return 0;
    }
    // is or no
    else if (b * b + c * c > a * a)
    {
        printf("acute triangle");
    }
    else if (b * b + c * c < a * a)
    {
        printf("obtuse triangle");
    }
    else if (b * b + c * c == a * a)
    {
        printf("right triangle");
    }
    //
    if (a == b || b == c || a == c)
    {
        if (a == b && a == c)
        {
            printf("\nequilateral triangle");
            return 0;
        }

        printf("\nisosceles triangle");
    }
}