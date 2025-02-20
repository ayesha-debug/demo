/* *Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third
argument is a minimum field width; the converted number must be padded with blanks on the
left if necessary to make it wide enough. */
/*
 * Author: Yepuri Siddu
 * Created: 17 April, 2024
 * Modified: 17 April, 2024
 * */

/* *HEADER FILES */
#include <stdio.h>
#include <string.h>

// Function prototype for itoa
void itoa(int n, char str[], int len);

// Function prototype for string reversal
void str_rev(char str[]);

int main() {
    int n, len; // Input number and minimum field width
    char str[100]; // Array to store the converted string

    // Input the number and minimum field width
    scanf("%d", &n);
    scanf("%d", &len);

    // Convert the number to string with minimum field width and store it in str
    itoa(n, str, len);  // Reverse the string
    str_rev(str);

    // Print the converted string
    printf("%s\n", str);

    return 0;
}

// Function to reverse the characters in a string
void str_rev(char str[]) {
    int i = 0, tmp;
    int j = strlen(str) - 1;

    // Loop through the string and swap characters
    for (i = 0; i < j; i++, j--) {
        // Skip spaces while swapping
        while (str[i] == '*')
            i++;

        // Swap characters
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}

// Function to convert an integer to a string with minimum field width
                                                              
