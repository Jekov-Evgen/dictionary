#include <map>
#include <string>
#include <iostream>
#include <fstream>

#pragma once

class Dictionary {
public:
    void addDict(std::string, std::string);
    void searchDict(std::string);
    void savingData(const std::map<std::string, std::string>&);
    
    Dictionary();
    ~Dictionary();
private:
    std::map<std::string, std::string> dict;
};