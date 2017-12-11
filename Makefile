all:index

index: rps.hs
	ghc -o rps_haskell rps.hs
	g++ rps.cpp -o rps_cpp

clean: 
	rm *.hi *.o rps_haskell rps_cpp 
