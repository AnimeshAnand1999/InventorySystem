output:buy.o main.o manufacture.o profitofall.o ReadFromFile.o updateCostPrice.o writeInFile.o
	g++ main.o buy.o manufacture.o profitofall.o ReadFromFile.o updateCostPrice.o writeInFile.o -o output

main.o:main.cpp 
	g++ -c main.cpp

buy.o:buy.cpp header.h
	g++ -c buy.cpp

manufacture.o: manufacture.cpp header.h
	g++ -c manufacture.cpp

profitofall.o:profitofall.cpp header.h
	g++ -c profitofall.cpp

ReadFromFile.o: ReadFromFile.cpp header.h
	g++ -c ReadFromFile.cpp

updateCostPrice.o: updateCostPrice.cpp header.h
	g++ -c updateCostPrice.cpp

writeInFile.o:writeInFile.cpp header.h
	g++ -c writeInFile.cpp

clean:
	rm *.o output