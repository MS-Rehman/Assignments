#include<iostream>
using namespace std ;

main()

{
	float age1, age2, age3, age_all ;
	string student1, student2, student3, student_all ;
	
	cout<< " \t\t  MS Assignment # 5  " ;
	
	cout<< " \n Write 1st Student Name   : " ;
	cin>> student1 ;
	cout<< " Wite 1st Student Age     : " ;
	cin>> age1 ;
	cout<< " Write 2nd Student Name   : " ;
	cin>> student2 ;
	cout<< " Wite 2nd Student Age     : " ;
	cin>> age2 ;
	cout<< " Write 3rd Student Name   : " ;
	cin>> student3 ;
	cout<< " Wite 3rd Student Age     : " ;
	cin>> age3 ;
	
	cout<< " \t\t  ---Display--- " ;
	
	cout<< "\n Name : " <<student1  <<"			Age : " <<age1 ;     
	cout<< "\n Name : " <<student2  <<"			Age : " <<age2 ;     
	cout<< "\n Name : " <<student3  <<"			Age : " <<age3 ;    
	 	
	student_all = student1+student2+student3 ;
	age_all = age1+age2+age3 ;
	
	cout<< "\n Average age is : " <<age_all/3   ;     
	
	
}
