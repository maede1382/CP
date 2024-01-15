#include <iostream>

using namespace std ;

 main() {

int num [10] ;
int max , min , i , k ;

for ( i=0 ; i<10 ; i++ ) {
	cin >> num[i] ;
}

max = num [0] ;

for ( i=0 ; i<=10 ; i++ ) {
	if ( num[i] > max ) {
		max=num [i] ;
	}
}

min = num [0] ;

for ( i=0 ; i<=10 ; i++ ) {
	if (num[i] < min ) {
		min=num [i] ;
	}
}
   k=(max+min) / 2 ;
   
   cout << " the avrage of max and min is : " << "\n" << k ;
}