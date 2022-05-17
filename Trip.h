#pragma once 
#include<iostream>
#include<string> 
using namespace std;

//creating inheritance class 
class Trip
{
protected:
    int tripId;
    string reserveDate;
public:
    //setting default valuesby default constructor 
    Trip()
    {
        tripId = 0;
        reserveDate = "00/00/0000";

    }
    //overloading constructor to set value 
    Trip(int ptripId, string preserveDate)
    {
        tripId = ptripId;
        reserveDate = preserveDate;

    }
    //display details 
    virtual void display()
    {
        cout << "========================" << endl;
        cout << "Trip Id : " << tripId << endl;
        cout << "Date : " << reserveDate << endl;
        cout << "========================" << endl;
    }
    //returning tripId 
    int getTripId()
    {
        return tripId;
    }

    //destructor to delete data  
    ~Trip()
    {
        cout << "deleting trip" << endl;

    }

};

