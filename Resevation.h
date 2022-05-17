#pragma once 
#include<iostream> 
#include "Payment.h" 
#include "Trip.h" 
#include "IT_Staff.h"
#include<cstring>
using namespace std;

//class creation of reservation
class Reservation
{
private:
    int tripNo;
    string pkgId;
    double amount;
    string date;
    ITStaff* It;
public:
    //seting default values to class 
    Reservation()
    {
        tripNo = 0;
        pkgId = "000";
        amount = 00.0;
        date = "00/00/0000";

    }
    //seting values by overloading constuctors 
    Reservation(string ppkgId, string pdate)
    {

        pkgId = ppkgId;
        date = pdate;

    }
    //did not overloade trip and amount because they are taken as references
    //setting amount 
    void setAmount(Payment* pay)
    {
        amount = pay->getAmount();
    }
    //setting trip  
    void setId(Trip* tr)
    {
        tripNo = tr->getTripId();

    }
    void diplayReservation()
    {

        cout << "======================" << endl;
        cout << "Trip number : " << tripNo << endl;
        cout << "Package ID : " << pkgId << endl;
        cout << "Amount : " << amount << endl;
        cout << "Date : " << date << endl;
        cout << "======================" << endl;
    }

    //destructor for delete reservation 
    ~Reservation()
    {
        cout << "deleting Reservation " << endl;
    }


};

