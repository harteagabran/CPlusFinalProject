#ifndef BUDGETBALANCE_H
#define BUDGETBALANCE_H

class BudgetBalance
{
public:
    BudgetBalance(double initial);
    //used to add to budget
    void addToBudget(double amount);
    double getTotalExpenses();
    double getBalanceRemaining();
    void addExpense(double expense);
    void displayBudget();
private:
    double budget;
    double totalExpense;
    double remaining;
};

#endif // BUDGETBALANCE_H
