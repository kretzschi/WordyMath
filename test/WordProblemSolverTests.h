/*
 * AdditionTests.h
 *
 *  Created on: 13.02.2017
 *      Author: ksa
 */

#ifndef TEST_WORDPROBLEMSOLVERTESTS_H_
#define TEST_WORDPROBLEMSOLVERTESTS_H_

#include "cute.h"

struct AdditionTests {
	void testSingleAddition1();
	void testSingleAddition2();
	void testSingleAdditionWithNegativeNumbers();
	void testSingleAdditionOfLargeNumbers();
	void testMultipleAdditions();
};

struct CrossTests {
};

#endif /* TEST_WORDPROBLEMSOLVERTESTS_H_ */
