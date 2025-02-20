/*
 * Expose_Station_ModelModel.cpp
 * 
 * Auto-generated file
 */

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/actions/InputPin.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/actions/OutputPin.h>
#include <uml/values/LiteralInteger.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/packages/Package.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/classification/Operation.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/activities/InitialNode.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/actions/ReadSelfAction.h>
#include <uml/activities/Activity.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Association.h>
#include <uml/classification/Property.h>
#include <uml/values/LiteralString.h>
#include <uml/packages/Package.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/activities/ActivityFinalNode.h>
#include <uml/activities/ControlFlow.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <uml/commonstructure/PackageImport.h>
#include <uml/activities/ActivityParameterNode.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/activities/MergeNode.h>
#include <uml/classification/Parameter.h>

#include "Expose_Station_ModelModel.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace Expose_Station_Model;
using namespace fuml::primitivetypes;
using namespace fuml::library;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for example implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

Expose_Station_ModelModel::Expose_Station_ModelModel()
{
	/* Start of user code : Additional model initializations
 	 * This section may be used to do any additional model initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

Expose_Station_ModelModel::~Expose_Station_ModelModel()
{
	/* Start of user code : Additional model cleanup
 	 * This section may be used to do any additional model cleanup,
	 * for example freeing memory for user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

const std::shared_ptr<Expose_Station_ModelModel>& Expose_Station_ModelModel::Instance()
{
	static std::shared_ptr<Expose_Station_ModelModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new Expose_Station_ModelModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void Expose_Station_ModelModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model Expose Station Model
	 */
	Expose_Station_Model.reset(new Package());
	this->addToElementRepository("Expose Station Model", Expose_Station_Model);
		Expose_Station_Model_WaferHeightMap.reset(new Class_());
		this->addToElementRepository("WaferHeightMap", Expose_Station_Model_WaferHeightMap);
			Expose_Station_Model_WaferHeightMap_measurements.reset(new Property());
			this->addToElementRepository("measurements", Expose_Station_Model_WaferHeightMap_measurements);
				Expose_Station_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural0.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural0", Expose_Station_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural0);
				Expose_Station_Model_WaferHeightMap_measurements_LiteralInteger1.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger1", Expose_Station_Model_WaferHeightMap_measurements_LiteralInteger1);
		/*
		 * Package Launch
		 */
		Expose_Station_Model_Launch.reset(new Package());
		this->addToElementRepository("Launch", Expose_Station_Model_Launch);
			Expose_Station_Model_Launch_LaunchExposeActivity.reset(new Activity());
			this->addToElementRepository("LaunchExposeActivity", Expose_Station_Model_Launch_LaunchExposeActivity);
				Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4.reset(new InitialNode());
				this->addToElementRepository("InitialNode4", Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation.reset(new CreateObjectAction());
				this->addToElementRepository("CreateExposeStation", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation);
					Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result);
						Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralUnlimitedNatural2.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural2", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralUnlimitedNatural2);
						Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger3.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger3", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger3);
						Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger4.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger4", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger4);
				Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinalNode14", Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer.reset(new CallOperationAction());
				this->addToElementRepository("CallOperationExposeWafer", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target.reset(new InputPin());
					this->addToElementRepository("target", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralUnlimitedNatural5.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural5", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralUnlimitedNatural5);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger6.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger6", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger6);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger7.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger7", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger7);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID.reset(new InputPin());
					this->addToElementRepository("currentWaferID", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger8.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger8", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger8);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger9.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger9", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger9);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural10", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralUnlimitedNatural10);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural11", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralUnlimitedNatural11);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger12.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger12", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger12);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger13.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger13", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger13);
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID.reset(new ValueSpecificationAction());
				this->addToElementRepository("waferID", Expose_Station_Model_Launch_LaunchExposeActivity_waferID);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001.reset(new LiteralString());
					this->addToElementRepository("A0000001", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
						Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger14.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger14", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger14);
						Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralUnlimitedNatural15.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural15", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralUnlimitedNatural15);
						Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger16.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger16", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger16);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow17", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralBoolean18.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean18", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralBoolean18);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralInteger19);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow20", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralBoolean21.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean21", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralBoolean21);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralInteger22.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger22", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralInteger22);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow23", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralBoolean24.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean24", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralBoolean24);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralInteger25);
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow26", Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26);
		Expose_Station_Model_ExposeStation.reset(new Class_());
		this->addToElementRepository("ExposeStation", Expose_Station_Model_ExposeStation);
			Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String.reset(new Operation());
			this->addToElementRepository("WaferHeightMap_FindWaferHeightMap_String", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String);
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID.reset(new Parameter());
				this->addToElementRepository("waferID", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID);
					Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural27", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralUnlimitedNatural27);
					Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralInteger28);
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result);
					Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural29", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralUnlimitedNatural29);
					Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralInteger30);
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String.reset(new Operation());
			this->addToElementRepository("Integer_ExposeWafer_String", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String);
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralUnlimitedNatural31.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural31", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralUnlimitedNatural31);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger32.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger32", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger32);
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID.reset(new Parameter());
				this->addToElementRepository("currentWaferID", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralUnlimitedNatural33.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural33", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralUnlimitedNatural33);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger34.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger34", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger34);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger35.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger35", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger35);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl.reset(new Activity());
			this->addToElementRepository("ExposeWaferImpl", Expose_Station_Model_ExposeStation_ExposeWaferImpl);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow36", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralInteger37);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralBoolean38.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean38", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralBoolean38);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow39", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralBoolean40.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean40", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralBoolean40);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralInteger41.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger41", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralInteger41);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_ExposeWaferImpl_result);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural42", Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralUnlimitedNatural42);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralInteger43.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger43", Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralInteger43);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeCurrentWaferId", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId_LiteralInteger44.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger44", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId_LiteralInteger44);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow45", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralBoolean46.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean46", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralBoolean46);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralInteger47);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11.reset(new MergeNode());
				this->addToElementRepository("MergeNode11", Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction.reset(new ValueSpecificationAction());
				this->addToElementRepository("TemporaryResultValueSpecificationAction", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger48);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger49.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger49", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger49);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural50", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralUnlimitedNatural50);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger51.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger51", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger51);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID.reset(new Parameter());
				this->addToElementRepository("currentWaferID", Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralInteger52.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger52", Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralInteger52);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralUnlimitedNatural53.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural53", Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralUnlimitedNatural53);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow54", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralBoolean55.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean55", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralBoolean55);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralInteger56.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger56", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralInteger56);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeResult", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult_LiteralInteger57);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object.reset(new OutputPin());
					this->addToElementRepository("object", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger58.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger58", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger58);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger59);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural60", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralUnlimitedNatural60);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap.reset(new CallOperationAction());
				this->addToElementRepository("CallOperationActionFindWaferHeightMap", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID.reset(new InputPin());
					this->addToElementRepository("waferID", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural61", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralUnlimitedNatural61);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger62.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger62", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger62);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger63.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger63", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger63);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target.reset(new InputPin());
					this->addToElementRepository("target", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger64.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger64", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger64);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural65", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralUnlimitedNatural65);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger66.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger66", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger66);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralUnlimitedNatural67.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural67", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralUnlimitedNatural67);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger68.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger68", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger68);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger69.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger69", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger69);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow70", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralBoolean71.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean71", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralBoolean71);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralInteger72.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger72", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralInteger72);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl.reset(new Activity());
			this->addToElementRepository("FindWaferHeightMapImpl", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow73", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralInteger74.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger74", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralInteger74);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralBoolean75.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean75", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralBoolean75);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15.reset(new MergeNode());
				this->addToElementRepository("MergeNode15", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeWaferID", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID_LiteralInteger76.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger76", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID_LiteralInteger76);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralInteger77.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger77", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralInteger77);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralUnlimitedNatural78.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural78", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralUnlimitedNatural78);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction.reset(new CreateObjectAction());
				this->addToElementRepository("CreateDummyObjectAction", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object.reset(new OutputPin());
					this->addToElementRepository("object", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object_LiteralInteger79.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger79", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object_LiteralInteger79);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object_LiteralInteger80.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger80", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object_LiteralInteger80);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object_LiteralUnlimitedNatural81.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural81", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object_LiteralUnlimitedNatural81);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM.reset(new CallBehaviorAction());
				this->addToElementRepository("CallBehaviorActionWHM", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM.reset(new OutputPin());
					this->addToElementRepository("resultWHM", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM_LiteralInteger82.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger82", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM_LiteralInteger82);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM_LiteralUnlimitedNatural83.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural83", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM_LiteralUnlimitedNatural83);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM_LiteralInteger84.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger84", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM_LiteralInteger84);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin.reset(new InputPin());
					this->addToElementRepository("WaferIDInputPin", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin_LiteralUnlimitedNatural85.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural85", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin_LiteralUnlimitedNatural85);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin_LiteralInteger86.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger86", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin_LiteralInteger86);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin_LiteralInteger87.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger87", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin_LiteralInteger87);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow88", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralInteger89.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger89", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralInteger89);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralBoolean90.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean90", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralBoolean90);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger91.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger91", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger91);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralUnlimitedNatural92.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural92", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralUnlimitedNatural92);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger93.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger93", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger93);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeWaferHeightMap", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap_LiteralInteger94.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger94", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap_LiteralInteger94);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow95", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralInteger96.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger96", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralInteger96);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralBoolean97.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean97", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralBoolean97);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID.reset(new Parameter());
				this->addToElementRepository("waferID", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralInteger98.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger98", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralInteger98);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralUnlimitedNatural99.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural99", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralUnlimitedNatural99);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior.reset(new OpaqueBehavior());
				this->addToElementRepository("findWHMOpaqueBehavior", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter.reset(new Parameter());
					this->addToElementRepository("WaferIDParameter", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter_LiteralUnlimitedNatural100.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural100", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter_LiteralUnlimitedNatural100);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter_LiteralInteger101.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger101", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter_LiteralInteger101);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter.reset(new Parameter());
					this->addToElementRepository("WHMParameter", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter_LiteralUnlimitedNatural102.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural102", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter_LiteralUnlimitedNatural102);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter_LiteralInteger103.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger103", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter_LiteralInteger103);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value.reset(new Parameter());
					this->addToElementRepository("value", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value_LiteralInteger104.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger104", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value_LiteralInteger104);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value_LiteralUnlimitedNatural105.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural105", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value_LiteralUnlimitedNatural105);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow106", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralInteger107.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger107", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralInteger107);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralBoolean108.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean108", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralBoolean108);
		Expose_Station_Model_Association109.reset(new Association());
		this->addToElementRepository("Association109", Expose_Station_Model_Association109);
			Expose_Station_Model_Association109_exposestation.reset(new Property());
			this->addToElementRepository("exposestation", Expose_Station_Model_Association109_exposestation);
				Expose_Station_Model_Association109_exposestation_LiteralInteger110.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger110", Expose_Station_Model_Association109_exposestation_LiteralInteger110);
				Expose_Station_Model_Association109_exposestation_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural111", Expose_Station_Model_Association109_exposestation_LiteralUnlimitedNatural111);
			Expose_Station_Model_Association109_waferheightmap.reset(new Property());
			this->addToElementRepository("waferheightmap", Expose_Station_Model_Association109_waferheightmap);
				Expose_Station_Model_Association109_waferheightmap_LiteralInteger112.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger112", Expose_Station_Model_Association109_waferheightmap_LiteralInteger112);
				Expose_Station_Model_Association109_waferheightmap_LiteralUnlimitedNatural113.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural113", Expose_Station_Model_Association109_waferheightmap_LiteralUnlimitedNatural113);

	// Initialize public members
	/*
	 * Model Expose Station Model
	 */
	Expose_Station_Model->setThisPackagePtr(Expose_Station_Model);
	Expose_Station_Model->setName("Expose Station Model");
	Expose_Station_Model->setVisibility(VisibilityKind::public_);
		// Class WaferHeightMap
		Expose_Station_Model_WaferHeightMap->setThisClass_Ptr(Expose_Station_Model_WaferHeightMap);
		Expose_Station_Model_WaferHeightMap->setName("WaferHeightMap");
		Expose_Station_Model_WaferHeightMap->setVisibility(VisibilityKind::public_);
		
			// Property measurements
			Expose_Station_Model_WaferHeightMap_measurements->setThisElementPtr(Expose_Station_Model_WaferHeightMap_measurements);
			Expose_Station_Model_WaferHeightMap_measurements->setName("measurements");
			Expose_Station_Model_WaferHeightMap_measurements->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_WaferHeightMap_measurements->setUpper(10000);
			Expose_Station_Model_WaferHeightMap_measurements->setLower(0);
			Expose_Station_Model_WaferHeightMap_measurements->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		Expose_Station_Model_WaferHeightMap->addOwnedAttribute(Expose_Station_Model_WaferHeightMap_measurements);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_WaferHeightMap);
		/*
		 * Package Launch
		 */
		Expose_Station_Model_Launch->setThisPackagePtr(Expose_Station_Model_Launch);
		Expose_Station_Model_Launch->setName("Launch");
		Expose_Station_Model_Launch->setVisibility(VisibilityKind::public_);
			// Activity LaunchExposeActivity
			Expose_Station_Model_Launch_LaunchExposeActivity->setThisActivityPtr(Expose_Station_Model_Launch_LaunchExposeActivity);
			Expose_Station_Model_Launch_LaunchExposeActivity->setName("LaunchExposeActivity");
			Expose_Station_Model_Launch_LaunchExposeActivity->setVisibility(VisibilityKind::public_);
				// InitialNode InitialNode4
				Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4->setName("InitialNode4");
				Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_Launch_LaunchExposeActivity->addNode(Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				// CreateObjectAction CreateExposeStation
				Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation->setThisExecutableNodePtr(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation);
				Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation->setName("CreateExposeStation");
				Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation->setVisibility(VisibilityKind::public_);
				Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation->setClassifier(Expose_Station_Model_ExposeStation);
					// OutputPin result
					Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result);
					Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result->setName("result");
					Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result->setType(Expose_Station_Model_ExposeStation);
				Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation->setResult(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result);
			Expose_Station_Model_Launch_LaunchExposeActivity->addNode(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation);
				// ActivityFinalNode ActivityFinalNode14
				Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14);
				Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14->setName("ActivityFinalNode14");
				Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_Launch_LaunchExposeActivity->addNode(Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14);
				// CallOperationAction CallOperationExposeWafer
				Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer->setThisExecutableNodePtr(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer->setName("CallOperationExposeWafer");
				Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer->setVisibility(VisibilityKind::public_);
				
					// OutputPin result
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result->setName("result");
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer->addResult(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer->setOperation(Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String);
					// InputPin target
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target->setName("target");
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target->setType(Expose_Station_Model_ExposeStation);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target);
					// InputPin currentWaferID
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID->setName("currentWaferID");
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer->addArgument(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID);
			Expose_Station_Model_Launch_LaunchExposeActivity->addNode(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer);
				// ValueSpecificationAction waferID
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setThisExecutableNodePtr(Expose_Station_Model_Launch_LaunchExposeActivity_waferID);
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setName("waferID");
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setVisibility(VisibilityKind::public_);
					// LiteralString A0000001
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001->setName("A0000001");
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001->setValue("A0000001");
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setValue(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001);
					// OutputPin result
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result->setName("result");
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setResult(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
			Expose_Station_Model_Launch_LaunchExposeActivity->addNode(Expose_Station_Model_Launch_LaunchExposeActivity_waferID);
				// ObjectFlow ObjectFlow17 from result to target
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17->setName("ObjectFlow17");
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target);
					// LiteralBoolean LiteralBoolean18
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralBoolean18->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralBoolean18);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralBoolean18->setName("LiteralBoolean18");
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralBoolean18->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralBoolean18->setValue(true);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17->setGuard(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralBoolean18);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17);
				// ObjectFlow ObjectFlow20 from result to ActivityFinalNode14
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20->setName("ObjectFlow20");
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14);
					// LiteralBoolean LiteralBoolean21
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralBoolean21->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralBoolean21);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralBoolean21->setName("LiteralBoolean21");
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralBoolean21->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralBoolean21->setValue(true);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20->setGuard(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralBoolean21);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20);
				// ObjectFlow ObjectFlow23 from result to currentWaferID
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23->setName("ObjectFlow23");
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID);
					// LiteralBoolean LiteralBoolean24
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralBoolean24->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralBoolean24);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralBoolean24->setName("LiteralBoolean24");
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralBoolean24->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralBoolean24->setValue(true);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23->setGuard(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralBoolean24);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23);
				// ControlFlow ControlFlow26 from InitialNode4 to CreateExposeStation
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26);
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setName("ControlFlow26");
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26);
		Expose_Station_Model_Launch->addPackagedElement(Expose_Station_Model_Launch_LaunchExposeActivity);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_Launch);
		// Class ExposeStation
		Expose_Station_Model_ExposeStation->setThisClass_Ptr(Expose_Station_Model_ExposeStation);
		Expose_Station_Model_ExposeStation->setName("ExposeStation");
		Expose_Station_Model_ExposeStation->setVisibility(VisibilityKind::public_);
		// Activity ExposeWaferImpl
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->setThisActivityPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->setName("ExposeWaferImpl");
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->setVisibility(VisibilityKind::public_);
			
				// Parameter currentWaferID
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID->setName("currentWaferID");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addOwnedParameter(Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID);
				// Parameter result
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_result->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_result);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_result->setName("result");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_result->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_result->setDirection(ParameterDirectionKind::return_);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addOwnedParameter(Expose_Station_Model_ExposeStation_ExposeWaferImpl_result);
				// MergeNode MergeNode11
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11->setName("MergeNode11");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addNode(Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11);
				// ValueSpecificationAction TemporaryResultValueSpecificationAction
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setName("TemporaryResultValueSpecificationAction");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger48
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger48->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger48);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger48->setName("LiteralInteger48");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger48->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger48->setValue(0);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setValue(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger48);
					// OutputPin result
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result->setName("result");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setResult(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addNode(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction);
				// ActivityParameterNode ActivityParameterNodeResult
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult->setName("ActivityParameterNodeResult");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult->setParameter(Expose_Station_Model_ExposeStation_ExposeWaferImpl_result);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addNode(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult);
				// ReadSelfAction This
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_This->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_This);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_This->setName("This");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin object
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object->setName("object");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object->setType(Expose_Station_Model_ExposeStation);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_This->setResult(Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addNode(Expose_Station_Model_ExposeStation_ExposeWaferImpl_This);
				// ActivityParameterNode ActivityParameterNodeCurrentWaferId
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId->setName("ActivityParameterNodeCurrentWaferId");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId->setParameter(Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addNode(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId);
				// CallOperationAction CallOperationActionFindWaferHeightMap
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap->setName("CallOperationActionFindWaferHeightMap");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap->setVisibility(VisibilityKind::public_);
				
					// OutputPin result
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result->setName("result");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result->setType(Expose_Station_Model_WaferHeightMap);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap->addResult(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap->setOperation(Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String);
					// InputPin target
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target->setName("target");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target->setType(Expose_Station_Model_ExposeStation);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target);
					// InputPin waferID
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID->setName("waferID");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap->addArgument(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addNode(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap);
				// ObjectFlow ObjectFlow45 from result to MergeNode11
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45->setName("ObjectFlow45");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45->setSource(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11);
					// LiteralBoolean LiteralBoolean46
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralBoolean46->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralBoolean46);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralBoolean46->setName("LiteralBoolean46");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralBoolean46->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralBoolean46->setValue(true);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45->setGuard(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralBoolean46);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45);
				// ObjectFlow ObjectFlow36 from MergeNode11 to ActivityParameterNodeResult
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36->setName("ObjectFlow36");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36->setSource(Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult);
					// LiteralBoolean LiteralBoolean38
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralBoolean38->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralBoolean38);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralBoolean38->setName("LiteralBoolean38");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralBoolean38->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralBoolean38->setValue(true);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36->setGuard(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralBoolean38);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36);
				// ObjectFlow ObjectFlow39 from object to target
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39->setName("ObjectFlow39");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39->setSource(Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target);
					// LiteralBoolean LiteralBoolean40
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralBoolean40->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralBoolean40);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralBoolean40->setName("LiteralBoolean40");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralBoolean40->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralBoolean40->setValue(true);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39->setGuard(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralBoolean40);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39);
				// ObjectFlow ObjectFlow54 from ActivityParameterNodeCurrentWaferId to waferID
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54->setName("ObjectFlow54");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54->setSource(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID);
					// LiteralBoolean LiteralBoolean55
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralBoolean55->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralBoolean55);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralBoolean55->setName("LiteralBoolean55");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralBoolean55->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralBoolean55->setValue(true);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54->setGuard(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralBoolean55);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54);
				// ObjectFlow ObjectFlow70 from result to MergeNode11
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70->setName("ObjectFlow70");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70->setSource(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11);
					// LiteralBoolean LiteralBoolean71
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralBoolean71->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralBoolean71);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralBoolean71->setName("LiteralBoolean71");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralBoolean71->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralBoolean71->setValue(true);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70->setGuard(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralBoolean71);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70);
		Expose_Station_Model_ExposeStation->addOwnedBehavior(Expose_Station_Model_ExposeStation_ExposeWaferImpl);
			// Activity FindWaferHeightMapImpl
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->setThisActivityPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->setName("FindWaferHeightMapImpl");
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->setVisibility(VisibilityKind::public_);
			// OpaqueBehavior findWHMOpaqueBehavior
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior->setThisClass_Ptr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior->setName("findWHMOpaqueBehavior");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior->setVisibility(VisibilityKind::public_);
				
					// Parameter WaferIDParameter
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter->setName("WaferIDParameter");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter->setVisibility(VisibilityKind::public_);
					
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior->addOwnedParameter(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter);
					// Parameter WHMParameter
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter->setName("WHMParameter");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter->setVisibility(VisibilityKind::public_);
					
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter->setType(Expose_Station_Model_WaferHeightMap);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter->setDirection(ParameterDirectionKind::return_);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior->addOwnedParameter(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter);
					// Parameter value
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value->setName("value");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value->setVisibility(VisibilityKind::public_);
					
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior->addOwnedParameter(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addOwnedBehavior(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior);
				// Parameter waferID
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID->setName("waferID");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addOwnedParameter(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID);
				// Parameter result
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result->setName("result");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result->setType(Expose_Station_Model_WaferHeightMap);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result->setDirection(ParameterDirectionKind::return_);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addOwnedParameter(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result);
				// CallBehaviorAction CallBehaviorActionWHM
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM->setName("CallBehaviorActionWHM");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM->setVisibility(VisibilityKind::public_);
				
					// OutputPin resultWHM
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM->setName("resultWHM");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM->setType(Expose_Station_Model_WaferHeightMap);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM->addResult(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM->setBehavior(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior);
					// InputPin WaferIDInputPin
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin->setName("WaferIDInputPin");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM->addArgument(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM);
				// ReadSelfAction This
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This->setName("This");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result->setName("result");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result->setType(Expose_Station_Model_ExposeStation);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This->setResult(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This);
				// MergeNode MergeNode15
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15->setName("MergeNode15");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15);
				// ActivityParameterNode ActivityParameterNodeWaferID
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID->setName("ActivityParameterNodeWaferID");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID->setVisibility(VisibilityKind::public_);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID->setParameter(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID);
				// ActivityParameterNode ActivityParameterNodeWaferHeightMap
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap->setName("ActivityParameterNodeWaferHeightMap");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap->setVisibility(VisibilityKind::public_);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap->setType(Expose_Station_Model_WaferHeightMap);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap->setParameter(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap);
				// CreateObjectAction CreateDummyObjectAction
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction->setName("CreateDummyObjectAction");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction->setVisibility(VisibilityKind::public_);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction->setClassifier(Expose_Station_Model_WaferHeightMap);
					// OutputPin object
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object->setName("object");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object->setType(Expose_Station_Model_WaferHeightMap);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction->setResult(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction);
				// ObjectFlow ObjectFlow73 from resultWHM to MergeNode15
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73->setName("ObjectFlow73");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73->setSource(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73->setTarget(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15);
					// LiteralBoolean LiteralBoolean75
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralBoolean75->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralBoolean75);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralBoolean75->setName("LiteralBoolean75");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralBoolean75->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralBoolean75->setValue(true);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73->setGuard(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralBoolean75);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addEdge(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73);
				// ObjectFlow ObjectFlow88 from object to MergeNode15
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88->setName("ObjectFlow88");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88->setSource(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88->setTarget(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15);
					// LiteralBoolean LiteralBoolean90
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralBoolean90->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralBoolean90);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralBoolean90->setName("LiteralBoolean90");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralBoolean90->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralBoolean90->setValue(true);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88->setGuard(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralBoolean90);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addEdge(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88);
				// ObjectFlow ObjectFlow95 from ActivityParameterNodeWaferID to WaferIDInputPin
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95->setName("ObjectFlow95");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95->setSource(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95->setTarget(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin);
					// LiteralBoolean LiteralBoolean97
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralBoolean97->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralBoolean97);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralBoolean97->setName("LiteralBoolean97");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralBoolean97->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralBoolean97->setValue(true);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95->setGuard(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralBoolean97);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addEdge(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95);
				// ObjectFlow ObjectFlow106 from MergeNode15 to ActivityParameterNodeWaferHeightMap
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106->setName("ObjectFlow106");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106->setSource(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106->setTarget(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap);
					// LiteralBoolean LiteralBoolean108
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralBoolean108->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralBoolean108);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralBoolean108->setName("LiteralBoolean108");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralBoolean108->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralBoolean108->setValue(true);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106->setGuard(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralBoolean108);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addEdge(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106);
		Expose_Station_Model_ExposeStation->addOwnedBehavior(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl);
		
			// Operation Integer_ExposeWafer_String
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String->setThisOperationPtr(Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String);
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String->setName("ExposeWafer");
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String->setVisibility(VisibilityKind::public_);
				// Parameter currentWaferID
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID->setThisElementPtr(Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID);
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID->setName("currentWaferID");
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String->addOwnedParameter(Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID);
				// Parameter result
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result->setThisElementPtr(Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result);
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result->setName("result");
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result->setDirection(ParameterDirectionKind::return_);
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String->addOwnedParameter(Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result);
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String->addMethod(Expose_Station_Model_ExposeStation_ExposeWaferImpl);
		Expose_Station_Model_ExposeStation->addOwnedOperation(Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String);
			// Operation WaferHeightMap_FindWaferHeightMap_String
			Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String->setThisOperationPtr(Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String);
			Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String->setName("FindWaferHeightMap");
			Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String->setVisibility(VisibilityKind::private_);
				// Parameter waferID
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID->setThisElementPtr(Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID);
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID->setName("waferID");
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String->addOwnedParameter(Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID);
				// Parameter result
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result->setThisElementPtr(Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result);
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result->setName("result");
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result->setType(Expose_Station_Model_WaferHeightMap);
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result->setDirection(ParameterDirectionKind::return_);
			Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String->addOwnedParameter(Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result);
			Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String->addMethod(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl);
		Expose_Station_Model_ExposeStation->addOwnedOperation(Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_ExposeStation);
		// Association Association109
		Expose_Station_Model_Association109->setThisAssociationPtr(Expose_Station_Model_Association109);
		Expose_Station_Model_Association109->setName("Association109");
		Expose_Station_Model_Association109->setVisibility(VisibilityKind::public_);
		Expose_Station_Model_Association109->addOwnedEnd(Expose_Station_Model_Association109_exposestation);
		Expose_Station_Model_Association109->addOwnedEnd(Expose_Station_Model_Association109_waferheightmap);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_Association109);
}
