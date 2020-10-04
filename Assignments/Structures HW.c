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

int userChoice;
Meal item1;
Meal item2;
Meal item3;
Meal item4;
Meal item5;
Meal foodItems[5];

//Checks to see if a user entered an invalid choice/option for a menu.
//Returns 1 if true (they did), or 0 if they did not enter bad data.
int invalidEntryCheck(int choice, int minValue, int maxValue)
{
    if (choice < minValue || choice > maxValue)
        return 1; //User entered an incorrect choice.
    else
        return 0; //They didn't.
}

Meal createMealItem(Meal meal, char name[20], float price, int calories)
{
    strcpy(meal.name, name);
    meal.price = price;
    meal.calories = calories;

    return meal;
}

void printMenu()
{
    printf("0. Modify an item\n\n");
    for (int i = 0; i < 5; i++)
        printf("%d. %s\n$%.2f\nCalories: %d\n\n", i + 1, foodItems[i].name, foodItems[i].price, foodItems[i].calories);
}

void modifyItem()
{
    printf("Which item would you like to modify? ");
    scanf("%d", &userChoice);
    if (invalidEntryCheck(userChoice, 1, 5))
    {
        printf("Please enter a valid number. Try again.");
    }
    else
    {
        char newName[20];
        float newPrice;
        int newCalories;

        printf("What would you like to change the name to? ");
        scanf("%s", &newName);
        strcpy(foodItems[userChoice].name, newName);
        printf("You changed the name to %s.\n", foodItems[userChoice].name);

        printf("\nWhat would you like to change the price to? ");
        scanf("%f", &newPrice);
        foodItems[userChoice].price = newPrice;
        printf("You changed the price to $%.2f.\n", foodItems[userChoice].price);

        printf("\nWhat would you like to change the calories to? ");
        scanf("%d", &newCalories);
        foodItems[userChoice].calories = newCalories;
        printf("You changed the calories to %d.\n\n", foodItems[userChoice].calories);

        printf("Newly updated menu:\n\n");
        printMenu(foodItems);
    }
}

void takeOrder()
{
    printf("Please enter a number to pick the item you would like: ");
    scanf("%d", &userChoice);

    if (invalidEntryCheck(userChoice, 0, 5))
    {
        printf("Please enter a valid number. Try again.");
    }
    else if (userChoice == 0)
        modifyItem();
    else
        printf("\nThank you for ordering the %s. Your meal contains %d calories, and will cost $%.2f.", foodItems[userChoice - 1].name, foodItems[userChoice - 1].calories, foodItems[userChoice - 1].price);
}

int main()
{
    //Default starting values.
    foodItems[0] = createMealItem(item1, "Hamburger", 3.99, 650);
    foodItems[1] = createMealItem(item2, "Corndog", 1.99, 275);
    foodItems[2] = createMealItem(item3, "12 inch pizza", 7.99, 1390);
    foodItems[3] = createMealItem(item4, "Chicken Salad", 8.49, 417);
    foodItems[4] = createMealItem(item5, "Chicken Sandwich", 3.05, 515);

    printf("Welcome to the restaurant!\n\n");
    printMenu();
    takeOrder();

    return 0;
}