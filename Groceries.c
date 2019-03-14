#include <stdio.h>

int main(void) {
  int weeks = 4; //the number of weeks in a month
  int CostGrocery; //the cost of the groceries in week
  int TotalCost = 0; //the cost of groceries in month
  int weekNumber = 1; //the week number
  for (int i = 0; i < weeks; i++){ //for loop
    printf("Enter the price of groceries spent in week %i: ",weekNumber); //prompting user for cost
    scanf("%i", &CostGrocery); //storing cost
    weekNumber++; //adding 1 to week number
    TotalCost += CostGrocery; //summing cost
  }
  printf("You spent $%i on groceries this month.", TotalCost);

  return 0;
}