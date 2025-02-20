/*
 * SearchWHMOpaqueBehaviorExecution.cpp
 * 
 * Auto-generated file
 */

#include <string>

#include "Expose_Station_ModelModel.h"
#include <fuml/Debug.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <fuml/semantics/loci/Locus.h>
#include <fuml/semantics/commonbehavior/ParameterValue.h>

#include "SearchWHMOpaqueBehaviorExecution.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace Expose_Station_Model;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for example implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

SearchWHMOpaqueBehaviorExecution::SearchWHMOpaqueBehaviorExecution()
{
	this->types->push_back(Expose_Station_ModelModel::Instance()->Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior);
	/* Start of user code : Additional opaque behavior execution initializations
 	 * This section may be used to do any additional opaque behavior execution initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

SearchWHMOpaqueBehaviorExecution::~SearchWHMOpaqueBehaviorExecution()
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

void SearchWHMOpaqueBehaviorExecution::doBody(const ParameterValueListPtr& inputParameters,
	const ParameterValueListPtr& outputParameters)
{
}

ValuePtr SearchWHMOpaqueBehaviorExecution::new_()
{
	std::shared_ptr<SearchWHMOpaqueBehaviorExecution> newValue(new SearchWHMOpaqueBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
