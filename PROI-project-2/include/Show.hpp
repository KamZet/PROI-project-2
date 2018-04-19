/*
 * Show.hpp
 *
 * Class Show representing the theater performance
 * ^DECLARATION
 *
 * PROI, Lab project 2: 'Theater'
 * Tutor: dr inz. Wiktor Kusmirek
 * Version 06.04.18, Kamil Zacharczuk
 * PROI, Lab project 3: 'Theater'
 * Tutor: dr inz. Wiktor Kusmirek
 * Przemysław Stawczyk
 */
#ifndef _SHOW_HPP_
#define _SHOW_HPP_

#include <string>
#include "../include/Customer.hpp"
#include "../include/Queue.hpp"

class Show
{
  public:
		typedef enum { //Type of the performance
	     DRAMA, COMEDY, MUSICAL, OPERA, PANTOMIME} SHOW_TYPE;

		typedef enum {
		    TITLE, TYPE, MIN_AGE, DATE, HOUR, SEATS_LIMIT, SEATS_TAKEN} SHOW_INFO;

	private:
		std::string title;

		SHOW_TYPE type;
		uint min_age;

		//Time of the show
		uint date[3];
		double hour;

		uint seats_limit;
		uint seats_taken;

		Queue<Customer> audience;
	public:
		/*Constructors & destructor*/
		Show(std::string, int, uint, uint, uint, uint, double, uint);
		~Show();

		void displayInfo (SHOW_INFO) const; // for compatibility - to delete
		void displayInfo() const; // for compatibility - to delete
		std::iostream getInfo(SHOW_INFO) const;
    std::iostream getInfo() const;
		bool displayAudience(); // for compatibility - to delete
    std::iostream getAudience(); 

		//Subscribing and unsubscribing an audience member
		bool newBuyer(Customer&);
		bool delBuyer(Customer&);

		//Finding a particular client in the audience queue
		Customer* getAudienceMember (int);
};

#endif //_SHOW_HPP_
