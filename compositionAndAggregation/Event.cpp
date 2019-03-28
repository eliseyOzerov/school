/*
 * Event.cpp
 *
 *  Created on: Mar 24, 2019
 *      Author: ultron
 */


#include "Event.h"
#include "DateTime.h"
#include <iostream>
#include <string>

Event::Event(std::string name, std::string location,
		DateTime startTime, DateTime endTime):
		name(name), location(location),
		startTime(startTime), endTime(endTime){}

std::string Event::toString(){
	std::string res;

	res="Event:\n\nName: " + this->name + " Location: " + this->location +
			" \nStart: " + this->startTime.toString() + " End: " + this->endTime.toString();

	return res;
}
