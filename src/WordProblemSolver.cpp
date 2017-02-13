/*
 * WordProblemSolver.cpp

 *
 *  Created on: 13.02.2017
 *      Author: Sascha Kretzschmann
 */
#include <cstring>
#include "WordProblemSolver.h"

int WordProblemSolver::solve(std::string wordProblem) {
	this->setWordProblem(wordProblem);
	this->parseWordProblem(this->getWordProblem());
	return 0;
}

std::vector<std::string> WordProblemSolver::parseWordProblem(std::string wordProblem) {
	// create a new C-string (null-terminated sequence of characters)
	// new char has length +1 because it terminates with null-character ('\0')
	char * cstring = new char[wordProblem.length() + 1] { };
	// copy c-string copy of std::string
	std::strcpy(cstring, wordProblem.c_str());
	// tokenize
	char * tokenPointer = std::strtok(cstring, " ");

	// call dtor of cstring
	delete[] cstring;
	std::vector<std::string> elements { };
	return elements;
}
