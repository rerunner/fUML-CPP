/*
 * SignalEvent.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/commonbehavior/SignalEvent.h>

void SignalEvent::setSignal(
	const SignalPtr& signal)
{
	this->signal = signal;
} // setSignal
