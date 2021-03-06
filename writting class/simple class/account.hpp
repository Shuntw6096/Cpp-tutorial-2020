#include <vector>
#include <string>
#include "transaction.hpp"

class Account
{
private:
    int balance;
    std::vector<Transaction> log;

public:
    Account();
    std::vector<std::string> Report();
    bool Deposit(int amt);
    bool Withdraw(int amt);
};