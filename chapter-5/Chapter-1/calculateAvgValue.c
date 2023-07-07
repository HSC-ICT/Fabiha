#include <stdio.h>

	 int main()

		{

			double num1, num2, num3, num4, num5, sum, avg;

			

			printf("Enter any five integers: ");

			scanf( "%lf%lf%lf%lf%lf", &num1 ,&num2 ,&num3 , &num4 , &num5) ;

			

    sum= num1+ num2+ num3+ num4+	num5 ;

			avg= sum/5;

			printf( "the avg of five numbers is =	%.2lf\n" ,avg) ;

	

		

			return 0 ;

}
