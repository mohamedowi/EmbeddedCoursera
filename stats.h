/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 *
 * Header File ProtoTypes
 *
 * <Add Extended Description Here>
 *
 * @author Mohamed Amr 
 * 
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void sort_array(unsigned char *arr,int size);
void print_array(unsigned char *arr,int size);
void print_statistics(unsigned char *arr,int size);
char find_median(unsigned char *arr,int size);
int find_mean(unsigned char *arr,int size);
char find_maximum(unsigned char *arr,int size);
char find_minimum(unsigned char *arr,int size);
#endif /* __STATS_H__ */
