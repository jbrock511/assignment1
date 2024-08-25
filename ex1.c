#include <stdio.h>

// aditional functions might not get executed if not called from main or a nested POV

//everything within main ALWYAS gets executed
int main() {
    // syntax of variable <data_type> <variable_name> = <value>
    char first_letter_of_benjis_name = 'b';
    printf("First letter of benji's name is: %c\n", first_letter_of_benjis_name);


    //data casting past this point

    //data casting from char to int (based on format specifier)
    printf("The value of the first letter in benji's name is %d\n", first_letter_of_benjis_name);

    //data casting from char to int (variable to variable)
    int value_of_first_letter_of_benjis_name = first_letter_of_benjis_name;
    printf("The value of the first letter in benjis name is: %c\n", value_of_first_letter_of_benjis_name);

    //data casting from number to number (int to float)
    int casting_number = 5;
    printf("The int value of integer is castting variable is: %d\n", casting_number);

    float new_variable = casting_number;
    printf("The int value of integer is castting variable is: %f\n", new_variable);
    
    //data casting from number to number (flaot to int) - .2 in front of f will limit the output to 2 decimal places
    float decimal = 5.85;
    printf("The float value of integer is casting variable is: %.2f\n", decimal);

    //data value will always round DOWN to integer, not up
    int rounded_value = decimal;
    printf("The float value of integer is casting variable is: %d\n", rounded_value);


    return 0;
}