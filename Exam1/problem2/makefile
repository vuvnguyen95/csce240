# makefile for problem 2
#
#	$@ target
# $< first prerequisite
# $^ all prerequisites

flags = -std=c++17 -Wall -I .

problem2functions.o : problem2functions.cc problem2functions.h
	g++ $(flags) -c $<

testDistance : testDistance.cc problem2functions.o
	g++ $(flags) $^ -o $@
	./$@

testOnCircle : testOnCircle.cc problem2functions.o
	g++ $(flags) $^ -o $@
	./$@

testOnLine : testOnLine.cc problem2functions.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm problem2functions.o testDistance testOnCircle testOnLine

