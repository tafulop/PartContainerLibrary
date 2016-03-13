/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   PartContainerTest.cpp
 * Author: fulop
 *
 * Created on Mar 6, 2016, 12:32:27 PM
 */

#include "PartContainerTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(PartContainerTest);

PartContainerTest::PartContainerTest() {
}

PartContainerTest::~PartContainerTest() {
}

void PartContainerTest::setUp() {
}

void PartContainerTest::tearDown() {
}


/* Checks if singleton pattern works */
void PartContainerTest::intTest() {
    
    PartContainer<int> i;
    
    i.add("test", 1);
 
    std::shared_ptr<int> test = i.get("test");
    
    CPPUNIT_ASSERT(*test == 1);

}

/* Put 2 items into the container with the same id */
void PartContainerTest::duplicatedIdSameContainer(){
    
    PartContainer<int> i;
    
    bool success = true;
    
    if(i.add("double_testId", 1) == false)success = false;
    if(i.add("double_testId", 2) == true) success = false;

    CPPUNIT_ASSERT(success == true);
}


 void PartContainerTest::duplicatedIdMultipleContainers(){
     
    PartContainer<int> i;
    PartContainer<int> i2;
     
    bool success = true;
     
    if(i.add("double_multi_testid", 1) == false) success = false;
    
    std::cout << "STEP 1: First testId registration: " << success << std::endl;
    
    
    if(i.add("double_multi_testid", 2) == true)success = false;
    
    std::cout << "STEP 2: Second testId registration: " << success << std::endl;
    
    CPPUNIT_ASSERT(success == true);
 }