#include <iostream>
using namespace std;

void F_Mony_Management_Allocation_System()
{
    cout << "************************************************************************" << endl 
         << " Income Allocation System " << endl
         << " This program takes an amount from the user and automatically splits it " << endl
         << " into three categories: " << endl
         << " 1. Obligations  - fixed commitments (rent, bills, installments) " << endl
         << " 2. Investments  - savings and investments " << endl
         << " 3. Personal     - personal spending " << endl
         << " Goal: help organize income and manage money in a clear, structured way." << endl
         << "************************************************************************" << endl;
}

struct Mony_Management
{
    unsigned int The_Amount;
};

int F_Mony_Management_Wright(Mony_Management &Info_Wright)
{
    
    cout << "Enter Your Amount ? " << endl;
    cin >> Info_Wright.The_Amount;
    
    return Info_Wright.The_Amount;
}

int F_Mony_Management_System(Mony_Management Info_System)
{
    cout << " obligations : " << Info_System.The_Amount / 3 << endl
         << " investments : " << Info_System.The_Amount / 3 << endl
         << " personal : " << Info_System.The_Amount / 3 << endl;
         return Info_System.The_Amount;
}


int main()
{
    F_Mony_Management_Allocation_System();
    
    Mony_Management System_1;
    
    F_Mony_Management_Wright(System_1);
    F_Mony_Management_System(System_1);


    return 0;
}