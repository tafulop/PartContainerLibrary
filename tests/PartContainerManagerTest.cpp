/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   PartContainerManagerTest.cpp
 * Author: fulop
 *
 * Created on Mar 20, 2016, 7:16:19 PM
 */

#include "PartContainerManagerTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(PartContainerManagerTest);

PartContainerManagerTest::PartContainerManagerTest() {
}

PartContainerManagerTest::~PartContainerManagerTest() {
}

void PartContainerManagerTest::setUp() {
}

void PartContainerManagerTest::tearDown() {
}

void PartContainerManagerTest::singletonTest(){
    
    PartContainerManager& i1 = PartContainerManager::getInstance();
    PartContainerManager& i2 = PartContainerManager::getInstance();
    
    CPPUNIT_ASSERT(&i1 == &i2);

}

void PartContainerManagerTest::addArmPart(){
    
    bool success = true;
    
    PartContainerManager& p = PartContainerManager::getInstance();
    
    std::string s_id = "AP1";
    
    float length = 444.444;
    float mass = 123.321;
    std::string name = "test name";
    
    
    RoboticArm::ArmPart ap = RoboticArm::ArmPart(name, mass, length);
    
    p.armparts.add(s_id, ap); 
    
    std::shared_ptr<RoboticArm::ArmPart> a = p.armparts.get(s_id);
    
       CPPUNIT_ASSERT(success == true);

}
    

void PartContainerManagerTest::addBody(){
    
    bool success = true;
    
    PartContainerManager& p = PartContainerManager::getInstance();
    
    std::string s_id = "B1";
    
    float length = 444.444;
    float mass = 123.321;
    std::string name = "test name";
    
    
    p.bodies.add(s_id, RoboticArm::Body(name, mass, length)); 
    
    std::shared_ptr<RoboticArm::Body> a = p.bodies.get(s_id);
    
    if(a->getLength() != length || a->getMass() != mass || a->getName() != name)success = false;
    
    CPPUNIT_ASSERT(success == true);

}

    
void PartContainerManagerTest::addEffector(){
    
    bool success = true;
    
    PartContainerManager& p = PartContainerManager::getInstance();
    
    std::string s_id = "E1";
    
    float length = 444.444;
    float mass = 123.321;
    std::string name = "test name";
    int id = 1;
    
    
    p.effectors.add(s_id, RoboticArm::Effector(name, mass, length)); 
    
    std::shared_ptr<RoboticArm::Effector> a = p.effectors.get(s_id);
    
    if(a->getLength() != length || a->getMass() != mass || a->getName() != name)success = false;
    
    CPPUNIT_ASSERT(success == true);

}

    
    
void PartContainerManagerTest::addJoint(){
    
    bool success = true;
    
    PartContainerManager& p = PartContainerManager::getInstance();
    
    std::string s_id = "J1";
    
    float length = 444.444;
    float mass = 123.321;
    std::string name = "test name";
    int id = 1;
    
    
    p.joints.add(s_id, RoboticArm::Joint(name, mass, length)); 
    
    std::shared_ptr<RoboticArm::Joint> a = p.joints.get(s_id);
    
    if(a->getLength() != length || a->getMass() != mass || a->getName() != name)success = false;
    
    CPPUNIT_ASSERT(success == true);

}