/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <cstdlib>
#include <cstdbool>
#include "general.h"
#include <time.h>

void bubble_sort(int small_array[], int length)
{
  bool isSwapped = false;
  do {
    isSwapped = false;
    for (unsigned long i = 0; i < length-1; i++) {
      if (small_array[i+1] < small_array[i]) {
        int temp = small_array[i+1];
        small_array[i+1] = small_array[i];
        small_array[i] = temp;
        isSwapped = true;
      }
    }
  } while(isSwapped);
}
void insertion_sort(int small_array[], int length)
{
  int j = 0;
	for(int i = 1; i < length; i++)
	{
		j = i;
		while(j>0 && small_array[j - 1] > small_array[j]){
			int tmp = small_array[i];
			small_array[i] = small_array[i-1];
			small_array[i+1] = tmp;
			j--;
		}
	}

}
void init_random(int small_array[], int length)
{
  srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
		small_array[i] = random();
}
