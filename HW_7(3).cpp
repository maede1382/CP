#include <iostream>

using namespace std ;

 main() {

int n , i , k ;

cout << " plaese enter your number " << "\n" ;

cin >> n ;

k=0 ;

for ( i=1 ; i<=n ; i++ ) {
	if ( n%i==0 ){
		k+=i ;
	}
	     
}

cout << "the answer is : " << "\n" << k ;
}