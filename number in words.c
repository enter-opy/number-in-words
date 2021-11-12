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
    int number;
    scanf("%d", &number);

    char string[10000];

    if (number == 0) printf("%s", digits[number]);
    else
    {
        for (int i = 0; number != 0; i++)
        {
            char *three_digit_str[500];
            three_digits(number % 1000, three_digit_str[i]);
        }
    }

    getch();

    return 0;
}

void three_digits(int number, char* string)
{
    if (number / 100 != 0) strcat(string, strcat(digits[number / 100], " hundred "));

    if (number / 10 % 10 == 1) strcat(string, strcat(teens[number % 10], " "));

    else if (number / 10 % 10 > 1)
        strcat(string, strcat(tens[number / 10 % 10 - 2], " "));
        if (number % 10 > 0) strcat(string, strcat(digits[number % 10], " "));
    
    if (number % 10 > 0) strcat(string, strcat(digits[number % 10], " "));
}