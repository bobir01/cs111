//
// Created by bobir on 3/1/2022.
//
#include <string>
using namespace  std;

#ifndef TASK1_HUMAN_H
#define TASK1_HUMAN_H


class human {
public:
    human(int & left_hand, int & right_hand, string & first_name, string  & last_name, string & id_number );

    void setLeftHand(int & left_hand); //to set left hand by reference
    void setRightHand(int & right_hand);  // to set right hand by reference
    void setFirstName(string & first_name);  // to set first name  by reference
    void setLastName(string & last_name);  // to set last name  by reference
    void setIdNumber(string & id_number);    // to set id number by reference
    void display() const;  // print everything to console with definition

    int getLeftHand() const;   // to get left hand and block is constant
    int getRightHand() const;   // to get right hand  and block is constant
    string getFirstName() const; //   to get first name and block is constant
    string getLastName() const;    // to get last name and block is constant
    string getIdNumber() const;    // to get id number and block is constant





private:
    int left_hand;
    int right_hand;
    string first_name;
    string last_name;
    string id_number;



};


#endif //TASK1_HUMAN_H
