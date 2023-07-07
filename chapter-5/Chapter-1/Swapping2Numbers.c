#include <stdio.h>

	 int main()

{

			int fariba, mithila, temp;

    printf("Fariba, enter your amount: ");

    scanf("%d", &fariba);

    

    printf("Mithila, enter your amount: ");

    scanf("%d", &mithila);

    

    printf("Fariba has %d tk & Mithila has %d tk\n", fariba, mithila); 

    

    temp = fariba;

    fariba = mithila;

    mithila = temp;

    

    printf("Fariba has %d tk & Mithila has %d tk", fariba, mithila); 

    

		

    return 0;

}
