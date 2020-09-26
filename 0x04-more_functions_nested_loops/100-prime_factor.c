#include <stdio.h>
#include <stdint.h>




int main(void){

	int newValue;
        long int number = 612852475143;
        int i;

        for (i = 2; i <=
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
