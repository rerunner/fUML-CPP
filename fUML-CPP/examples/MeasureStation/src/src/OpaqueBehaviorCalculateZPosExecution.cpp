/*
 * OpaqueBehaviorCalculateZPosExecution.cpp
 * 
 * Auto-generated file
 */

#include <string>

#include "MeasureStation_ModelModel.h"
#include <fuml/Debug.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>

#include "OpaqueBehaviorCalculateZPosExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace MeasureStation_Model;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for example implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

OpaqueBehaviorCalculateZPosExecution::OpaqueBehaviorCalculateZPosExecution()
{
	this->types->push_back(MeasureStation_ModelModel::Instance()->MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

OpaqueBehaviorCalculateZPosExecution::~OpaqueBehaviorCalculateZPosExecution()
{
	/* Start of user code : Additional opaque behavior execution cleanup
 	 * This section may be used to do any additional opaque behavior execution cleanup,
	 * for example freeing memory for user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

#include <iostream>
#include <vector>
#include "uml/classification/Parameter.h"
#include "uml/values/ValueSpecification.h"
#include "uml/values/LiteralReal.h"
void OpaqueBehaviorCalculateZPosExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
	std::cout << "-----------------------------------> doBody, size of outputParameters vector = " << (*outputParameters).size() << "\n";
	for (auto iter : *outputParameters)
	{
		std::cout << "-----------------------------------> doBody, iterating through output parameter: " << iter.get()->parameter.get()->name;
		std::cout << " , of type: " << iter.get()->parameter.get()->type->name << "\n";

		// Setting the zPos output value to 1.0
		std::shared_ptr<uml::values::LiteralReal> measuredZValue = std::make_shared<uml::values::LiteralReal>();
		measuredZValue->setValue(1.0f); // Set the output value;
		iter.get()->parameter.get()->lowerValue = measuredZValue;
		std::cout << "-----------------------------------> doBody, and lower value = " << measuredZValue->value << std::endl;

		// Reading back the zPos output value from the original type (to be used by the receiver)
		std::shared_ptr<uml::values::ValueSpecification> base_obj = reinterpret_cast< const std::shared_ptr<ValueSpecification> & >( iter.get()->parameter.get()->lowerValue );
		std::shared_ptr<uml::values::LiteralReal> derived_obj = reinterpret_cast< const std::shared_ptr<LiteralReal> & >( base_obj );
		std::cout << "-----------------------------------> doBody, and lower value read back = " << derived_obj->value << std::endl;

	}
}

ValuePtr OpaqueBehaviorCalculateZPosExecution::new_()
{
	std::shared_ptr<OpaqueBehaviorCalculateZPosExecution> newValue(new OpaqueBehaviorCalculateZPosExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
