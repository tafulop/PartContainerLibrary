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
        std::map<std::string, Type> storedObjects;
    
    
    public:

        /**
         * Default constructor.
         */
        PartContainer(){};

        /**
         * Copy constructor.
         * 
         * @param orig
         */
        PartContainer(const PartContainer& orig){};
        
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
                storedObjects.emplace(id, part);
                return true;
            }else{
                return false;
            }
            
        }

        /**
         * Returns a part by its ID.
         * @return 
         */
        std::shared_ptr<Type> get(std::string id){    
            return std::make_shared<Type>(storedObjects.at(id));
        }

};

#endif /* PARTCONTAINER_H */

