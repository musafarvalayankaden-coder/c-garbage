#include <stdio.h>
int main()
{
    
    ///////  DATA TYPES  ///////////
    
    char ch = 'A';
    int a = 20, b = 6;
    short b = 100;
    long c = 123456789;
    long long d = 9876543210LL;

    unsigned int u1 = 50;
    unsigned char u2 = 255;

    float f = 12.5f;
    double d = 123.456;
    long double ld = 98765.4321L;

    printf("===== DATA TYPES =====\n");
    printf("char = %c\n", ch);
    printf("int = %d\n", a);
    printf("short = %hd\n", s);
    printf("long = %ld\n", l);
    printf("long long = %lld\n", ll);
    printf("unsigned int = %u\n", ui);
    printf("unsigned char = %u\n", uc);
    printf("float = %.2f\n", f);
    printf("double = %.3lf\n", d);
    printf("long double = %.4Lf\n\n", ld);

    
    ////////  ARITHMETIC OPERATORS ///////////
    
    printf("===== ARITHMETIC =====\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    
    ///////  RELATIONAL OPERATORS //////////
    
    printf("===== RELATIONAL =====\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n\n", a != b);

    
    ///////  LOGICAL OPERATORS  ////////////
    
    printf("===== LOGICAL =====\n");
    printf("(a>b)&&(b>0) = %d\n", (a > b) && (b > 0));
    printf("(a<b)||(b>0) = %d\n", (a < b) || (b > 0));
    printf("!(a<b) = %d\n\n", !(a < b));

    
    ///////  ASSIGNMENT OPERATORS /////////
    
    printf("===== ASSIGNMENT =====\n");
    int x = 10;
    x += 5;
    printf("x += 5 : %d\n", x);
    x -= 3;
    printf("x -= 3 : %d\n", x);
    x *= 2;
    printf("x *= 2 : %d\n", x);
    x /= 4;
    printf("x /= 4 : %d\n", x);
    x %= 3;
    printf("x %%= 3 : %d\n\n", x);

    
    //////  INCREMENT / DECREMENT /////
    
    printf("===== INCREMENT / DECREMENT =====\n");
    int i = 5;
    printf("i++ = %d\n", i++);
    printf("After i++ : %d\n", i);
    printf("++i = %d\n", ++i);
    printf("i-- = %d\n", i--);
    printf("After i-- : %d\n", i);
    printf("--i = %d\n\n", --i);

    
    /////  BITWISE OPERATORS  //////
   
    printf("===== BITWISE =====\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);

    
    ////  CONDITIONAL OPERATOR  /////
    
    printf("===== CONDITIONAL =====\n");
    int max = (a > b) ? a : b;
    printf("Maximum = %d\n\n", max);

    
    ////  sizeof OPERATOR ////////
    
    printf("===== SIZEOF =====\n");
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(double) = %zu\n\n", sizeof(double));

    

    return 0;
}
