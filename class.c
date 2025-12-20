#include<stdio.h>                         //(FST2L.C)-class.h
#include<stdlib.h>
#include"class.h"
int main (){
    int ch = 0,ar[100],ln = 0,pos = 0,start,end;
while (1){
printf("\n          Select Operation \n");
printf("\n");
printf("1 : Inseration a last operation \n");
printf("2 : Inseration specific position \n");
printf("3 : Delete from last position \n");
printf("4 : Delete from spesific position \n");
printf("5 : Traversing the array \n");
printf("6 : Linear scarch for an item \n");
printf("7 : Sorting asc or dsc \n");
printf("8 : Mergine A1 and A2 \n");
printf("9 : Display \n");
printf("0 : Exit \n");
printf("\nEnter your choice : ");
scanf("%d",&ch);
switch (ch)
{
case 0:
    exit(0);
    break;
case 1:
    printf("          Your choice : 1 \n");
    printf("     Inseration a last operation\n");
    ln = insert_last(ar,ln);
    break;
case 2:
    printf("          Your choice : 2 \n");
    printf("     Inseration specific position\n");
    printf("\nEnter your position : ");
    scanf("%d",&pos);
    if(pos >= 0 && pos < ln){
    ln = insert_specific(ar,ln,pos);
    }
    else if(pos == -1){
    ln = insert_last(ar,ln);
    }
    else {
    printf("Wrong Pposition\n");
    }
    break;
case 3:
    printf("            Your choice : 3\n");
    printf("      Delete from last position");
    ln = delete_last(ar,ln,pos);
    break;
case 4:
    printf("          Your choice : \n");
    printf("    Delete from spesific position");
    printf("\nEnter the item : ");
    scanf("%d",&pos);
    ln = delete_spesific(ar,ln,pos);
    break;
case 5:
    printf("           Your choice : 5 \n");
    printf("        Traversing the array \n");
    travarsing_array(ar,start,end);
    break;
case 6:
    printf("           Your choice : 6 \n");
    printf("           Linear Scarch ");
    linear_scarch(ar,ln);
    break;
case 7:
    printf("          Your choice : 7 \n");
    printf("          Sorting asc or dsc ");
    int choice;
    printf("\n1 for ASC & 2 for DSC\nEnter your choice : ");
    scanf("%d",&choice);
    if(choice == 1){
    asc(ar,ln);
    }
    else if(choice == 2){
    dsc(ar,ln);
    }
    else{
        printf("\nWrong Choice\n");
    }
    //sort(ar,ln);
    break;
case 9:
    printf("            Your choice : 9 \n");
    printf("Display array :- ");
    display_array(ar,ln);
    break;
default:
    printf("Invalid choice!\n");
    break;
}}
    return 0;
}