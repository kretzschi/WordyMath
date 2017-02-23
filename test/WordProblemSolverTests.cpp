/*
 * AdditionTest.cpp
 *
 *  Created on: 13.02.2017
 *      Author: ksa
 */

#include "WordProblemSolverTests.h"

#include "../src/WordProblemSolver.h"

WordProblemSolver solver { };

void AdditionTests::testSingleAddition1() {
	ASSERT_EQUAL(2, solver.solve("What is 1 plus 1?"));
}

void AdditionTests::testSingleAddition2() {
	ASSERT_EQUAL(54, solver.solve("What is 52 plus 2?"));
}

void AdditionTests::testSingleAdditionWithNegativeNumbers() {
	ASSERT_EQUAL(-11, solver.solve("What is -1 plus -10?"));
}

void AdditionTests::testSingleAdditionOfLargeNumbers() {
	ASSERT_EQUAL(45801, solver.solve("What is 123 plus 45678?"));
}

void AdditionTests::testMultipleAdditions() {
	ASSERT_EQUAL(3, solver.solve("What is 1 plus 1 plus 1?"));
}

void SubtractionTests::testSingleSubtraction() {
	ASSERT_EQUAL(16, solver.solve("What is 4 minus -12?"));
}

void SubtractionTests::testSingleSubtractionWithNegativeNumbers() {
	ASSERT_EQUAL(-16, solver.solve("What is -4 minus -12?"));
}

void SubtractionTests::testSingleSubtractionOfLargeNumbers() {
	ASSERT_EQUAL(-45555, solver.solve("What is 123 minus 45678?"));
}

void SubtractionTests::testMultipleSubtractions() {
	ASSERT_EQUAL(-1, solver.solve("What is 1 minus 1 minus 1?"));
}

void MultiplicationTests::testSingleMultiplication() {
	ASSERT_EQUAL(-75, solver.solve("What is -3 multiplied by 25?"));
}

void MultiplicationTests::testSingleMultiplicationWithNegativeNumbers() {
	ASSERT_EQUAL(75, solver.solve("What is -3 multiplied by -25?"));
}

void MultiplicationTests::testSingleMultiplicationOfLargeNumbers() {
	ASSERT_EQUAL(5618394, solver.solve("What is 123 multiplied by 45678?"));
}

void MultiplicationTests::testMultipleMultiplications() {
	ASSERT_EQUAL(-12, solver.solve("What is 2 multiplied by -2 multiplied by 3?"));
}

void DivisionTests::testSingleDivision() {
	ASSERT_EQUAL(-11, solver.solve("What is 33 divided by -3?"));
}

void DivisionTests::testSingleDivisionWithNegativeNumbers() {
	ASSERT_EQUAL(11, solver.solve("What is -33 divided by -3?"));
}

void DivisionTests::testSingleDivisionOfLargeNumbers() {
	ASSERT_EQUAL(4526, solver.solve("What is 67890 divided by 15?"));
}

void DivisionTests::testMultipleDivisions() {
	ASSERT_EQUAL(2, solver.solve("What is -12 divided by 2 divided by -3?"));
}

void CrossTests::testAdditionThenSubtraction() {
	ASSERT_EQUAL(8, solver.solve("What is 1 plus 5 minus -2?"));
}

void CrossTests::testSubtractionThenAddition() {
	ASSERT_EQUAL(14, solver.solve("What is 17 minus 6 plus 3?"));
}

void CrossTests::testAdditionThenMultiplication() {
	ASSERT_EQUAL(-8, solver.solve("What is -3 plus 7 multiplied by -2?"));
}
