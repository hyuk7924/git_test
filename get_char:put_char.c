#include <stdio.h> // getchar(), putchar()

int main()
{
    int ch;

    
    //putchar(ch);

    //while (ch != '\n') // Use '\n' to find the end of a sentence
    // 한 글자씩 처리하고 있음 이 사실이 매우 중요함!!!(feat. 버퍼)
    while ( (ch = getchar()) != '\n')
    {
        /*for (int i = 0; i <= '9'; ++i)
            if (ch == i)
                ch = '*'; */
        if (ch >= '0' && ch <= '9')
             ch = '*';

        if(ch =='f' || ch =='F')
            ch = 'X';
        //else if(ch =='F')
        //    ch = 'X';

        putchar(ch);
    }

    putchar(ch);

    return 0;

}