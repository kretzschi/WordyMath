/*
 * WordProblemSolver.h
 *
 *  Created on: 13.02.2017
 *      Author: ksa
 */

#ifndef SRC_WORDPROBLEMSOLVER_H_
#define SRC_WORDPROBLEMSOLVER_H_

#include <iostream>
#include <vector>

class WordProblemSolver {
public:
	WordProblemSolver() {
		std::cout << "WordProblemSolver instantiated" << std::endl;
	}
	int solve(std::string);

	std::string& getWordProblem() {
		return wordProblem;
	}

	void setWordProblem(std::string& wordProblem) {
		this->wordProblem = wordProblem;
	}

private:
	std::string wordProblem;
	std::vector<std::string> parseWordProblem(std::string);
};

#endif /* SRC_WORDPROBLEMSOLVER_H_ */
