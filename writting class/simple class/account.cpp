#include "account.hpp"
//已經在hpp中include <vector>, <string>
using namespace std;

Account::Account():balance(0){}; //建構函式 初始化balance為0

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");
    for(auto t: log)
        report.push_back(t.Report());
    report.push_back("-----------------");
    return report;
}

bool Account::Deposit(int amt)
{
    if(amt >= 0)
    {
        balance += amt;
        log.push_back(Transaction(amt, "Deposit"));
        return true;
    }
    else
        return false;
}

bool Account::Withdraw(int amt)
{
    if(amt >= 0 && balance >= amt)
    {
        balance -= amt;
        log.push_back(Transaction(amt, "Withdraw"));
        return true;
    }
    return false;
}