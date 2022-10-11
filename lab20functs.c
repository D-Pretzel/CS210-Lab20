/** lab20functs.c
 * ===========================================================
 * Name:
 * Section:
 * Project: Lab 20
 * Purpose:
 * ===========================================================
 */

#include <stdbool.h>
#include "lab20functs.h"

double fToC(double degF){
    return (degF - 32) * 5/9;
}

double cToK(double degC){
    return (degC + 273.15);
}

void printTable(double degFlow, double degFhigh, double degFstep){
    printf("|--------------------------------|\n");
    printf("|                                |\n");
    printf("|         Temperature Conversions|\n");
    printf("|                                |\n");
    printf("|--------------------------------|\n");
    printf("|Fahrenheit|  Celsius |  Kelvin  |\n");
    printf("|--------------------------------|\n");
    for(double i = degFlow; i <= degFhigh; i += degFstep){
        printf("|%10.2lf|%10.2lf|%10.2lf|\n", i, fToC(i), cToK(fToC(i)));
    }
    printf("|--------------------------------|\n");
}

double getInput(char message[], double min, double max) {
    double input = 0.0;
    printf("%s", message);
    scanf("%lf", &input);

    if (input <= min || input >= max) {
        while (input <= min || input >= max) {
        printf("Your input is outside of the range %0.2f to %0.2f. Please re-enter.\n", min, max);
        printf("%s", message);
        scanf("%lf", &input);
        }
    }

    return input;
}

//Asks user if they would like to print another table
bool again(){
    char input = ' ';
    printf("Would you like to do this again?");
    scanf(" %c", &input);
    input = tolower(input);

    if(input == 'y'){
        return true;
    } else{
        return false;
    }
}