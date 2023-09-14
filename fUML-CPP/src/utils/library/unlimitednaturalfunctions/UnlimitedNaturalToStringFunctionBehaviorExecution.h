/*
 * UnlimitedNaturalToStringFunctionBehaviorExecution.h
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_
#define UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

namespace fuml::library::unlimitednaturalfunctions
{
	class UnlimitedNaturalToStringFunctionBehaviorExecution : public OpaqueBehaviorExecution
	{
		public:
			UnlimitedNaturalToStringFunctionBehaviorExecution();
			virtual ~UnlimitedNaturalToStringFunctionBehaviorExecution() = default;

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;
	};
// UnlimitedNaturalToStringFunctionBehaviorExecution
}

#endif /* UTILS_LIBRARY_UNLIMITEDNATURALFUNCTIONS_UNLIMITEDNATURALTOSTRINGFUNCTIONBEHAVIOREXECUTION_H_ */
