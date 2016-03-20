/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PartContainerManager.h
 * Author: fulop
 * 
 * This class stores the Part type specific containers
 * and provides an interface to access them.
 *
 * Created on March 20, 2016, 6:24 PM
 */

#ifndef PARTCONTAINERMANAGER_H
#define PARTCONTAINERMANAGER_H

#include "../RoboticArmPartLibrary/AllParts.h"
#include "PartContainer.h"

class PartContainerManager {
    
public:
    
    /* Containers */
    PartContainer<RoboticArm::Joint> joints;
    PartContainer<RoboticArm::Body>  bodies;
    PartContainer<RoboticArm::Effector> effectors;
    PartContainer<RoboticArm::ArmPart> armparts;
    
    
    /**
     * Creates the type specific containers to store RoboticArmPart objects.
     */
    void init();
    
    /**
     * Singleton get instance member function.
     * @return 
     */
    static PartContainerManager& getInstance();
    
    
    /**
     * Copy constructor.
     * @param orig
     */
    PartContainerManager(const PartContainerManager& orig);
    
    /**
     * Destructor.
     */
    virtual ~PartContainerManager();
    
private:

    
    /**
     * Default constructor.
     */
    PartContainerManager();
    
};

#endif /* PARTCONTAINERMANAGER_H */

