#include <stdio.h>
#include <conio.h>
int main()
{
    //-----------------------------------------------------------------------------------------------------------
    // Taking inputs from the users.....
    //-----------------------------------------------------------------------------------------------------------
    int monthly_income;
    int food_expenses, electricity_bill, gas_bill;
    int total_monthly_expenses, total_yearly_expenses, monthly_savings, yearly_savings;
    float average_saving_per_month, average_expense_per_month;
    printf("Enter your monthly income :");
    scanf("%d", &monthly_income);
    printf("Enter your monthly expenses  \n");
    printf("\nEnter your electricity bill :");
    scanf("%d", &electricity_bill);
    printf("\nEnter your Gas bill :");
    scanf("%d", &gas_bill);
    printf("\nEnter your Food expenses :");
    scanf("%d", &food_expenses);
    printf("\n-------------------------------------------------------");
    //-----------------------------------------------------------------------------------------------------------
    // Calculating Some operations on that inputs..
    //-----------------------------------------------------------------------------------------------------------
    total_monthly_expenses = electricity_bill + gas_bill + food_expenses;
    if (total_monthly_expenses <= monthly_income)
    {
        total_yearly_expenses = total_monthly_expenses * 12;
        monthly_savings = monthly_income - total_monthly_expenses;
        yearly_savings = monthly_savings * 12;
        average_saving_per_month = (float)monthly_savings / (float)monthly_income * 100.0;
        average_expense_per_month = (float)total_monthly_expenses / (float)monthly_income * 100.0;

        //-----------------------------------------------------------------------------------------------------------
        // Giving output to the users..
        //-----------------------------------------------------------------------------------------------------------
        printf("\n-------------------------------------------------------");
        printf("\nTotal Income :%d rupees", monthly_income);
        printf("\nTotal Expense :%d rupees", total_monthly_expenses);
        printf("\nMonthly Savings :%d rupees", monthly_savings);
        printf("\nYearly Savings :%d rupees", yearly_savings);
        printf("\nAverage Savings per month :%.2f%c rupees", average_saving_per_month, 37);
        printf("\nAverage Expense per month :%.2f%c rupees", average_expense_per_month, 37);
        printf("\n-------------------------------------------------------\n");
    }
    else
    {
        int more_required = total_monthly_expenses - monthly_income;
        printf("\nYou have not sufficient balance for your expenses!!\nSo...........\nFind some another job for fullfil your expenses\nthat will give you %d extra income!!\n", more_required);
    }
    //-----------------------------------------------------------------------------------------------------------
    // Successfully terminated the program..
    //-----------------------------------------------------------------------------------------------------------
    getch();
}
