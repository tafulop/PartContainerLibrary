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


