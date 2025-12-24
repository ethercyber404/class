//1. Define a struct Student with id (int) and cgpa (float). Create one variable, assign values, and print them.
 #include <stdio.h>                 
 #include <stdlib.h>

int main() 
{
    struct st 
    {
        int id;
        float cg;
    };

    struct st st_1;
    st_1.id = 48;
    st_1.cg = 3.29;

    printf("Student ID : %d\nCGPA : %.2f",st_1.id,st_1.cg);

    return 0;
}

//2. Create a struct Point with x and y. Ask the user for input and calculate the distance from the origin (0,0).

#include <stdio.h>
#include <math.h> 

int main() {

    struct dis {
    float x,y,distance;
    };
    struct dis a;

    printf("Enter the value of x : ");
    scanf("%f", &a.x);

    printf("Enter the value of y : ");
    scanf("%f", &a.y);

    a.distance = sqrt((a.x * a.x)+(a.y * a.y));

    printf("The distance will be: %.2f",a.distance);

    return 0;
}

//3. Create a struct variable and a pointer to that variable. Access members using both the . operator and the -> operator.

#include <stdio.h>
#include <stdlib.h>

int main() {

    struct St {
    int id;
    float cg;
    };
    struct St st_1;     
    struct St *loc; 

    st_1.id = 48;
    st_1.cg = 3.29;

    loc = &st_1;   
    printf("ID : %d\nCGPA : %.2f",loc->id,loc->cg);

    return 0;
}

//4. Create an array of 3 Product structs (name, price). Use a loop to calculate the total price of all products.

#include <stdio.h>

int main(){

    struct Product {
    char   name[100];
    float  price;
    };
    struct Product no[100];
    float  sum = 0;
    int    i;

    for (i = 1;i <= 3;i++) {
        printf("Enter product no.%d name : ",i);
        scanf("%s",no[i].name);
        printf("Enter product no.%d price : ",i);
        scanf("%f",&no[i].price);
    }
    for (i = 1; i <= 3; i++) {
        sum = sum + no[i].price;
    }
    printf("\n    product name\n");
    for (i = 1;i <= 3;i++) {
    printf("%s : %.2f\n",no[i].name,no[i].price);
    }
    printf("\nTotal Price of all products : %.2f\n",sum);

    return 0;
}

//5. Define a struct Rectangle with length and width. Pass the struct to a function that returns the calculated area.
