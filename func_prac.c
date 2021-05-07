#include <stdio.h>
#include <string.h> //strlen()
#include <stdbool.h>

#define WIDTH   40
#define NAME    "KJH"
#define ADDRESS "Seoul, Kroea"


void print_multiple_chars(int c, int n_stars, bool print_newline)
{
    for (int i = 0; i < n_stars; ++i)
        printf("%c", c); //putchar(c)

    if(print_newline == true)
        printf("\n");
}

void print_centered_str(char str[])
{
    int n_blanks = 0;
    n_blanks = (WIDTH - strlen(str)) / 2;
    print_multiple_chars(' ', n_blanks,false);
    printf("%s\n", str);
}

/* void print_bar(int n_stars)
{
    for (int i = 0; i < n_stars; ++i)
        printf("*");
    printf("\n");
    //printf("********************\n");

}

void print_blank(int n_blank)
{
    for (int i = 0; i < n_blank; ++i)
        printf(" ");
    printf("\n");
    //printf("********************\n");
}

 */

int main()
{
    //int n_blanks = 0;

    print_multiple_chars('*',WIDTH,true);

    print_centered_str(NAME);
    print_centered_str(ADDRESS);    

    /* n_blanks = (WIDTH - strlen(NAME)) / 2;
    print_multiple_chars(' ', n_blanks);
    printf("%s\n", NAME);

    n_blanks = (WIDTH - strlen(ADDRESS)) / 2;
    print_multiple_chars(' ', n_blanks);
    printf("%s\n", ADDRESS); */

    //print_multiple_chars('*',WIDTH);

    print_multiple_chars('*',WIDTH,false);
    printf("\n");

}   