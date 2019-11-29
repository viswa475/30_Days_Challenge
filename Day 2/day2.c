#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int j;
    double dd;
    char str[100],*p,a[100];
    scanf("%d",&j);
    scanf("%lf",&dd);
    scanf(" %[^\n]",str);
    p=strcpy(a,s);
    // Read and save an integer, double, and String to your variables.
    printf("%d\n",i+j);
    // Print the sum of both integer variables on a new line.
    printf("%.1lf\n",d+dd);
    // Print the sum of the double variables on a new line.
    p=strcat(a,str);
    printf("%s\n",p);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
   
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
