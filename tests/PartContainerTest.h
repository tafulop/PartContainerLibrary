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
#include "../../RoboticArmPartLibrary/ArmPart.h"

class PartContainerTest : public CPPUNIT_NS::TestFixture{
    CPPUNIT_TEST_SUITE(PartContainerTest);
    
  
    /* int type */
    CPPUNIT_TEST(intTest);

    CPPUNIT_TEST(stringTest);
    
    CPPUNIT_TEST(customClassTest);
    
    CPPUNIT_TEST(duplicatedIdSameContainer);
    
    CPPUNIT_TEST(duplicatedIdMultipleContainers);
    
    CPPUNIT_TEST(setJointAngleTest);

    CPPUNIT_TEST_SUITE_END();

public:
    PartContainerTest();
    virtual ~PartContainerTest();
    void setUp();
    void tearDown();

private:
    
    /* test with integer type */
    void intTest();
    
    /* test with string */
    void stringTest();
    
    /* armpart test */
    void customClassTest();
    
    void duplicatedIdSameContainer();
    
    void duplicatedIdMultipleContainers();
    
    void setJointAngleTest();

};

#endif /* PARTCONTAINERTEST_H */

