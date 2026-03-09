#include <stdio.h>
#include <stdbool.h>


int main() {

    // variable 

    int age = 23;
    int x = 34; 

    float gpa = 5.9;
    float price = 55.09;
    
    double pi = 3.14159265359;
    double y = 2.3454654645; 

    char grade = 'A';
    char b = 'B';

    char name[] = "Jhon Mark";
    char email[]= "moda@gmail.com";

    bool isOnline = false; 



    // int 
    printf("Your are %d years old\n", age);
    printf("The value of x = %d.\n", x);

    // float 
    printf("Your GPA is: %f\n", gpa );
    printf("The price is %.1f\n", price);

    // double 
    printf("This is PI: %lf\n", pi);
    printf("The y is %.15lf\n", y);

    // char 
    printf("This is character a: %c\n", grade);
    printf("This is Charcater b: %c\n", b);

    // char []
    printf("My name is: %s \n", name);
    printf("My email: %s \n", email);

    if(isOnline){
        printf("The user is ONLINE");
    }
    else {
        printf("The user is OFFLINE");
    };
    
    return 0;
}