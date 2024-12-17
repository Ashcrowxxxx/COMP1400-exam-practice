/*Write a C function, distance, that receives four double floating-point numbers, x1, y1, y2, and y2. This function should compute and return the custom distance of two points with the coordination (x2, y2)and(x1, y1), using the equation d = root(x2 − x1)5 + (y2 − y1)5.*/

#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2){
    float dx = pow(x2 - x1, 5);
    float dy = pow(y2 - y1, 5);
    
    return sqrt(dx + dy);
}

int main(){
    float d = 0;
    float x1,x2,y1,y2;
    
    printf("enter the first coordination:");
    scanf("%f %f", &x1, &y1);
    
    printf("enter the second coordination:");
    scanf("%f %f", &x2, &y2);
    
    d = distance(x1,y1,x2,y2);
    
    printf("the result is %f", d);
    return 0;
}
    
    
    
