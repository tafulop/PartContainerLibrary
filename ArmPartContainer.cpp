/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArmPartContainer.cpp
 * Author: fulop
 * 
 * Created on March 12, 2016, 2:06 PM
 */

#include "ArmPartContainer.h"
#include "PartContainer.h"

ArmPartContainer::ArmPartContainer() {
}

ArmPartContainer::ArmPartContainer(const ArmPartContainer& orig) {
}

ArmPartContainer::~ArmPartContainer() {
}

/* Singleton get instance */
ArmPartContainer& ArmPartContainer::getInstance() {
    static ArmPartContainer instance;
    return instance;
}

