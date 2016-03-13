/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   IdServiceTest.h
 * Author: fulop
 *
 * Created on Mar 13, 2016, 10:06:02 AM
 */

#ifndef IDSERVICETEST_H
#define IDSERVICETEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../IdService.h"
#include <vector>

class IdServiceTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(IdServiceTest);

    CPPUNIT_TEST(singletonTest);
    
    CPPUNIT_TEST(invalidIdRegistration);
    
    CPPUNIT_TEST(singleIdRegistration);
    
    CPPUNIT_TEST(mutipleIdRegistration);
   
    CPPUNIT_TEST_SUITE_END();

public:
    IdServiceTest();
    virtual ~IdServiceTest();
    void setUp();
    void tearDown();

private:
    
    /* Singleton behaviour test */
    void singletonTest();
    
    /* Single ID registration */
    void singleIdRegistration();
    
    /** Unique ids */
    void mutipleIdRegistration();
    
    /* invalid ID registration */
    void invalidIdRegistration();
    
    
            
};

#endif /* IDSERVICETEST_H */

