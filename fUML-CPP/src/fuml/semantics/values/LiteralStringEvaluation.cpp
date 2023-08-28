/*
 * LiteralStringEvaluation.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/semantics/values/LiteralStringEvaluation.h>
#include <fuml/syntax/values/LiteralString.h>

ValuePtr LiteralStringEvaluation::evaluate()
{
	// Evaluate a literal string, producing a string value.

	LiteralStringPtr literal = std::dynamic_pointer_cast<LiteralString>(this->specification);
	StringValuePtr stringValue(new StringValue());
	stringValue->type = this->getType("String");
	stringValue->value = literal->value;

	return stringValue;
} //evaluate
