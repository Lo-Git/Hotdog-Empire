hw03: main.o money.o hotdogstand.o non-member.o
	g++ -Wall -std=c++11 -o hw03 main.o money.o hotdogstand.o non-member.o

main.o: main.cpp
	g++ -Wall -std=c++11 -c main.cpp

money.o: money.cpp
	g++ -Wall -std=c++11 -c money.cpp

hotdogstand.o: hotdogstand.cpp
	g++ -Wall -std=c++11 -c hotdogstand.cpp

non-member.o: non-member.cpp
	g++ -Wall -std=c++11 -c non-member.cpp

clean:
	rm -f *.o core hw03
