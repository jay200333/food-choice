#include<stdio.h>

int main()
{
    printf("THE LIST OF AVAILABLE FOOD ITEMS : \n1.VEG BIRIYANI \n2.HYDERABADI BIRIYANI \n3.MUTTON BIRIYANI \n4.CHICKEN BIRIYANI \n5.FULL MEALS \n6.MUSHROOM BIRIYANI \n7.TOMATO RICE \n8.EGG RICE \n9.LEMON RICE \n10.CURD RICE");
   printf("\nENTER FOOD ITEM OF YOUR CHOICE:");
  int x;
scanf("%d", &x);
switch(x)
{
    case 1:printf("FOOD ITEM - VEG BIRIYANI \nPRICE- ₹80");
    break;
    case 2:printf("FOOD ITEM - HYDERABADI BIRIYANI \nPRICE- ₹90");
    break;
    case 3:printf("FOOD ITEM - MUTTON BIRIYANI \nPRICE- ₹150");
    break;
    case 4:printf("FOOD ITEM - CHICKEN BIRIYANI \nPRICE- ₹120");
    break;
    case 5:printf("FOOD ITEM - FULL MEALS \nPRICE- ₹100");
    break;
    case 6:printf("FOOD ITEM - MUSHROOM BIRIYANI \nPRICE- ₹80");
    break;
    case 7:printf("FOOD ITEM - TOMATO RICE \nPRICE- ₹50");
    break;
    case 8:printf("FOOD ITEM - EGG RICE \nPRICE- ₹60");
    break;
    case 9:printf("FOOD ITEM - LEMON RICE \nPRICE- ₹50");
    break;
    case 10:printf("FOOD ITEM - CURD RICE \nPRICE- ₹50");
    break;
    default :printf("ENTER THE VALID NUMBER");
}
 return 0;
    
}
