#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Employee
{
    int id;
    int salary;
    bool gender = true;

public:
    void setId(int inpId)
    {
        id = inpId;
        cout << id << endl;
    }
    void setSalary(int inpSalary)
    {
        salary = inpSalary;
    }
};

class Manager : public Employee
{
    int pLanguages;
    int expLevel;

public:
    void set_PLanguages(int PLanguages_count)
    {
        pLanguages = PLanguages_count;
        cout << pLanguages << endl;
    }
    void setLevel(int level)
    {
        expLevel = level;
    }
};

class Developer : public Manager
{
    int expYear;
    int portfolio;

public:
    void set_portfolio(int inpPortfolio)
    {
        portfolio = inpPortfolio;
        cout << portfolio << endl;
    }
    void set_exp_year(int year)
    {
        expYear = year;
    }
};

int main()
{
    Developer rafi;
    rafi.setId(10353);
    rafi.set_exp_year(3);
    rafi.set_PLanguages(2);
    rafi.setLevel(1);
    rafi.setSalary(9000);
    rafi.set_portfolio(2);

    return 0;
}