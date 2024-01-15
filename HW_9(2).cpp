#include <iostream>

using namespace std ;

 main() {

int T[10] ;
int i , j , fmin , smin ;

cout << " enter 10 number \n " ;

for ( i=0 ; i<10 ; i++ ) {
	cout << " num " << ( 1+i ) << ":" ;
	cin >> T[i] ;
	
}

fmin = T[0] ;
smin = T[0] ;
for ( i=0 ; i<10 ; i++ ) {
	if ( T[i] < fmin ) {
		smin = fmin ;
		fmin = T[i] ;
	}
}

cout << " the second smallest is : " << smin ;
}