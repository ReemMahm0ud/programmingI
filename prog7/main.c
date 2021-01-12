#include <stdio.h>
#include <stdlib.h>

 int count_numbers (int num);

int main () {
  int number=0, x=0;

  printf("Please enter an integer: ");
  scanf("%d", &number);
  x=count_numbers (number);
  printf("n%d consist of %d digits!", number, x);

  return 0;
}

int count_numbers ( int num) {

  int count =0;
  if (num == 0) count++;
  while (num !=0) {
    count++;
    num/=10;
  }
  return count;

}
