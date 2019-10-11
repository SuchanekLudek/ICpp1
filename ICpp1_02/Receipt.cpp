/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Receipt.cpp
 * Author: sucha
 * 
 * Created on 7. října 2019, 18:25
 */

#include "Receipt.h"

void Receipt::setNumberReceipt(int number){
    this->numberReceipt=number;
}
void Receipt::setPrice(double price){
    this->price=price;
}
void Receipt::setTax(double tax){
    this->tax=tax;
}
int Receipt::getNumberReceipt() const{
    return this->numberReceipt;
}
double Receipt::getPrice() const{
    return this->price;
}
double Receipt::getTax() const{
    return this->tax;
}