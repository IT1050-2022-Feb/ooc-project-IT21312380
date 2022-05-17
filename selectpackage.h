#pragma once 
#include<iostream> 
#include<cstring> 
#include "Registerd_User.h"
#include "Package.h" 
using namespace std;

//creating Association  class 
class selectpackage
{
private:
    Package* pkg;
    Registered_User* reg;
    string reserveDate;
public:
    //default constructor for set default values 
    selectpackage()
    {
        reserveDate = "00/00/0000";
    }

    //function to set details 
    void setDetails(string preserveDate)
    {
        reserveDate = preserveDate;
    }

    //validating package selection 
    void diplayValidation()
    {
        if (pkg->getPackageType() == "")
        {
            cout << "invalid package!, try again" << endl;

        }
        else
        {
            cout << "successfull selection" << endl;
        }
    }

    //destructor for delete details of select packages 
    ~selectpackage()
    {
        cout << "deleting select package details" << endl;

    }


};

