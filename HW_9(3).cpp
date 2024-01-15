#include <iostream>

using namespace std ;

 main() {

int F[10] ;

F[0] = 0 ;
F[1] = 1 ;

int i ;

for ( i=2 ; i<10 ; i++ ) {

F[i]=F[i-1]+F[i-2] ;
}
for ( i=0 ; i<10 ; i++ ) {
	
	cout << "f["<< i << "]=" << F[i] << "\n" ;
}
}