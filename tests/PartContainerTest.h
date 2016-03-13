/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   PartContainerTest.h
 * Author: fulop
 *
 * Created on Mar 6, 2016, 12:32:27 PM
 */

#ifndef PARTCONTAINERTEST_H
#define PARTCONTAINERTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../PartContainer.h"
#include <iostream>

class PartContainerTest : public CPPUNIT_NS::TestFixture{
    CPPUNIT_TEST_SUITE(PartContainerTest);
    
    /* Singleton related test */
    CPPUNIT_TEST(intTest);
    
    CPPUNIT_TEST(duplicatedIdSameContainer);
    
    CPPUNIT_TEST(duplicatedIdMultipleContainers);

    CPPUNIT_TEST_SUITE_END();

public:
    PartContainerTest();
    virtual ~PartContainerTest();
    void setUp();
    void tearDown();

private:
    void testMethod();

    
    /* test with integer type */
    void intTest();
    
    
    void duplicatedIdSameContainer();
    
    void duplicatedIdMultipleContainers();

};

#endif /* PARTCONTAINERTEST_H */

