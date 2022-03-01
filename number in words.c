#include <stdio.h>
#include <string.h>
#include <conio.h>

void three_digits(int, char*);

char* digits[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};
char* teens[] = {
    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};
char* tens[] = {
    "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
};
char* powers[] = {
    "",
    "thousand",
    "million",
    "billion",
    "trillion",
    "quadrillion",
    "quintillion",
    "sextillion",
    "septillion",
    "octillion",
    "nonillion",
    "decillion",
    "undecillion",
    "duodecillion",
    "tredecillion",
    "quattuordecillion",
    "quindecillion",
    "sexdecillion",
    "septendecillion",
    "octodecillion",
    "novemdecillion",
    "vigintillion",
    "unvigintillion",
    "duovigintillion",
    "trevigintillion",
    "quattuorvigintillion",
    "quinvigintillion",
    "sexvigintillion",
    "septenvigintillion",
    "octovigintillion",
    "novemvigintillion",
    "trigintillion",
    "untrigintillion",
    "duotrigintillion"
};

int main(void)
{
    char three_digit_str[100];

    int number;
    scanf("%d", &number);

    if (number == 0) printf("%s", digits[number]);
    else
    {
        for (int i = 0; number != 0; i++)
        {
            three_digits(number % 1000, three_digit_str);

            printf("%s", three_digit_str[i]);
            number /= 1000;
        }
    }

    getch();

    return 0;
}

void three_digits(int number, char* string)
{
    if (number / 100 != 0)
    {
        printf("565");
        strcat(string, digits[number / 100]);
        strcat(string, " hundred ");
    }
    

    if (number / 10 % 10 == 1) 
    {
        strcat(string, teens[number % 10]);
        strcat(string, " ");
    }

    else if (number / 10 % 10 > 1)
    {
        strcat(string, tens[number / 10 % 10 - 2]);
        strcat(string, " ");
        if (number % 10 > 0)
        {
            strcat(string, digits[number % 10]);
            strcat(string, " ");
        }
    }

    if (number % 10 > 0)
    {
        strcat(string, digits[number % 10]);
        strcat(string, " ");
    }
}