//
// Created by bobir on 3/1/2022.
//

#include "human.h"
#include <iostream>
using namespace  std;

human::human(int &left_hand, int &right_hand, string &first_name, string &last_name, string &id_number) {
    this-> left_hand=left_hand;
    this-> right_hand=right_hand;
    this-> first_name=first_name;
    this-> last_name=last_name;
    this-> id_number=id_number;
}

void human::setLeftHand(int &left_hand) {   // implementation of setLeftHand
    this -> left_hand=left_hand;
}
void human::setRightHand(int &right_hand) {
    this -> right_hand=right_hand;
}

void human::setFirstName(string &first_name) {
    this -> first_name=first_name;
}

void human::setLastName(string &last_name){
    this -> last_name=last_name;
}
void  human::setIdNumber(string &id_number) {
    this -> id_number=id_number;
}

int human::getRightHand() const {
    return right_hand;
}

int human::getLeftHand() const {
    return left_hand;
}

string human::getFirstName() const {
    return first_name;
}

string human::getLastName() const {
    return last_name;
}

string human::getIdNumber() const {
    return id_number;
}


void human::display() const{
    cout<< "Number of left hand: "<< getLeftHand() << endl<<
    "Number of right hand: "<< getRightHand() << endl <<
    "First name: " <<getFirstName() <<endl<<
    "Last name: " <<  getLastName() <<endl<<
    "Id number: " << getIdNumber() << endl;

}









