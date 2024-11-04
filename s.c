#include<stdio.h>
#include<stdlib.h>

void lengthConversion();
void weightConversion();

int main()
{

int choice;

do{
printf("___Unit Converter___\n");
printf("1.Length Conersion\n");
printf("2.Weight Conversion\n");
printf("3.Exit the Program\n");
printf("\nEnter Your Choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
lengthConversion();
break;

case 2:
weightConversion();
break;

case 3:
printf("Exit the program.\n");

default:
printf("Invalid choice.Please try again");
}
}
while(choice!=3);

return 0;
}

void lengthConversion()
{
int option;
double value,result;
do{
printf("\n____Length Conversion___\n");
printf("1.Meters to Kilometers\n");
printf("2.Kilometers to Meters\n");
printf("3.Miles to Kilometers\n");
printf("4.Kilometers to Miles\n");
printf("5.Back to Menu\n");
printf("°°°°°°°°\nEnter Your Choice:");
scanf("%d",&option);

switch(option)
{
case 1:
printf("\nEnter Value in Meter:");
scanf("%lf",&value);
result=value/1000;
printf("\n🔹%.2lf Meter=%.2lf KiloMeters🔹\n",value,result);
printf("\n Conversion Success🙂\n");
break;

case 2:
printf("\nEnter Value in Kilometers:");
scanf("%lf", &value);
result =value *1000;
printf("\n🔹%.2lf Kilometers=%.2lf Meters🔹\n", value, result );
printf("\n Conversion Success🙂\n");
break;

case 3:
printf("\nEnter Value in Miles:");
scanf("%lf", &value);
result =value *1.60934;
printf("\n🔹%.2lf Miles=%.2lf Kilometers🔹\n", value, result );
printf("\n Conversion Success🙂\n");
break;

case 4:
printf("\nEnter Value in Kilometers:");
scanf("%lf", &value);
result =value /1.60934;
printf("\n🔹%.2lf Kilometers=%.2lf Miles🔹\n", value, result );
printf("\n Conversion Success🙂\n");
break;

case 5:
return;

default :
printf("\nInvalid. Plz try again😔\n");
}
}
while(option!=5);
}

void weightConversion()
{
int option;
double value,result;

do
{
printf("\n____Weight Conversion___\n");
printf("1.Grams to Kilograms\n");
printf("2.Kilograms to Grams\n");
printf("3.Pounds to Kilograms\n");
printf("4.Kilograms to Pounds\n");
printf("5.Back to Main Menu\n");
printf("•••••••\nEnter Your Choice:");
scanf("%d",&option);

switch(option)
{
case 1:
printf("\nEnter a Value in Grams:");
scanf("%lf", &value);
result =value /1000;
printf("\n▫️%.2lf Grams=%.2lf Kilograms▫️\n", value, result);
printf("\n Conversion Success🙂\n");
break;

case 2:
printf("\nEnter a Value in Kilograms:");
scanf("%lf", &value);
result =value *1000;
printf("\n▫️%.2lf Kilograms=%.2lf Grams▫️\n", value, result);
printf("\n Conversion Success🙂\n");
break;

case 3:
printf("\nEnter a Value in Pounds:");
scanf("%lf", &value);
result =value * 0.453592;
printf("\n▫️%.2lf Pounds=%.2lf Kilograms▫️\n", value, result);
printf("\n Conversion Success🙂\n");
break;

case 4:
printf("\nEnter a Value in Kilograms:");
scanf("%lf", &value);
result =value / 0.453592;
printf("\n▫️%.2lf Kilograms=%.2lf Pounds▫️\n", value, result);
printf("\n Conversion Success🙂\n");
break;

case 5:
return;

default:
printf("\nInvalid. Plz try again😔\n");
}
}
while(option!=5);
}
	

