#include <stdio.h>

void calculateMeasurements(int length, int breadth); 

int main(){
    int length, breadth; 

    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    calculateMeasurements(length, breadth); 

    return 0;
}

void calculateMeasurements(int length, int breadth){ 
    if(length == breadth){
        printf("The shape is a square.\n"); 
    }else{
        printf("The shape is a rectangle.\n"); 
    }
}