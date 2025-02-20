/*
 * PolymorphismTestEnvironment.cpp
 * 
 * Auto-generated file
 */

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */
#include "fuml/semantics/loci/Locus.h"
#include "fuml/semantics/loci/ExecutionFactory.h"
#include "fuml/extensions/structuredclassifiers/UMLConformingDispatchStrategy.h"
#include "fuml/extensions/structuredclassifiers/SignatureBasedDispatchStrategy.h"

#include "PolymorphismTestModel.h"
#include "PolymorphismTestEnvironment.h"

/*
 * End of user code
 */

using namespace PolymorphismTest;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */
void PolymorphismTestEnvironment::initializeLociContents()
{
	CS_Environment::initializeLociContents();

	/*
	 * Uncomment the following line to use custom dispatch strategy 'UMLConformingDispatchStrategy' instead of default
	 */
	//this->locus->factory->setStrategy(std::shared_ptr<fuml::extensions::structuredclassifiers::UMLConformingDispatchStrategy>(new fuml::extensions::structuredclassifiers::UMLConformingDispatchStrategy()));

	/*
	 * Uncomment the following line to use custom dispatch strategy 'SignatureBasedDispatchStrategy' instead of default
	 */
	//this->locus->factory->setStrategy(std::shared_ptr<fuml::extensions::structuredclassifiers::SignatureBasedDispatchStrategy>(new fuml::extensions::structuredclassifiers::SignatureBasedDispatchStrategy()));
}
/*
 * End of user code
 */

PolymorphismTestEnvironment::PolymorphismTestEnvironment()
{
	this->initializeEnvironment();

	/*
	 * Create custom opaque behavior execution instances and add them to the execution environment.
	 */

	/* Start of user code : Additional environment initializations
 	 * This section may be used to do any additional environment initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

PolymorphismTestEnvironment::~PolymorphismTestEnvironment()
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

const std::shared_ptr<PolymorphismTestEnvironment>& PolymorphismTestEnvironment::Instance()
{
	static std::shared_ptr<PolymorphismTestEnvironment> instance = nullptr;

	if(!instance)
	{
		instance.reset(new PolymorphismTestEnvironment());
		instance->inMemoryModel = PolymorphismTestModel::Instance();
	}

	return instance;
}

void PolymorphismTestEnvironment::execute(std::string behaviorName)
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
