/*
// Compute sum of consecutive integers from 1 to N (inclusve)
// git will trach everything else!

#include <stdio.h>

long cumulative_sum(int N);

int main(int argc, char *argv[])
{
  int N;
  long result;

  // Ask for a number
  printf("Enter a number:\n");
  scanf("%d", &N);

  // Compute sum of consecutive integers from 1 to that number (inclusive)
  result = cumulative_sum(N);

  // Display result
  printf("The sum from 1 to %d is %ld\n", N, result);

  return 0;
 }
 */
long cumulative_sum(int N)
{
	//long result = N * (N + 1) / 2; // Whoops!
	// return result;
	return (long) N * (N + 1) / 2;
}
