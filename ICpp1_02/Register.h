/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Register.h
 * Author: sucha
 *
 * Created on 7. října 2019, 18:27
 */

#ifndef REGISTER_H
#define REGISTER_H
#include "Receipt.h"

class Register {
public:
    Register();
    virtual ~Register();
    Receipt& printReceipt(double price, double tax);
    Receipt& getReceipt(int index);
    double getPrice() const;
    double getPriceWTax() const;
private:
    static int counterId; //statický atribut na id účtenky
    Receipt * rec; //pole uctenek
    int numberOfPrintedReceipts; //pocet uctenek
};

#endif /* REGISTER_H */

