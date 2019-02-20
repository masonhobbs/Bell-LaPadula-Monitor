#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "Subject.h"
#include "Object.h"
#define low 0
#define medium 1
#define high 2


class ReferenceMonitor {
    private:
        // Store all subjects, objects, and their associated security levels
        std::map<std::string, int> subLevels;
        std::map<std::string, int> objLevels;
        std::vector<Subject> subjects;
        std::vector<Object> objects;
        int counter;

    public:
        ReferenceMonitor() {
            counter = 0;
        }
        // Functions for adding subjects and objects of some security level
        void addSubject(std::string, int level);
        void addObject(std::string, int level);
        // Executing read/write instructions with command information from BLPSecurity.cpp
        bool executeRead(std::string, std::string);
        bool executeWrite(std::string, std::string, int);
        // Returns security level of an object or subject
        int getLevelSubj(std::string);
        int getLevelObj(std::string);
        // Returns the number of actions performed
        int getCounter();
        // Prints out a table of all information
        void printState();

};
