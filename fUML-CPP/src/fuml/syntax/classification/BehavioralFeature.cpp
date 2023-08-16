/*
 * BehavioralFeature.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "BehavioralFeature.h"

#include "fuml/syntax/commonbehavior/Behavior.h"
#include "fUML/syntax/classification/Parameter.h"

using namespace fuml::syntax::classification;

BehavioralFeature::~BehavioralFeature()
{
}

void BehavioralFeature::setIsAbstract(bool isAbstract)
{
	this->isAbstract = isAbstract;
} // setIsAbstract

void BehavioralFeature::addOwnedParameter(
	const std::shared_ptr<fuml::syntax::classification::Parameter>& ownedParameter)
{
	fuml::syntax::commonstructure::Namespace::addOwnedMember(ownedParameter);
	this->ownedParameter->push_back(ownedParameter);
} // addOwnedParameter

void BehavioralFeature::addMethod(
	const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>& method)
{
	method->_setSpecification(thisBehavioralFeaturePtr.lock());
	this->method->push_back(method);
} // addMethod

void BehavioralFeature::addRaisedException(const std::shared_ptr<fuml::syntax::commonstructure::Type>& raisedException)
{
	this->raisedException->push_back(raisedException);
} // addRaisedException
