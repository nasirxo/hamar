#pragma once
#include <vector>
#include <string>
#include <stdexcept>

struct Value {
    enum class Type { INT, DOUBLE, STRING, ARRAY, FILEOBJ, FUNCTION };
    Type type;
    int intValue;
    double doubleValue;
    std::string stringValue;
    std::vector<Value> arrayValue;
    void* fileValue;
    void* funcValue;

    // Add array constructor
    Value(const std::vector<Value>& arr) : 
        type(Type::ARRAY),
        arrayValue(arr),
        intValue(0),
        doubleValue(0),
        fileValue(nullptr),
        funcValue(nullptr) {}

    // Keep other constructors
    Value() : type(Type::INT), intValue(0), doubleValue(0), fileValue(nullptr), funcValue(nullptr) {}
    Value(int i) : type(Type::INT), intValue(i), doubleValue(i), fileValue(nullptr), funcValue(nullptr) {}
    Value(double d) : type(Type::DOUBLE), intValue(0), doubleValue(d), fileValue(nullptr), funcValue(nullptr) {}
    Value(const std::string& s) : type(Type::STRING), stringValue(s), fileValue(nullptr), funcValue(nullptr) {}
};
