#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void insert_node(int, int);
void print_list(void);

char str[100][100];

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

struct node {
    char data[100];
    struct node* next;
};

struct node* head;

int main(void) {
    int number;
    scanf("%d", &number);

    if (number == 0) printf("%s", digits[0]);

    else {
        for (int i = 0; number != 0; i++) {
            insert_node(number % 1000, i);
            number = number / 1000;
        }
    }

    print_list();
}

void insert_node(int number, int i) {
    if (number / 100 != 0) {
        strcat(str[i], digits[number / 100]);
        strcat(str[i], " hundred ");
    }

    if (number / 10 % 10 == 1) {
        strcat(str[i], teens[number % 10]);
        strcat(str[i], " ");
    } else if (number / 10 % 10 > 1) {
        strcat(str[i], tens[number / 10 % 10 - 2]);
        strcat(str[i], " ");

        if (number % 10 > 0) {
            strcat(str[i], digits[number % 10]);
            strcat(str[i], " ");
        }
    } else if (number % 10 > 0) {
        strcat(str[i], digits[number % 10]);
        strcat(str[i], " ");
    }

    strcat(str[i], powers[i]);

    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    strcpy(new_node->data, str[i]);

    new_node->next = head;
    head = new_node;

    return;
}

void print_list(void) {
    struct node* current = head;

    while (current != NULL) {
        printf("%s ", current->data);
        current = current->next;
    }

    return;
}