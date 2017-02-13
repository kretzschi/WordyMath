#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
// TODO: #include the headers for the code you want to test

#include "WordProblemSolverTests.h"

// replace this function with your test functions

void runAllTests(int argc, char const *argv[]){
	// create a test vector
	cute::suite s { };

	// add all addition test cases
	s.push_back(CUTE_SMEMFUN(AdditionTests, testSingleAddition1));
	s.push_back(CUTE_SMEMFUN(AdditionTests, testSingleAddition2));
	s.push_back(CUTE_SMEMFUN(AdditionTests, testSingleAdditionWithNegativeNumbers));
	s.push_back(CUTE_SMEMFUN(AdditionTests, testSingleAdditionOfLargeNumbers));
	s.push_back(CUTE_SMEMFUN(AdditionTests, testMultipleAdditions));

	// add more test cases here

	cute::xml_file_opener xmlfile(argc,argv);
	cute::xml_listener<cute::ide_listener<> >  lis(xmlfile.out);
	cute::makeRunner(lis,argc,argv)(s, "AllTests");
}

int main(int argc, char const *argv[]){
    runAllTests(argc,argv);
    return 0;
}



