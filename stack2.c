//변수의 영역과 지역변수
#include <stdio.h>



int int_max(int i, int j);

int int_max(int i, int j)
{
    int m;
    m = i > j ? j : j;
    return m;
}

int main()
{
    int a;

    a = int_max(1,2);

    printf("%d\n", a);
    printf("%p\n", &a);

    {
        int a;
        a = int_max(4,5);
        
        printf("%d\n", a);
        printf("%p\n" ,&a);

        int b = 123;
    }
            
    printf("%d\n", a);
    printf("%p\n", &a); 

    return 0;
}