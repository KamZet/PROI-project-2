/*
 * Child.hpp
 *
 * Class Deriviated from Customer representing the theater client
 * ^DECLARATION
 *
 * PROI, Lab project 3: 'Theater'
 * Tutor: dr inz. Wiktor Kusmirek
 * Przemysław Stawczyk
 */
#include "Customer.hpp"

#ifndef _CHILD_HPP_
#define _CHILD_HPP_

class Child:public Customer
{
 private:
   static const SEX sex = KID;
 public:
   virtual uint Rate(Show *show_r);
   Child();
   // two argument constructor ??
   Child(std::string, std::string, uint);
   ~Child();
};

#endif //_CHILD_HPP_
