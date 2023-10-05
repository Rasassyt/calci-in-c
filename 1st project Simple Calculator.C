/*SIMPLE CALCULATOR*/
#include<stdio.h>
int main()
{/*DECLARE THE REQUIRMENTS*/
char operators;
float num1,num2,result;
/*INPUT MEDIUMS */
printf("choose the required operator \n+ for Addition\n- for Substraction \n * for Multiplication \n / pr Division");
scanf("%c",&operators);
printf("\aEnter the value of num1=");
scanf("%f",&num1);
printf("\aEnter the value of num2=");
scanf("%f",&num2);
/*applying switch*/
switch(operators)
{
	case'+': result=num1+num2;
	break;
	case'-': result=num1-num2;
	break;
	case'*': result=num1*num2;
	break;
	case'/': result=num1/num2;
	break;
	default: printf("Invalid Operator\n");
}
printf("The value=%f",result);
return 0;
}
