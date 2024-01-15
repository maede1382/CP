#include <iostream>

using namespace std ;

 main() {
 	
 	int i , j , t[10] , tmpnum , n ;
 	
 	cout << "enter 9 number \n " ;
 	
 	for ( i=0 ; i<9 ; i++ ) {
 		cout << ( 1+i ) << ":" ;
 		cin >> t[i] ;
	 }
	 
	 for ( j=0 ; j<9 ; j++ ) {
	 	for ( i=0 ; i<9-j ; i++ ) {
	 		if ( t[i] > t[i+1] ) {
	 			tmpnum = t[i] ;
	 			t[i] = t[i+1] ;
	 			t[i+1] = tmpnum ;
			 }
		 }
	 }
	 
	 cout << " \n soudi \n " ;
	 
	 for ( i=0 ; i<10 ; i++ ) {
	 	cout << ( 1+i ) << ":" << t[i] << "\n" ;
	 }
	 
	 cout << " enter a number \n " ;
	 cin >> t[0] ;
	 for ( j=0 ; j<9 ; j++ ) {
	 	for ( i=0 ; i<9-j ; i++ ) {
	 	
	 	if ( t[i] > t[i+1] ) {
	 		tmpnum = t[i] ;
	 		t[i] = t[i+1] ;
	 		t[i+1] = tmpnum ;
	 		
	 	}
	 	
		 }
	 }
	 
	 cout << " \n soudi \n " ;
	 
	 for ( i=0 ; i<10 ; i++ ) {
	 	cout << (1+i) << ":" << t[i] << "\n" ;
	 }
	 
	 
	 
	 
	 
	  

}