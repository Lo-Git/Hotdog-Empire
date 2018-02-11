hw03: main.o money.o hotdogstand.o non-member.o
	g++ -Wall -o hw03 main.o money.o hotdogstand.o non-member.o

main.o: main.cpp
	g++ -Wall -c main.cpp

money.o: money.cpp
	g++ -Wall -c money.cpp

hotdogstand.o: hotdogstand.cpp
	g++ -Wall -c hotdogstand.cpp

non-member.o: non-member.cpp
	g++ -Wall -c non-member.cpp

clean:
	rm -f core hw03
