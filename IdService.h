/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IdService.h
 * Author: fulop
 *
 * Created on March 13, 2016, 9:45 AM
 */

#ifndef IDSERVICE_H
#define IDSERVICE_H

#include <vector>
#include <mutex>

class IdService {
    
public:
    
    /**
     * Singleton get instance member function.
     * @return 
     */
    static IdService& getInstance();
    
    /**
     * Registers an id if it has not been used before.
     * @param id The id that should be registered.
     * @return True if registration was successful, false if not.
     */
    bool registerId(std::string id);
    
    
    /**
     * Checks if an id was registered before.
     * @param id The ID to be checked.
     * @return True if id is registered, false if not.
     */
    bool isRegistered(std::string id);
    
    
    /**
     * Destructor.
     */
    virtual ~IdService();
    
    /**
     * Copy constructor. 
     * 
     * @param orig
     */
    IdService(const IdService& orig);
    
private:
    
    /* Stores the IDs that have been used before */
    std::vector<std::string> registeredIds;
    
    /* Prevents multithread modification in id list*/
    std::mutex iter_lock;
    
    /**
     * Default constructor.
     */
    IdService();
    
    
    


};

#endif /* IDSERVICE_H */

