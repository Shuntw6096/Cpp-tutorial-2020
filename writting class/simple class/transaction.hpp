#include <string>

class Transaction
{
private:
    int amount;
    std::string type;
public:
    Transaction(int amt, std::string type);
    std::string Report();
};