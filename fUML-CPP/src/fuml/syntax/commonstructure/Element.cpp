/*
 * Element.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <fuml/syntax/commonstructure/Element.h>
#include <vector>

Element::~Element()
{
}

void Element::setThisPtr(std::weak_ptr<Element> thisElementPtr)
{
	this->thisElementPtr = thisElementPtr;
}

void Element::addOwnedElement(
	const ElementPtr& ownedElement)
{
	this->ownedElement->push_back(ownedElement);
	ownedElement->owner = thisElementPtr.lock();
} // addOwnedElement
