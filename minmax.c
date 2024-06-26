/* Andre Johnson,
Week 2 Assignment: minmax.c
CS 111*/
#include <stdio.h>

int numberRange()//Amaetur Variant the 'better' one will be below this
{
  float a;
  float b;
  float c;
  printf(" Enter 3 Numbers: \n ");
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  if (a >= b && a >= c ){
    printf(" Largest: %f \n " , a );
  }
  if (b >= a && b >= c){
    printf(" Largest: %f \n " , b );
  }
  if (c >= b && c >= a){
    printf(" Largest: %f \n " , c );
  }
   if (a <= b && a <= c){
    printf(" Smallest: %f \n " , a );
  }
  if (b <= a && b <= c){
    printf(" Smallest: %f \n " , b );
  }
  if (c <= b && c <= a ){
    printf(" Smallest: %f \n " , c );
  }
  return 0;
}

int numberRangeV2()//Improved Variant
{
  float a;
  float b;
  float c;
  printf(" Enter 3 Numbers: \n ");
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  if (a > b && a > c ){
    printf(" Biggest:%f ", a); 
  }  
  else if (a < b && a < c) {
    printf(" Smallest:%f ", a);

  }
  else {
  }
  if (b > a && b > c){
    printf(" Biggest:%f ", b);
  }
  else if (b < a && b < c) {
    printf(" Smallest:%f ", b);
  }
  else{
  }
  if (c > a && c > b){
    printf(" Biggest:%f ", c);
  }
  else if (c < a && c < b){
    printf(" Smallest:%f ", c);
  }
  else{
  }
  return 0;
}