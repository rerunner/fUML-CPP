/*
 * ActivityParameterNode.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/activities/ActivityParameterNode.h>

void ActivityParameterNode::setParameter(const ParameterPtr& parameter)
{
	this->parameter = parameter;
}
