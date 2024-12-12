#include "header.h"


void Dictionary::addDict(std::string key, std::string value) {
    this->dict[key] = value;

    std::cout << "Data added" << std::endl;
}

void Dictionary::searchDict(std::string key) {
    if (this->dict.find(key) != this->dict.end()) {
        std::cout << "Found: " << this->dict[key] << std::endl;
    } else {
        std::cout << "We could not find such a key" << std::endl;
    }
}

void Dictionary::savingData(const std::map<std::string, std::string>& m) {
    std::string keyM, data;
    std::ofstream key("key.txt");
    std::ofstream value("value.txt");

    if (!key || !value) {
        std::cerr << "Error open" << std::endl;
    }

    for (const auto pair : m) {
        keyM = pair.first;
        data = pair.second;

        key << keyM << std::endl;
        value << data << std::endl;
    }

    key.close();
    value.close();
}

Dictionary::~Dictionary() {
    this->savingData(this->dict);
}

Dictionary::Dictionary() {
    std::fstream key("key.txt");
    std::fstream value("value.txt");

    if (!key || !value) {
        std::cerr << "Error open" << std::endl;
    }

    std::string keyM, data;

    while (std::getline(key, keyM) && std::getline(value, data)) {
        this->dict[keyM] = data;
    }
}