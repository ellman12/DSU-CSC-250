///////////////////////////////////////////////////////////////////////
//File: Structures HW.
///////////////////////////////////////////////////////////////////////
//Purpose: Homework.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date: Oct. 12
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, September 30, 2020.
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=879512&grpid=0&isprv=0&bp=0&ou=1453155
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

typedef struct
{
    char name[20];
    float price;
    int calories;
} Meal;

Meal createMealItem(Meal meal, char name[20], float price, int calores)
{

    return meal;
}

int main()
{
    // Meal foodItems[5] ={{"Hamburger", 3.99, 650}, {"Corndog", 1.99, 275}, {"12 inch pizza", 7.99, 1390}, {"Chicken or Turkey Salad	", 8.49, 417}, {"Chicken Sandwich", 3.05, 515}};
    Meal foodItems[5];
    Meal item1 = createMealItem(item1, "Hamburger", 3.99, 650);
    Meal item2 = createMealItem(item2, "Corndog", 1.99, 275);
    Meal item3 = createMealItem(item3, "12 inch pizza", 7.99, 1390);
    Meal item4 = createMealItem(item4, "Chicken or Turkey Salad", 8.49, 417);
    Meal item5 = createMealItem(item5, "Chicken Sandwich", 3.05, 515);

    return 0;
}