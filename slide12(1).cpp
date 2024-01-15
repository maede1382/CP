#include <iostream>

using namespace std ;

float power ( float base , float power ) {

	float result = base ;
	     for (int i=1 ; i<power ; i++ ) {
	     	result *= base ;
		 }
		 
		 return result ;	 
}

int fact ( int number ) {
	int result = 1 ;
	   if ( number > 1 ) {
	   	result = number * fact ( number-1 ) ;
	   }
	   
	   return result ;  
}
float sin ( float x ) {
	
	float result = x - ( power(x,3) / fact(3) ) ;
	result += ( power(x,5) / fact(5) ) ;
	result -= ( power(x,7) / fact(7) ) ;
	result -= ( power(x,9) / fact(9) ) ;
	
	return result ;
}

float cos( float x ) {
	
	float result = 1 - ( power(x,2) / fact(2) ) ;
	result += ( power(x,4) / fact(4) ) ;
	result -= ( power(x,6) / fact(6) ) ;
	result -= ( power(x,8) / fact(8) ) ;
	
	return result ;
}

float tan ( float x ) {
	
	float result = sin(x) / cos(x) ;
	
	return result ;
}

 main() {
 	int t ;
 	float x ;
 	
 	cout << " enter an angle : " << "\n" ;
	 cin >> t ;
	 x = (float) t*3.14 / 180 ;
	 cout << " tangent = " << tan(x) ; 



}