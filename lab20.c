/** lab20.c
 * ===========================================================
 * Name:
 * Section:
 * Project: Lab 20
 * Purpose:
 * ===========================================================
 */

#include <stdio.h>
#include "lab20functs.h"
#include <stdbool.h>

int main() {

    double minF = 0.0;
    double maxF = 0.0;
    double stepF = 0.0;

    do{
        minF = getInput("Minimum Fahrenheit temperature: ", -459.67, 10706.0);
        maxF = getInput("Maximum Fahrenheit temperature: ", minF, 10706.0);
        stepF = getInput("What step size: ", 0, (maxF - minF)/2);
        printTable(minF, maxF, stepF);
    } while( again() );

    return 0;
}