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
#include <string.h>

typedef struct
{
    char name[20];
    float price;
    int calories;
} Meal;

Meal createMealItem(Meal meal, char name[20], float price, int calories)
{
    strcpy(meal.name, name);
    meal.price = price;
    meal.calories = calories;

    return meal;
}

void printMenu(Meal meal[])
{
    for (int i = 0; i < 5; i++)
        printf("%d. %s\n$%.2f\nCalories: %d\n\n", i + 1, meal[i].name, meal[i].price, meal[i].calories);
}

void takeOrder(Meal meal[])
{
    int userChoice;
    printf("Please enter a number to pick the item you would like: ");
    scanf("%d", &userChoice);

    if (invalidEntryCheck(userChoice, 1, 5))
    {
        printf("Please enter a valid number. Try again.");
        // takeOrder(); //TODO: is this a terrible idea?
    }
    else
    {
        printf("\nThank you for ordering the %s. Your meal contains %d calories, and will cost $%.2f.", meal[userChoice - 1].name, meal[userChoice - 1].calories, meal[userChoice - 1].price);
    }
}

//Checks to see if a user entered an invalid choice/option for a menu.
//Returns 1 if true (they did), or 0 if they did not enter bad data.
int invalidEntryCheck(int choice, int minValue, int maxValue)
{
    if (choice < minValue || choice > maxValue)
        return 1; //User entered an incorrect choice.
    else
        return 0; //They didn't.
}

int main()
{
    Meal item1 = createMealItem(item1, "Hamburger", 3.99, 650);
    Meal item2 = createMealItem(item2, "Corndog", 1.99, 275);
    Meal item3 = createMealItem(item3, "12 inch pizza", 7.99, 1390);
    Meal item4 = createMealItem(item4, "Chicken Salad", 8.49, 417);
    Meal item5 = createMealItem(item5, "Chicken Sandwich", 3.05, 515);

    Meal foodItems[5] = {item1, item2, item3, item4, item5};

    printMenu(foodItems);
    takeOrder(foodItems);

    return 0;
}