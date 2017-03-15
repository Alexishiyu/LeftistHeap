/*
 * Leftist_heap_double_driver.cpp
 *
 *  Created on: Mar 11, 2017
 *      Author: Shiyu
 */


/****************************************************
 * Executable:  Leftist_heap_driver
 * Author:  Douglas Wilhelm Harder
 * Copyright (c) 2006-14 by Douglas Wilhelm Harder.  All rights reserved.
 *
 * DO NOT EDIT THIS FILE
 *
 * Create an instance of the Leftist_heap_tester<int>
 * or Leftist_heap_tester<double> classes and call
 * the member function run().
 *
 * The member function run() will interpret the
 * input appropriately and exit when the interpreter
 * receives either the command 'exit' or and
 * end-of-file.
 ****************************************************/

#include <iostream>
#include <cstring>
#include "Leftist_heap_tester.h"

int main( int argc, char *argv[] ) {


	std::cout << "Starting Test Run" << std::endl;



		Leftist_heap_tester<double> tester;

		tester.run();


	std::cout << "Finishing Test Run" << std::endl;

	return 0;
}

