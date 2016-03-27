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
    int testNum = 1234;
    
    
    i.add("test", testNum);
 
    std::shared_ptr<int> test = i.get("test");
    
    CPPUNIT_ASSERT(*test == testNum);

}

/* Put 2 items into the container with the same id */
void PartContainerTest::duplicatedIdSameContainer(){
    
    PartContainer<int> i;
    
    bool success = true;
    
    if(i.add("double_testId", 1) == false)success = false;
    if(i.add("double_testId", 2) == true) success = false;

    CPPUNIT_ASSERT(success == true);
}

void PartContainerTest::stringTest(){
     
     PartContainer<std::string> pc;
     
     std::string test_id = "test id";
     std::string test_str = "testsrtdflgslgfkm";
     
     pc.add(test_id, test_str);
     
     std::shared_ptr<std::string> read_back = pc.get(test_id);
     
     CPPUNIT_ASSERT(*read_back == test_str);

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
 
 
 void PartContainerTest::customClassTest(){
     
     PartContainer<RoboticArm::ArmPart> pc;
     
     std::string test_id = "ID_MAAAN";
     
     // arm part attributes
     std::string test_name = "name";
     int id = 1;
     float mass = 123.2, length = 7678.45;
     
     // store
     RoboticArm::ArmPart armp = RoboticArm::ArmPart(test_name, mass, length);
     bool emplaced = pc.add(test_id, armp);
     
     // read back
     std::shared_ptr<RoboticArm::ArmPart> ap = pc.get(test_id);
     
    
     std::string readname = ap->getName();
    
     int i = 1;        
     
 }
 
 
 void PartContainerTest::setJointAngleTest(){
     
     float angle = 1234.5678;
     
     PartContainer<RoboticArm::Joint> pc;
     
     pc.add("J1", RoboticArm::Joint("Joint name", 1,1));
     
     auto j1 = pc.get("J1");
     
     j1->setAngle(angle);
     
     float read_back = pc.get("J1")->getAngle();
     
     CPPUNIT_ASSERT(read_back == angle);
 
 }