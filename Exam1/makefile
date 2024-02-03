# makefile for problem 1
#
#	$@ target
# $< first prerequisite
# $^ all prerequisites

flags = -std=c++17 -Wall -I .

problem1.o : problem1.cc
	g++ $(flags) -c $<

problem1 : problem1.o
	g++ $(flags) $< -o $@

checkit : checkit.cc
	g++ $(flags) $^ -o $@

problem1test1 : checkit problem1 problem1-sample-input-1.txt
	./problem1 < problem1-sample-input-1.txt > problem1-student-output-1.txt
	./checkit 0

problem1test2 : checkit problem1 problem1-sample-input-2.txt
	./problem1 < problem1-sample-input-2.txt > problem1-student-output-2.txt
	./checkit 1

problem1test3 : checkit problem1 problem1-sample-input-3.txt
	./problem1 < problem1-sample-input-3.txt > problem1-student-output-3.txt
	./checkit 2

clean :
	rm *.o checkit problem1 problem1-student-output-*.txt

