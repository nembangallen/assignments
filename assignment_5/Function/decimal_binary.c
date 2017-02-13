#include <stdio.h>
long decimalToBinary(int decimal){

}
void main()
{	
	long decimal;

}

	/* local variables declaration */
	int i, j, binary[20], decimal, remainder;   

	/*
	* Read the value of decimal.
	*/
	printf("Enter the number to convert: ");  
	scanf("%d",&decimal);  

	/* for loop execution */
	for(i=0;decimal>0;i++)  
	{  	
		remainder=decimal%2;
		binary[i]=remainder;  
		decimal=decimal/2;  
	}  
	printf("Binary of Given Number is=");  
	for(j=i-1;j>=0;j--)  
	{  
		printf("%d",binary[j]);  
	}  

	printf("\n");