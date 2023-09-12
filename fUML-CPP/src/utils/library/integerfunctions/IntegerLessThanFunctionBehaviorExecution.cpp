/*
 * IntegerLessThanFunctionBehaviorExecution.cpp
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#include <utils/library/integerfunctions/IntegerLessThanFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::integerfunctions;

IntegerLessThanFunctionBehaviorExecution::IntegerLessThanFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->IntegerFunctions_lessThan);
}

bool IntegerLessThanFunctionBehaviorExecution::doIntegerFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	bool b = (i1 < i2);
	utils::Debug::println("[doBody] Integer Less Than result = " + std::to_string(b));
	return b;
}

ValuePtr IntegerLessThanFunctionBehaviorExecution::new_()
{
	std::shared_ptr<IntegerLessThanFunctionBehaviorExecution> newValue(new IntegerLessThanFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
