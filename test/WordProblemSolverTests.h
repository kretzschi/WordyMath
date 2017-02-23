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

struct SubtractionTests {
	void testSingleSubtraction();
	void testSingleSubtractionWithNegativeNumbers();
	void testSingleSubtractionOfLargeNumbers();
	void testMultipleSubtractions();
};

struct MultiplicationTests {
	void testSingleMultiplication();
	void testSingleMultiplicationWithNegativeNumbers();
	void testSingleMultiplicationOfLargeNumbers();
	void testMultipleMultiplications();
};

struct DivisionTests {
	void testSingleDivision();
	void testSingleDivisionWithNegativeNumbers();
	void testSingleDivisionOfLargeNumbers();
	void testMultipleDivisions();
};

struct CrossTests {
	void testAdditionThenSubtraction();
	void testSubtractionThenAddition();
	void testAdditionThenMultiplication();
};

#endif /* TEST_WORDPROBLEMSOLVERTESTS_H_ */
