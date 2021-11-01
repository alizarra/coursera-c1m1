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
 * @file <stats.h> 
 * @brief <Contains declaration functions for stats.c>
 *
 *
 * @author <Agustin Lizarraga>
 * @date <31-OCT-2021>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
   
   /* Add Your Declarations and Function Comments here */ 
   
   void print_array(char *array , int length );
   /**
    * @brief 
    * Prints an array of uint8_t characters
    * no computational operation is performed on the array
     *
    * @param <char *array>  <A global array of char elements>
    * @param <int length> <A total of 40 elements>
    * @return <no return value>
    */
   
   int cmpfunc (const void * a, const void * b);
   /**
    * @brief 
    * cmpfunc() - A helper function for qsort 
    *
    * @param <const void * a> <n element >
    * @param <const void * b> <n+1 element>
    * @return <for determining greater, less than or equality>
    */
   	
   void sort_array(char *array, int length);
   /**
    * @brief 
    * invokes qsort() 
    * Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
    *
    * @param <char *array> <The array to be sorted>
    * @param <int length> <The number of elements in the array>
    * @return <Nothing to be returned; the array is modified from greater to less values>
    */	
    
   double find_mean(char *array, int length);
   /**
    * @brief 
    * Given an array of data and a length, returns the mean
    * no need to sort in advance
    *
    * @param <char *array> <Array to work with>
    * @param <int length> <The number of elements in the array>
    * @return <mean value>
    */
    
   void print_array(char *array , int length );
   /**
    * @brief 
    * Given an array of data and a length, prints the array to the screen
    *
    * @param <char *array> <Array to work with>
    * @param <int length> <The number of elements in the array>
    * @return <no value is returned>
    */
    
   uint8_t find_maximum(char *array, int length);
   /**
    * @brief 
    * Given an array of data and a length, returns the maximum
    *
    * @param <char *array> <Array to work with>
    * @param <int length> <The number of elements in the array>
    * @return <maximum is returned>
    */
    
   uint8_t find_minimum(char *array, int length);
   /**
    * @brief 
    * Given an array of data and a length, returns the minimum
    *
    * @param <char *array> <Array to work with>
    * @param <int length> <The number of elements in the array>
    * @return <minimum is returned>
    */
    
   double find_median(char *array, int length);
   /**
    * @brief 
    * Given an array of data and a length, returns the median value
    * 
    *
    * @param <char *array> <Array to work with>
    * @param <int length> <The number of elements in the array>
    * @return <median is returned>
    */
    
   void print_statistics(char *array, int length);
   /**
    * @brief 
    * A function that prints the statistics of an array including minimum, maximum, mean, and median.
    *
    * @param <char *array> <Array to work with>
    * @param <int length> <The number of elements in the array>
    * @return <no value is returned>
    */	
   
#endif /* __STATS_H__ */

