/*
 * WordProblemSolver.cpp

 *
 *  Created on: 13.02.2017
 *      Author: Sascha Kretzschmann
 */
#include <cstring>
#include <cstdlib>
#include "WordProblemSolver.h"
#include "../src/util/Helper.h"

int WordProblemSolver::solve(std::string wordProblem) {
	std::vector<std::string> elements { };
	int result { };
	this->setWordProblem(wordProblem);
	elements = this->parseWordProblem(this->getWordProblem());
	for (std::vector<std::string>::size_type i=0; i != elements.size(); i++){
		int tmp = std::atoi(elements[i].c_str());
		result += tmp;
	}
	return result;
}

std::vector<std::string> WordProblemSolver::parseWordProblem(std::string wordProblem) {
	std::vector<std::string> elements { };
	// tokenize
	char * tokenPointer = std::strtok(Helper::str2cstr(wordProblem), " plus ? What i");
	while(tokenPointer != NULL) {
		elements.push_back(tokenPointer);
		tokenPointer = strtok(NULL, " plus ? What i");
	}
	return elements;
}
