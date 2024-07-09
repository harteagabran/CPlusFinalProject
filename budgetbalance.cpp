#include "budgetbalance.h"
#include <iostream>

BudgetBalance::BudgetBalance(double initial) {
    budget = initial;
    totalExpense = 0.0;
    remaining = budget;
}

//Adds tothe budget
void BudgetBalance::addToBudget(double amount) {
    budget += amount;
    remaining = budget - totalExpense;
}

//gets total Expenses
double BudgetBalance::getTotalExpenses() {
    return totalExpense;
}

//get remaining balance
double BudgetBalance::getBalanceRemaining() {
    return remaining;
}

//add expense
void BudgetBalance::addExpense(double expense) {
    totalExpense += expense;
    remaining = budget - totalExpense;
}

//display budget
void BudgetBalance::displayBudget() {
    std::cout << "Budget: " << remaining << " / " << budget << "    Total: " << totalExpense << std::endl;
}
