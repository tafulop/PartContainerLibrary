/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   PartContainerManagerTest.h
 * Author: fulop
 *
 * Created on Mar 20, 2016, 7:16:19 PM
 */

#ifndef PARTCONTAINERMANAGERTEST_H
#define PARTCONTAINERMANAGERTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../PartContainerManager.h"

class PartContainerManagerTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PartContainerManagerTest);

    CPPUNIT_TEST(singletonTest);
    
    /* populating */
     CPPUNIT_TEST(addArmPart);
   /*  CPPUNIT_TEST(addBody);
     CPPUNIT_TEST(addJoint);
     CPPUNIT_TEST(addEffector);*/

    CPPUNIT_TEST_SUITE_END();

public:
    PartContainerManagerTest();
    virtual ~PartContainerManagerTest();
    void setUp();
    void tearDown();

private:
    
    /* Singleton */
    void singletonTest();
    
    
    /* Populating */
    void addArmPart();
   /* void addBody();
    void addJoint();
    void addEffector();*/
    
};

#endif /* PARTCONTAINERMANAGERTEST_H */

