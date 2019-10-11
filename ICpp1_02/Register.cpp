/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Register.cpp
 * Author: sucha
 * 
 * Created on 7. října 2019, 18:27
 */

#include <stddef.h>
#include <stdexcept>

#include "Register.h"

#define DEFAULT_RECEIPTS_COUNTER_VALUE 1000
#define RECEIPT_COUNT 10

int Register::counterId=DEFAULT_RECEIPTS_COUNTER_VALUE;
Register::Register() {
    rec = new Receipt[RECEIPT_COUNT];
    this->numberOfPrintedReceipts=0;
}

Register::~Register() {
        delete[] rec;
}
Receipt& Register::printReceipt(double price, double tax){
    
    if(numberOfPrintedReceipts==RECEIPT_COUNT)
        throw std::overflow_error("Cash registeris full");
    
    rec[numberOfPrintedReceipts].setNumberReceipt(counterId+numberOfPrintedReceipts);
    rec[numberOfPrintedReceipts].setPrice(price);
    rec[numberOfPrintedReceipts].setTax(tax);
    ++numberOfPrintedReceipts;
    return *rec;
}
Receipt& Register::getReceipt(int index){
    int tempIndex, returnIndex=0;
    for(int i=0;i<numberOfPrintedReceipts;i++){
        tempIndex=rec[i].getNumberReceipt();
        if(index==tempIndex){
            returnIndex=i;
        }
    } 
    return rec[returnIndex];   
}
double Register::getPrice() const{
    int totalPrice=0;
    for(int i=0;i<numberOfPrintedReceipts;i++){
        totalPrice=totalPrice+rec[i].getPrice();
    } 
    return totalPrice;
}
double Register::getPriceWTax() const{
   int totalPrice, tempPrice=0;
    for(int i=0;i<numberOfPrintedReceipts;i++){
        tempPrice=rec[i].getPrice()*(1+rec[i].getTax());
        totalPrice=totalPrice+tempPrice;
    } 
    return totalPrice;   
}