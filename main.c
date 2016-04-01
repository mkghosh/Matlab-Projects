#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int determine_largest_complex(int a, int b, int c);
void write_in_uppercase(char str[]);
int determine_largest_simple(int a, int b, int c);
void print_integer_value_of_char(char character);
void print_character(char c);
void assign_int_values(int *x, int *y);
void assign_int_value(int value, int *variable);
void assign_float_value(float value, int *variable);
void assign_double_value(double value, int *variable);
void print_ints(int x);
void print_hex_0_to_16();
void multiple_expression_in_for(int value);

int main(void) {
	// your code here
    char str1[] = "I need more learning.";
    write_in_uppercase(str1);
	return 0;
}

void write_in_uppercase(char str[]) {
    int delt = 'a' - 'A';
    int i = 0;
    while(str[i]) {
        if((str[i] >= 'a') && (str[i] <= 'z'))
            str[i] -= delt;
        ++i;
    }
    printf("The provided string in uppercase is : %s \n",str);
}

int determine_largest_simple(int a, int b, int c) {
    if(a > b) {
        if(a > c) {
            return a;
        }
        else {
            return c;
        }
    }
    else if (b > c) {
        return b;
    }
    else {
        return c;
    }
}

int determine_largest_complex(int a, int b, int c) {
    if(a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

void print_integer_value_of_char(char a) {
    printf("The integer value of the provided character is : %d\n",a);
}

void print_character(char c) {
    printf("The Character you typed in is : %c\n", c);
}

void assign_int_values(int *x, int *y) {
    *x = 5;
    *y = 7;
}

void print_ints(int x){
    printf("The value of the variable is : %d\n", x);
}

void assign_int_value(int value, int *variable) {
    *variable = value;
}

void assign_float_value(float value, int *variable) {
    *variable = value;
}

void assign_double_value(double value, int *variable) {
    *variable = value;
}

void print_hex_0_to_16(){
    printf("HEX(in capital)   hex(in small)     decimal\n");
    int i = 0;
    for(i = 0; i <= 16; i++) {
        printf("%-17X %-17x %d\n",i,i,i);
    }
}

void multiple_expression_in_for(int value) {
    int i = 0, j = value;
    printf("Starting of the multiple expression for loop.\n");
    for(i,j; i < value, j > 0; i++, j--)
        printf("%3d + %-3d = %4d\n", i, j, i+j);
}

