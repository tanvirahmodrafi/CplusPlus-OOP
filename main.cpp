#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Employee //This is parent class
{
    //attributes.
    int id;
    int salary;
    bool gender = true;
public:
    //methods.
    
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

class Manager : public Employee //Child class from Employee
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

class Developer : public Employee //Child class from Employee
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
    Developer rahim;
    rahim.setSalary(10000);
    rahim.set_exp_year(2);
    rahim.set_portfolio(4);
    rahim.setId(10234);

    Manager rafi;
    rafi.set_PLanguages(9);
    rafi.setId(10356);
    rafi.setLevel(2);
    rafi.setSalary(20000);

    return 0;
}
