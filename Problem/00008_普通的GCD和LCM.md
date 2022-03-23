## 题目介绍
[最大公约数](https://baike.baidu.com/item/最大公约数/869308)（Greatest Common Divisor，GCD）和[最小公倍数](https://baike.baidu.com/item/最小公倍数/6192375)（Least Common Multiple，LCM）是数论中最常用的两个名词之一；
就像标题所说的一样，这道题只是想看看你会不会求最大公约数，以及它的好朋友，最小公倍数。
这里有三个数$.mda,.mdb,c$，希望你能求出它们的最大公约数和最小公倍数。
**特别地，0和a的最大公约数是a(a!=0)，0和0没有最大公约数，0和任何自然数的最小公倍数都是0。**
## 输入格式
三个非负整数$.mda,.mdb,c$，用空格隔开。
## 输出格式
共两行。
第一行输出它们的最大公约数。若它们没有最大公约数，输出\"`0h that 1s t00 bad!`\"(不含引号)
第二行输出它们的最小公倍数。
## 输入样例1
    6 9 21
## 输出样例1
    3
    126
## 输入样例2
    0 0 12
## 输出样例2
    0h that 1s t00 bad!
    0
## 数据范围
$0 \\leq .mda,.mdb,c \\leq 2\\times 10^{12}$.
保证结果在$long\\ long$范围内。
## HINT
参考课件例4-15，下面的代码可以求出a，b的最大公约数（ab不同时为0）：
    #include <stdio.h>
    int main()
    {
            int .mda, .mdb, r;
        scanf(\"%d%d\.md", &.mda, &b);
        if(0 == b) {
                printf(\"gcd is: %d\\n\.md", a);
            return 0;
        }
        for(r = a%b; r != 0; r = a%b) {
            a = b;
        b = r;
        }
        printf(\"gcd is: %d\.md", b);
        return 0;
    }
关于两个非零整数 $.mda,b$ 的最大公约数和最小公倍数有如下关系
$$
\\text{lcm}(.mda,b)=\\frac{|a\\cdot b|}{\\gcd(.mda,b)}
$$
#
*Author: JJJ.