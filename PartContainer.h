/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PartContainer.h
 * Author: fulop
 *
 * Created on March 6, 2016, 12:09 PM
 */

#ifndef PARTCONTAINER_H
#define PARTCONTAINER_H

#include <vector>
#include <iostream>
#include <memory>
#include <map>

#include "IdService.h"

template <class Type> class PartContainer {

    private:
    
        /**
         * Stores the objects.
         */
        std::map<std::string, std::shared_ptr<Type>> storedObjects;
    
    
    public:

        /**
         * Default constructor.
         */
        PartContainer(){};
        
        /**
         * Destructor.
         */
        virtual ~PartContainer(){};

        /**
         * Adds an object to the container.
         * @return True if adding was successful, false if it failed.
         */
        bool add(std::string id, Type part){
            
            if(IdService::getInstance().registerId(id) == true){
                storedObjects.emplace(id, std::make_shared<Type>(part));
                return true;
            }else{
                return false;
            }
            
        }

        /**
         * Returns a part by its ID. 
         * 
         * @throws std::out_of_range if element can not be found.
         * @return 
         */
        std::shared_ptr<Type> get(std::string id){    
            return storedObjects.at(id);
        }
        
        /**
         * Returns the number of stored items in the container.
         * @return 
         */
        long unsigned int getItemNumber(){
            return storedObjects.size();
        }

};

#endif /* PARTCONTAINER_H */

