flags = -std=c++17 -Wall -I .

pointerproblemfunctions.o : pointerproblemfunctions.cc pointerproblemfunctions.h
	g++ $(flags) -c $< -I .

testlengthparta : testlengthparta.cc length.o
	g++ $(flags) $^ -o $@
	./$@

testlengthpartb : testlengthpartb.cc length.o
	g++ $(flags) $^ -o $@
	./$@
test : pointerproblemdriver.cc pointerproblemfunctions.o
	g++ $(flags) $^ -o $@
	./$@
clean :
	rm *.txt *.o pointerproblemfunctions.h.gch test

