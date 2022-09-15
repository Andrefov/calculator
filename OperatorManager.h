#pragma once
#include <unordered_set>
#include "ArithmeticOperator.h"

class OperatorManager {
public:

	OperatorManager() = default;
	~OperatorManager() = default;

	void registerOperator(std::string name, std::string symbol,
		std::function<double(const double, const double)> function, 
		unsigned short int priority);
	void unregisterOperator(std::string name);
	ArithmeticOperator findOperator(std::string name) const;
	std::unordered_set<ArithmeticOperator>& getOperators(); 

private:
	std::unordered_set<ArithmeticOperator> operators; 
};

