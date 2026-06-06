#include <stdio.h>

int main(void)
{
    // Variable declaration and initialization
    /*
    * In C, a variable is a named storage location that can hold a value of a specific type.
    * The syntax for declaring a variable is:
    * type variable_name = value;
    * Where:
    * - type: The data type of the variable (e.g., int, float, char, etc.)
    */
    int a = 5;
    int b = 10; 

    char ch = 'A'; // Character variable

    /*
    * variables names should be meaningful and follow certain rules:
    * - They must start with a letter (a-z, A-Z) or an underscore (_).
    * - They can be followed by letters, digits (0-9), or underscores.
    * - They cannot be a reserved keyword (e.g., int, return, if, etc.).
    * - They are case-sensitive (e.g., myVar and myvar are different variables).
    */

    int myVariable = 20; // Valid variable name
    // int 1stVariable = 30; // Invalid variable name (cannot start with a digit)
    // int return = 40; // Invalid variable name (cannot be a reserved keyword)
    // int myVar = 50; // Valid variable name
    

    printf("Hamza \n");
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%c \n", ch);
    return 0;
}
