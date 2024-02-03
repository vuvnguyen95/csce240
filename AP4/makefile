flags = -std=c++17 -Wall -I .

timeofday.o : timeofday.cc timeofday.h
	g++ $(flags) -c $< -I .

testtimeofday : testtimeofday.cc timeofday.o
	g++ $(flags) $^ -o $@

checkit : checkit.cc
	g++ $(flags) $^ -o $@

checktimeofday : testtimeofday checkit correct-testtimeofday.txt
	./testtimeofday  > student-testtimeofday.txt
	./checkit 0
testtod : testTOD.cc timeofday.o
	g++ $(flags) $^ -o $@
	./testtod

timeinterval.o : timeinterval.cc timeinterval.h timeofday.h
	g++ $(flags) -c $< -I .

testtimeinterval : testtimeinterval.cc timeinterval.o timeofday.o
	g++ $(flags) $^ -o $@

checktimeinterval : testtimeinterval checkit correct-testtimeinterval.txt
	./testtimeinterval  > student-testtimeinterval.txt
	./checkit 1
testt2 : timeinterval.o timeofday.o testt2.cc
	g++ $(flags) $^ -o $@
	./testt2
clean :
	rm student-test*txt *.o checkit testtimeofday testtimeinterval

