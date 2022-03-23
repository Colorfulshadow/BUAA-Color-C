/* 
 Author: 张添翼
 Result: AC	Submission_id: 4220771
 Created at: Wed Mar 23 2022 19:48:15 GMT+0800 (China Standard Time)
 Problem_id: 5466	Time: 5	Memory: 1668
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i <= n/5; i++)
    {
        for (int j = 0; j <= n/2; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                if (i*5 + j*2+ k == n)
                {
                    printf("%d %d %d\n",i,j,k);
                }
                
            }
            
        }
        
    }
    
}