/*
 * MeasureStation_ModelEnvironment.cpp
 * 
 * Auto-generated file
 */

#include <string>

#include "MeasureStation_ModelModel.h"
#include "OpaqueBehaviorCalculateZPosExecution.h"

#include "MeasureStation_ModelEnvironment.h"

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

MeasureStation_ModelEnvironment::MeasureStation_ModelEnvironment()
{
	this->initializeEnvironment();

	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */
	std::shared_ptr<OpaqueBehaviorCalculateZPosExecution> _OpaqueBehaviorCalculateZPosExecution(new OpaqueBehaviorCalculateZPosExecution());
	_OpaqueBehaviorCalculateZPosExecution->setThisObject_Ptr(_OpaqueBehaviorCalculateZPosExecution);
	this->addPrimitiveBehaviorPrototype(_OpaqueBehaviorCalculateZPosExecution);

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

MeasureStation_ModelEnvironment::~MeasureStation_ModelEnvironment()
{
	/* Start of user code : Additional environment cleanup
 	 * This section may be used to do any additional environment cleanup,
	 * for example freeing memory for user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

const std::shared_ptr<MeasureStation_ModelEnvironment>& MeasureStation_ModelEnvironment::Instance()
{
	static std::shared_ptr<MeasureStation_ModelEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MeasureStation_ModelEnvironment());
		instance->inMemoryModel = MeasureStation_ModelModel::Instance();
	}

	return instance;
}

void MeasureStation_ModelEnvironment::execute(std::string behaviorName)
{
	/* Start of user code : Context and inputs initializations
 	 * This section may be used to initialize the execution context 
	 * as well as input parameter values if required.
 	 * It will not be overwritten by future generation processes.
 	 */

	//this->context = ...;
	//this->inputs = ...;

	/*
 	 * End of user code
 	 */

	/*
	 * Start execution via base class call
	 */
	fuml::environment::Environment::execute(behaviorName);

	/* Start of user code : Onputs evaluation
 	 * This section may be used to evaluate output parameter values if required.
 	 * It will not be overwritten by future generation processes.
 	 */

	//ParameterValueListPtr theOutputs = this->outputs;
	//...

	/*
 	 * End of user code
 	 */
}
