#include <stdio.h>
#include <string.h>

int romanToInt(char * s) {
    int b[100];
    int sum=0;
    int i=0,sum1=0;
    int len = strlen(s);
    for(i=0;i<len;i++) {
        switch(s[i]){ 
            case 'I':b[i]=1,sum1++;continue;
            case 'V':b[i]=5,sum1++;continue;
            case 'X':b[i]=10,sum1++;continue;
            case 'L':b[i]=50,sum1++;continue;
            case 'C':b[i]=100,sum1++;continue;
            case 'D':b[i]=500,sum1++;continue;
            case 'M':b[i]=1000,sum1++;continue;
            default: break;
        }
    }
    if(sum1==1) {
        sum = b[0];
        printf("%d\n",sum);}
    else {
        sum=0;
        for(i=0;i<sum1;i++) {
            if (i == sum1 - 1) {
                sum = sum + b[i];
                printf("sum:%d\n", sum);
                break;
            }
            if(b[i]>=b[i+1]) {
                sum=sum+b[i]; }
            if(b[i]<b[i+1]) {
                sum=sum+(b[i+1]-b[i]);
                i++;
                }
            }
        printf("%d\n",sum);
    }
    return sum;
}

int main() {
    //char *symcat = "MCMXCIV"; //1000 - 100 + 1000 - 10 + 100 - 1 + 5  = 1000 + 900 + 90 + 4;
    char *symcat = "III";
    int myint = 0;
    myint = romanToInt(symcat);
    printf("myint:%d\n", myint);
    return 0;
}
