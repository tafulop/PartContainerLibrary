/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PartContainerManager.cpp
 * Author: fulop
 * 
 * Created on March 20, 2016, 6:24 PM
 */

#include "PartContainerManager.h"

PartContainerManager::PartContainerManager() {
}

PartContainerManager::PartContainerManager(const PartContainerManager& orig) {
}

PartContainerManager::~PartContainerManager() {
}

/* singleton get instance */
PartContainerManager& PartContainerManager::getInstance(){
    static PartContainerManager instance;
    return instance;
}

/* Init */
void PartContainerManager::init(){
    
}