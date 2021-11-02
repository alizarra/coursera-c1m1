/******************************************************************************
 * Copyright (C) 2017 by Agustin Lizarraga
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief 
 *    A simple application that performs statistical analytics on a dataset. 
 *    This assignment will help you get re-oriented with c-programming syntax and host machine compilation.
 *    URL: https://www.coursera.org/learn/introduction-embedded-systems/home/welcome
 *
 * main() - The main entry point for your program
 * print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * print_array() -  Given an array of data and a length, prints the array to the screen
 * find_median() - Given an array of data and a length, returns the median value
 * find_mean() -  Given an array of data and a length, returns the mean
 * find_maximum() -  Given an array of data and a length, returns the maximum
 * find_minimum() -  Given an array of data and a length, returns the minimum
 * sort_array() - Given an array of data and a length, sorts the array from largest to smallest.  
 *   (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @author <Agustin Lizarraga>
 * @date <OCT 31,2021>
 *
 */
 /**
  * Auxiliary functions:
  *   cmpfunc() - A helper function for qsort
  *
  *   void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
  *   Sorts an array.
  *   URL: https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
  *
  *   
  */


#include <stdio.h>
#include "stats.h"
#include<stdlib.h>

/* Size of the Data Set */
#define SIZE (40)
typedef unsigned char                uint8_t;


	
void main() {

  uint8_t test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                        114, 88,   45,  76, 123,  87,  25,  23,
                        200, 122, 150, 90,   92,  87, 177, 244,
                        201,   6,  12,  60,   8,   2,   5,  67,
                          7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

print_array(test , SIZE);
printf("\n");

sort_array(test,SIZE);
print_array(test,SIZE);
printf("\n");

print_statistics(test,SIZE);



}

/* Add other Implementation File Code Here */

int cmpfunc (const void * a, const void * b) {
   return ( *(uint8_t*)b - *(uint8_t*)a );
}

void sort_array(char *array, int length) {
     qsort(array,length,sizeof(char),cmpfunc);	  
}

double find_mean(char *array, int length) {
	double mean = 0;
		for ( int i=0; i < length ;  ) {
			mean += (uint8_t) array[i++] ; 
		}
		return mean/length;
}

void print_array(char *array , int length ) {
	for ( int i=0; i < length ;  ) {
		for ( int j=0 ; j < 5 ; j++ ) {
			for ( int k=0 ; k < 8 ; k ++ ) {
			  printf("[%2u] %3u\t", i, array[i] & 0xff );
			  i++;
			}
			printf("\n");
		}
    }	

}

uint8_t find_maximum(char *array, int length) {
	sort_array(array,length);
	return array[0];
}

uint8_t find_minimum(char *array, int length) {
	sort_array(array,length);
	return array[length-1];
}

double find_median(char *array, int length) {
	sort_array(array,length);
	if ( length % 2 ) {// odd number of elements
		return array[ (uint8_t)length/2 + 1 ] ; 
    } 
	else  {// even number of elements
		return  (double) ( array[(uint8_t)length/2 - 1]  + array[(uint8_t)length/2] ) / 2 ;
	}
}

// A function that prints the statistics of an array including minimum, maximum, mean, and median.
void print_statistics(char *array, int length) {
     
     printf("%f Arithmetic Mean\n",find_mean(array,length));
     printf("%.0u Maximum Value in Array\n ",find_maximum(array, length));    
     printf("%u Minimum Value in Array\n",find_minimum(array, length));    
     printf("%f Median Value in Array\n",find_median(array, length));    
	 
     }

