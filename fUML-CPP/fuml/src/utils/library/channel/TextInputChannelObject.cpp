/*
 * TextInputChannelObject.cpp
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */
#include <limits.h>

#include <utils/library/channel/TextInputChannelObject.h>

#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <fuml/semantics/simpleclassifiers/IntegerValue.h>
#include <fuml/semantics/simpleclassifiers/RealValue.h>
#include <fuml/semantics/simpleclassifiers/StringValue.h>
#include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h>
#include <utils/library/common/Status.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <utils/library/libraryclass/OperationExecution.h>

using namespace fuml::library::channel;

TextInputChannelObject::TextInputChannelObject()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_TextInputChannel);
}

TextInputChannelObject::~TextInputChannelObject()
{
}

void TextInputChannelObject::execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>& execution)
{
	std::string name = execution->getOperationName();

	std::shared_ptr<fuml::library::common::Status> status(
		new fuml::library::common::Status(this->locus, "TextInputChannelObject"));
	PrimitiveValuePtr resultValue = nullptr;

	if (name == "readCharacter")
	{
		std::string result = this->readCharacter(status);
		if (result != "")
		{
			resultValue.reset(new StringValue());
			resultValue->type = this->locus->factory->getBuiltInType("String");
			AS(StringValue, resultValue)->value = result;
		}
		this->updateStatus(execution, status);
	}
	else if (name == "peekCharacter")
	{
		std::string result = this->peekCharacter(status);
		if (result != "")
		{
			resultValue.reset(new StringValue());
			resultValue->type = this->locus->factory->getBuiltInType("String");
			AS(StringValue, resultValue)->value = result;
		}
		this->updateStatus(execution, status);
	}
	else if (name == "readLine")
	{
		std::string result = this->readLine(status);
		if (result != "")
		{
			resultValue.reset(new StringValue());
			resultValue->type = this->locus->factory->getBuiltInType("String");
			AS(StringValue, resultValue)->value = result;
		}
		this->updateStatus(execution, status);
	}
	else if (name == "readInteger")
	{
		int result = this->readInteger(status);
		if (result != INT_MIN)
		{
			resultValue.reset(new IntegerValue());
			resultValue->type = this->locus->factory->getBuiltInType("Integer");
			AS(IntegerValue, resultValue)->value = result;
		}
		this->updateStatus(execution, status);
	}
	else if (name == "readReal")
	{
		float result = this->readReal(status);
		if (result != INT_MIN)
		{
			resultValue.reset(new RealValue());
			resultValue->type = this->locus->factory->getBuiltInType("Real");
			AS(RealValue, resultValue)->value = result;
		}
		this->updateStatus(execution, status);
	}
	else if (name == "readBoolean")
	{
		bool result = this->readBoolean(status);
		resultValue.reset(new BooleanValue());
		resultValue->type = this->locus->factory->getBuiltInType("Boolean");
		AS(BooleanValue, resultValue)->value = result;
		this->updateStatus(execution, status);
	}
	else if (name == "readUnlimitedNatural")
	{
		UMLPrimitiveTypes::unlimitedNatural result = this->readUnlimitedNatural(status);
		if (result != INT_MIN)
		{
			resultValue.reset(new UnlimitedNaturalValue());
			resultValue->type = this->locus->factory->getBuiltInType("UnlimitedNatural");
			AS(UnlimitedNaturalValue, resultValue)->value = result;
		}
		this->updateStatus(execution, status);
	}
	else
	{
		InputChannelObject::execute(execution);
	}

	if (resultValue != nullptr)
	{
		execution->setReturnParameterValue(resultValue);
	}
}
