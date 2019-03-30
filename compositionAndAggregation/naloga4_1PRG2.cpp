/*
 * naloga4_1PRG2.cpp
 *
 *  Created on: Mar 25, 2019
 *      Author: ultron
 */

#include "Calendar.h"
#include "Event.h"
#include <iostream>
#include <limits>

using namespace std;

int main(){

	Calendar* cal = new Calendar("Elisey");
	Event* event = new Event("Programiranje2", "F-104", DateTime(Date(25, 3, 2019), Time(7,0,0)),
			DateTime(Date(25,3,2019), Time(10,0,0)));
	cal->addEvent(event);

	cout << cal->toString();
	delete event;
	return 0;
}

