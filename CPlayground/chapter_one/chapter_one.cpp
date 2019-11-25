//
//  main.cpp
//  CPlayground
//
//  Created by Rui Almeida on 23/11/2019.
//  Copyright © 2019 Rui Almeida. All rights reserved.
//

#include <iostream> //IO (std::cout)
#include <array>
#include <vector>
#include <map>
#include <string>
#include <memory>

#include "header_example_one.h"

/**
 Prints an array list to the console.
 */
void print_array(std::array<int, 10> arrayList) {
    for (int i = 0; i < arrayList.size(); i++) {
        std::cout << arrayList[i];
        if (i + 1 < 10) {
            std::cout << ",";
        }
    }
}

/**
 Prints a vector to the console.
 */
void print_vector(std::vector<int> vectorList) {
    short int size = vectorList.size();
    
    
    if (size == 0) {
        std::cout << "No data." << std::endl;
        return;
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << vectorList[i];
        if (i + 1 < size) {
            std::cout << ",";
        }
    }
    
}


/**
 Prints a map to the console. Key: key Value: value
 */
void print_map(std::map<int, char> map) {
    std::map<int, char>::iterator iterator;
    
    for (iterator = map.begin(); iterator != map.end(); ++iterator) {
       std::cout << "Key: " << iterator->first << " Value: " << iterator->second << '\n';
    }
    
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    
    
    /**
    =======================================
     CHAPTER 1 - PRIMITIVE DATA TYPES
     =======================================
     */
    
    //These prints below demonstrate the amount of bytes a type of variable takes in the memory.
    
    short int signed_short = 0;
    int signed_integer = 0;
    long int signed_long_int = 0;
    long long int signed_long_long_int = 0;
    char signed_char = 0;
    float signed_float = 0;
    double signed_double = 0;
    long double signed_long_double = 0;
    
    unsigned short int unsigned_short = 0;
    unsigned int unsigned_integer = 0;
    unsigned long int unsigned_long_int = 0;
    unsigned long long int unsigned_long_long_int = 0;
    unsigned char unsigned_char = 0;
    //unsigned float uf = 0; - you cannot define signed or usigned for floats and doubles.
    //unsigned double ud = 0; - you cannot define signed or usigned for floats and doubles.
    //unsigned long double ulb = 0; - you cannot define signed or usigned for floats and doubles.
    
    std::cout << "Size of signed short: " << sizeof(signed_short) << " bytes." << std::endl;
    std::cout << "Size of signed signed integer: " << sizeof(signed_integer) << " bytes." << std::endl;
    std::cout << "Size of signed signed long integer: " << sizeof(signed_long_int) << " bytes." << std::endl;
    std::cout << "Size of signed signed long long integer: " << sizeof(signed_long_long_int) << " bytes." << std::endl;
    std::cout << "Size of signed signed char: " << sizeof(signed_char) << " bytes." << std::endl;
    std::cout << "Size of signed signed_float: " << sizeof(signed_float) << " bytes." << std::endl;
    std::cout << "Size of signed signed_double: " << sizeof(signed_double) << " bytes." << std::endl;
    std::cout << "Size of signed signed_long_double: " << sizeof(signed_long_double) << " bytes." << std::endl;
    
    std::cout << "Size of unsigned short: " << sizeof(unsigned_short) << " bytes." << std::endl;
    std::cout << "Size of unsigned integer: " << sizeof(unsigned_integer) << " bytes." << std::endl;
    std::cout << "Size of unsigned long integer: " << sizeof(unsigned_long_int) << " bytes." << std::endl;
    std::cout << "Size of unsigned long long integer: " << sizeof(unsigned_long_long_int) << " bytes." << std::endl;
    std::cout << "Size of unsigned char: " << sizeof(unsigned_char) << " bytes." << std::endl;
    
    
    std::cout << std::endl; //Line break
    
    /**
    ===================================================
     CHAPTER 1 - PRIMITIVE DATA TYPES - OVERFLOW
     ===================================================
     */
    
    //This will overflow. Which means it will restart the value to -2^31. (Signed)
    int signed_x = 2147483647 + 1;
    std::cout << "Signed X is: " << signed_x << std::endl;
    
    //This will overflow, Which means the value will restart to 0. (Unsigned)
    unsigned int unsigned_x = 4294967295 + 1;
    std::cout << "Unsigned X is: " << unsigned_x << std::endl;
    
    std::cout << std::endl; //Line break
    
    /**
    ===================================================
     CHAPTER 1 - USER DEFINED DATA TYPES
     ===================================================
     */
    
    //Enum - when we want to represent a finite range of options. For example, the available colors of an item.
    enum COLOR { RED, GREEN, BLUE, BLACK, WHITE};
    
    COLOR red = COLOR::RED;
    
    switch(red) {
        case COLOR::RED:
            std::cout << "The color is red." << std::endl;
            break;
            
        case COLOR::GREEN:
            std::cout << "The color is green." << std::endl;
            break;
            
        case COLOR::BLUE:
            std::cout << "The color is blue." << std::endl;
            break;
            
        default:
            std::cout << "The color could not be found." << std::endl;
            break;
    }
    
    //Struct - When we want to organize multiple parameters of a type under one variable. e.g a Car.
    struct Car {
        short int number_of_wheels;
        short int engine_size;
        std::string name;
    };
    
    Car toyota_corolla;
    
    toyota_corolla.engine_size = 1200;
    toyota_corolla.number_of_wheels = 4;
    toyota_corolla.name = "Toyota Corolla Hatchback";
    
    std::cout << "Car name: " << toyota_corolla.name << " Engine size: " << toyota_corolla.engine_size << " Number of wheels: " << toyota_corolla.number_of_wheels << std::endl;
    
    
    /**
    ===================================================
     CHAPTER 1 - HEADER FILES.
     ===================================================
     */
    
    //Chapter 1 - Header files.
    header_example_one headerExample; //Construct our new object.
    
    headerExample.do_something(); //Call the do_something method.
    std::cout << "X Public variable is: " << headerExample.x_public << std::endl; //This will work nicely - it's a public variable.

    // headerExample.do_something_in_private() //This will throw an error. Why? Because it's a private method, we can't access it outside our class.
    //std::cout << headerExample.x_private << std::endl; //This will blow up, it's not a public variable.
    
    std::cout << std::endl;
    
    /**
    ===================================================
     CHAPTER 1 - Standard Library Utilities
     ===================================================
     */
    
    //ARRAYS - Use this when you know the size of the array beforehand.
    //It's possible to define an array in two ways.
    //Using the standard library as defined below:
    std::array<int, 10> std_array_of_int = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //Use this when you know the size of the array beforehand.
    print_array(std_array_of_int)
    
    //Or by using the language default:
    int array_of_int[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    std::cout << std::endl;
    
    //VECTORS - Use this when you don't know the size an need to use a list.
    std::vector<int> first_vector;                                // empty vector of ints
    std::vector<int> second_vector (8,200);                       // four ints with value 100
    std::vector<int> fourth_vector (second_vector);               // a copy of the second vector
    
    first_vector.push_back(50);
    first_vector.push_back(20);
    first_vector.push_back(30);
    first_vector.push_back(20);
    
    print_vector(first_vector);
    print_vector(second_vector); std::cout << std::endl;
    print_vector(fourth_vector); std::cout << std::endl;
    
    //MAP - Use this when you want to store items based on a key. Better performance than lists due to search being faster.
    //This searches in O(1) where was list searches in O(n).
    std::map<int, char> map;
    
    map.insert(std::pair<int, char>(1, 'a'));
    map.insert(std::pair<int, char>(2, 'c'));
    map.insert(std::pair<int, char>(3, 'd'));
    map.insert(std::pair<int, char>(4, 'e'));
    
    print_map(map);
    
    std::cout << "Value at key 1: " << map.at(1) << std::endl;
    std::cout << "Value at key 2: " << map.at(2) << std::endl;
    std::cout << "Value at key 3: " << map.at(3) << std::endl;
    std::cout << "Value at key 4: " << map.at(4) << std::endl;
    std::cout << std::endl;

    /**
    ===================================================
     CHAPTER 1 - Header Files
     ===================================================
     */
    
    header_example_one test_header; //Construct the header object.
    
    test_header.do_something(); //This is a public function so we have access to it.
    test_header.x_public; //This is also a public variable defined in the header so we can access it.
    
    //test_header.do_something_in_private(); //These are private functions, so they will give an error at compile time. We can't access them outside the .cpp or .hpp files.
    //test_header.x_private; //These are private variables, so they will give an error at compile time. We can't access them outside the .cpp or .hpp files.
    
    
    //Write a c++ program to find the largest element in an array or vector in any .cpp file.
    //Write a c++ program to find the three largest elements in an array or vector in any .cpp file.
    //Write a c++ program to find the second largest elements in an array or vector in any .cpp file.
    
    //Write a c++ program that converts between Kelvin, Fahrenheit and Celsius and prints them to the console.
    //Optimize this code to a maximum, using only the necessary storage to store the values.
    //Split your answer program into three files:
    //  (i)   A main program file;
    //  (ii)  A header file called conversions.h;
    //  (iii) An implementation file for these two functions;
    //Then test your program against multiple inpits.
    //After, create an header file called statistic.h that contains the function average(). We should call this function
    //to calculate the average of a temperature given a list of values.

    
    return 0;
}


