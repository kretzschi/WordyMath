/*
 * Helper.cpp
 *
 *  Created on: 14.02.2017
 *      Author: ksa
 */

#include "Helper.h"

#include <iostream>

char * Helper::str2cstr(std::string str) {
	// create a new C-string (null-terminated sequence of characters)
	// new char has length +1 because it terminates with null-character ('\0')
	char * cstring = new char[str.length() + 1] { };
	// copy c-string copy of std::string
	return strcpy(cstring, str.c_str());
}
