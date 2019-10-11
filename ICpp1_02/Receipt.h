/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Receipt.h
 * Author: sucha
 *
 * Created on 7. října 2019, 18:25
 */

#ifndef RECEIPT_H
#define RECEIPT_H

class Receipt {
public:
    void setNumberReceipt(int number);
    void setPrice (double price);
    void setTax(double tax);
    int getNumberReceipt() const;
    double getPrice() const;
    double getTax() const;
private:
     int numberReceipt;
     double price;    
     double tax;
};

#endif /* RECEIPT_H */

