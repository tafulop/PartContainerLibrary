/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IdService.cpp
 * Author: fulop
 * 
 * Created on March 13, 2016, 9:45 AM
 */

#include "IdService.h"

IdService::IdService() {
}

IdService::IdService(const IdService& orig) {
}

IdService::~IdService() {
}

/* Singleton getinstance */
IdService& IdService::getInstance(){
    static IdService instance;
    return instance;
}

/* Registers a new id */
bool IdService::registerId(std::string id){
    
    if(id == "")return false;
    
    if(isRegistered(id) == false){
        registeredIds.insert(id);
        return true;
    }else{
        return false;
    }

}

/* Checks if an id is registered. */
bool IdService::isRegistered(std::string id){

    bool result = false;
    
    iter_lock.lock();

    if(this->registeredIds.count(id) > 0)result = true;

    iter_lock.unlock();

    return result;
}