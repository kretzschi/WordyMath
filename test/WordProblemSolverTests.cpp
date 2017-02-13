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
	ASSERT_EQUAL(55, solver.solve("What is 52 plus 2?"));
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
