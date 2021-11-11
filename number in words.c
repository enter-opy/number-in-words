#include <stdio.h>
#include <conio.h>

char* digits[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};
char* teens[] = {
    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};
char* tens[] = {
    "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
};
char* power[] = {
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

    getch();

    return 0;
}