#include <stdio.h>





int main(void){

	int newValue;
        long long number = 612852475143;
        int i;

        for (i = 2; i <
         number ; i++)
        {
            if(number % i == 0 )
            {
                number  = number / i;
		newValue = i;
            }
        }
        printf("%d\n", newValue);

        return 0;

}
