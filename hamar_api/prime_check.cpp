#include "hamar_api.h"
#include <cmath>

extern "C" Value generate_primes(const std::vector<Value>& args) {
    std::vector<Value> results;
    
    // Argument validation
    if(args.size() != 2 || 
       args[0].type != Value::Type::INT || 
       args[1].type != Value::Type::INT) {
        return Value(results);  // Return empty array
    }
    
    int start = args[0].intValue;
    int end = args[1].intValue;
    
    for(int i = start; i <= end; i++) {
        if(i < 2) continue;
        bool prime = true;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                prime = false;
                break;
            }
        }
        if(prime) {
            results.push_back(Value(i));
        }
    }
    return Value(results);
}
