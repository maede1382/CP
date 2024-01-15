#include <iostream>

using namespace std ;

 main() {

int i , n , k ;

cout << " enter anumber please : " << "\n" ;
cin >> n ;

k=0 ;

for ( i=2 ; i<=n ; i++ ) {
	if ( n%i==0 ) {
		k+=i ;
	}
}
cout << " sum = " << k ;
}