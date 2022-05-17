#pragma once 
#include <iostream> 
#include "Details.h" 
#include "Account.h" 
#include "Payment.h" 
#include "Feedback.h" 
#include <string> 

class Registered_User : public Details
{
private:
    string dob;
    string gender;
    string address;
    string comment;
    int fno;
    Account* acc;
Payment* pay; public:
    //setting default value 
    Registered_User()
    {
        dob = "00/00/0000";
        gender = "ggggg";
        address = "abc";
        comment = "xxxx";
        fno = 0;
        acc = new Account();
        pay = new Payment();

    }

    //set valuesby overloading constuctor 
    Registered_User(string pname, int pregisterNo, string pemail, string pdob, string pgender, string paddress, string pcomment)
    {
        name = pname;
        registerNo = pregisterNo;
        email = pemail;
        dob = pdob;
        gender = pgender;
        address = paddress;
        comment = pcomment;
    }
    //displaying details 
    void displayDetails()
    {
        cout << "============================" << endl;
        cout << "Name : " << name << endl;
        cout << "Registered number : " << registerNo << endl;
        cout << "Email : " << email << endl;
        cout << "Date of Birth : " << dob << endl;
        cout << "Gender : " << gender << endl;
        cout << "Address : " << address << endl;
        cout << "============================" << endl;


    }
    //deconstructors 
    ~Registered_User()
    {
        cout << "deleting register user" << endl;

    }
    //give feedback 

    void giveFeedback(Feedback* fdb)
    {
        cout << "Enter feedback number (integer) : ";
        cin >> fno;
        fno = fdb->getFeedbackNo();

        cout << "Enter feedback : ";
        cin >> comment;
        comment = fdb->getFeedback();

    }


};

