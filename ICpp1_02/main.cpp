#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "Register.h"
using namespace std;
int main(int argc, char** argv) {
    //creation of register - part of the assignment
    Register * reg1=new Register;
    reg1->printReceipt(150.0, 0.21);
    reg1->printReceipt(100.0, 0.21);
    reg1->printReceipt(10.0, 0.21);
    
    //test data for maximum number of receipts
    /*
    reg1->printReceipt(150.0, 0.21);
    reg1->printReceipt(100.0, 0.21);
    reg1->printReceipt(10.0, 0.21); 
    reg1->printReceipt(150.0, 0.21);
    reg1->printReceipt(100.0, 0.21);
    reg1->printReceipt(10.0, 0.21);
    reg1->printReceipt(10.0, 0.21);*/
    //reg1->printReceipt(10.0, 0.21); Here is the crash, no console output
    
    //standard operation
    cout<< reg1->getPrice() << endl;
    cout<< reg1->getPriceWTax() << endl;
     
    //finding receipt with index number
    Receipt& rec1=reg1->getReceipt(1002);
    cout<<rec1.getPrice()<<endl;
    
    //manipulation of values with reference to receipt
    rec1.setPrice(30);
    
    //modified values printed
    cout<< reg1->getPrice() << endl;
    cout<< reg1->getPriceWTax() << endl;
    
    //calling destructor
    reg1->~Register(); //memory seems to be free
    
    return 0;
}

