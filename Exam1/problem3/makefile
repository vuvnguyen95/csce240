# makefile for problem 3
#
#	$@ target
# $< first prerequisite
# $^ all prerequisites

flags = -std=c++17 -Wall -I .

problem3functions.o : problem3functions.cc problem3functions.h
	g++ $(flags) -c $<

testNumDigits : testNumDigits.cc problem3functions.o
	g++ $(flags) $^ -o $@
	./$@

testFindAndReplace : testFindAndReplace.cc problem3functions.o
	g++ $(flags) $^ -o $@
	./$@
	
problem3 : problem3.cc problem3functions.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm problem3functions.o testNumDigits testFindAndReplace

