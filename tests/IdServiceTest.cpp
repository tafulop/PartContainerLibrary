/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   IdServiceTest.cpp
 * Author: fulop
 *
 * Created on Mar 13, 2016, 10:06:03 AM
 */

#include "IdServiceTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(IdServiceTest);

IdServiceTest::IdServiceTest() {
}

IdServiceTest::~IdServiceTest() {
}

void IdServiceTest::setUp() {
}

void IdServiceTest::tearDown() {
}

/* Single behaviour test */
void IdServiceTest::singletonTest(){
    
    IdService& ids1 = IdService::getInstance();
    IdService& ids2 = IdService::getInstance();

    CPPUNIT_ASSERT(&ids1 == &ids2);
    
}

/* Invalid id */
void IdServiceTest::invalidIdRegistration(){
    
    IdService& ids1 = IdService::getInstance();
    bool success = true;
    
    std::string testId = std::string("");
    
    success = ids1.registerId(testId);

    CPPUNIT_ASSERT(success == false);
}


/* Single ID registration */
void IdServiceTest::singleIdRegistration(){

    IdService& ids1 = IdService::getInstance();
    bool success = true;
    
    std::string testId = std::string("test id");
    
    // register
    if(ids1.registerId(testId) == false)success = false;
    
    // read back
    if(ids1.isRegistered(testId) == false)success = false;
    
    CPPUNIT_ASSERT(success == true);
    
}


/* Registering unique ids */
void IdServiceTest::mutipleIdRegistration(){
    
    IdService& ids1 = IdService::getInstance();
    bool success = true;

    std::vector<std::string> testIds;
    
    for(int i = 0; i < 1000; ++i){
        testIds.emplace_back("test_" + std::to_string(i));
    }
    
    for(std::vector<std::string>::iterator it = testIds.begin(); it != testIds.end(); ++it){
        // register
        if(ids1.registerId(*it) == false)success = false;
        // read back
        if(ids1.isRegistered(*it) == false)success = false;
    }
    
    CPPUNIT_ASSERT(success == true);
}



