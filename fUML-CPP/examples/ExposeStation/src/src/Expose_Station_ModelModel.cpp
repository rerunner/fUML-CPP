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
#include <utils/standardprofile/StandardProfileModel.h>
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
		Expose_Station_Model_Association0.reset(new Association());
		this->addToElementRepository("Association0", Expose_Station_Model_Association0);
			Expose_Station_Model_Association0_exposestation.reset(new Property());
			this->addToElementRepository("exposestation", Expose_Station_Model_Association0_exposestation);
				Expose_Station_Model_Association0_exposestation_LiteralInteger1.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger1", Expose_Station_Model_Association0_exposestation_LiteralInteger1);
				Expose_Station_Model_Association0_exposestation_LiteralUnlimitedNatural2.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural2", Expose_Station_Model_Association0_exposestation_LiteralUnlimitedNatural2);
			Expose_Station_Model_Association0_waferheightmap.reset(new Property());
			this->addToElementRepository("waferheightmap", Expose_Station_Model_Association0_waferheightmap);
				Expose_Station_Model_Association0_waferheightmap_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural3", Expose_Station_Model_Association0_waferheightmap_LiteralUnlimitedNatural3);
				Expose_Station_Model_Association0_waferheightmap_LiteralInteger4.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger4", Expose_Station_Model_Association0_waferheightmap_LiteralInteger4);
		Expose_Station_Model_ExposeStation.reset(new Class_());
		this->addToElementRepository("ExposeStation", Expose_Station_Model_ExposeStation);
			Expose_Station_Model_ExposeStation_WaferID.reset(new Property());
			this->addToElementRepository("WaferID", Expose_Station_Model_ExposeStation_WaferID);
				Expose_Station_Model_ExposeStation_WaferID_LiteralUnlimitedNatural5.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural5", Expose_Station_Model_ExposeStation_WaferID_LiteralUnlimitedNatural5);
				Expose_Station_Model_ExposeStation_WaferID_LiteralInteger6.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger6", Expose_Station_Model_ExposeStation_WaferID_LiteralInteger6);
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String.reset(new Operation());
			this->addToElementRepository("Integer_ExposeWafer_String", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String);
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger7.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger7", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger7);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralUnlimitedNatural8.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural8", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralUnlimitedNatural8);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger9);
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID.reset(new Parameter());
				this->addToElementRepository("currentWaferID", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger10);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger11.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger11", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger11);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralUnlimitedNatural12.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural12", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralUnlimitedNatural12);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity.reset(new Activity());
			this->addToElementRepository("ExposeWaferActivity", Expose_Station_Model_ExposeStation_ExposeWaferActivity);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ExposeStepOpaqueBehavior.reset(new OpaqueBehavior());
				this->addToElementRepository("ExposeStepOpaqueBehavior", Expose_Station_Model_ExposeStation_ExposeWaferActivity_ExposeStepOpaqueBehavior);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow13", Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap.reset(new CallBehaviorAction());
				this->addToElementRepository("CallBehaviorActionFindWaferHeightMap", Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_FindWaferHeightMapOpaqueBehavior.reset(new OpaqueBehavior());
				this->addToElementRepository("FindWaferHeightMapOpaqueBehavior", Expose_Station_Model_ExposeStation_ExposeWaferActivity_FindWaferHeightMapOpaqueBehavior);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_End_Activity.reset(new ActivityFinalNode());
				this->addToElementRepository("End Activity", Expose_Station_Model_ExposeStation_ExposeWaferActivity_End_Activity);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_Start_Activity.reset(new InitialNode());
				this->addToElementRepository("Start Activity", Expose_Station_Model_ExposeStation_ExposeWaferActivity_Start_Activity);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow14", Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow15", Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep.reset(new CallBehaviorAction());
				this->addToElementRepository("CallBehaviorActionExposeStep", Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep);
		/*
		 * Package Launch
		 */
		Expose_Station_Model_Launch.reset(new Package());
		this->addToElementRepository("Launch", Expose_Station_Model_Launch);
			Expose_Station_Model_Launch_LaunchExposeActivity.reset(new Activity());
			this->addToElementRepository("LaunchExposeActivity", Expose_Station_Model_Launch_LaunchExposeActivity);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow16", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralInteger17);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralBoolean18.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean18", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralBoolean18);
				Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation.reset(new CreateObjectAction());
				this->addToElementRepository("CreateExposeStation", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation);
					Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result);
						Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger19.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger19", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger19);
						Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural20", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralUnlimitedNatural20);
						Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger21.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger21", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger21);
				Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4.reset(new InitialNode());
				this->addToElementRepository("InitialNode4", Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID.reset(new ValueSpecificationAction());
				this->addToElementRepository("waferID", Expose_Station_Model_Launch_LaunchExposeActivity_waferID);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_LiteralString22.reset(new LiteralString());
					this->addToElementRepository("LiteralString22", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_LiteralString22);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
						Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger23.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger23", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger23);
						Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralUnlimitedNatural24.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural24", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralUnlimitedNatural24);
						Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger25.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger25", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger25);
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow26", Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow27", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralBoolean28.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean28", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralBoolean28);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralInteger29.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger29", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralInteger29);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer.reset(new CallOperationAction());
				this->addToElementRepository("CallExposeWafer", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target.reset(new InputPin());
					this->addToElementRepository("target", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target_LiteralInteger30.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger30", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target_LiteralInteger30);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target_LiteralInteger31.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger31", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target_LiteralInteger31);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural32", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target_LiteralUnlimitedNatural32);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument.reset(new InputPin());
					this->addToElementRepository("argument", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument_LiteralInteger33.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger33", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument_LiteralInteger33);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument_LiteralInteger34.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger34", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument_LiteralInteger34);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural35", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument_LiteralUnlimitedNatural35);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result_LiteralInteger36.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger36", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result_LiteralInteger36);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result_LiteralInteger37.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger37", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result_LiteralInteger37);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural38", Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result_LiteralUnlimitedNatural38);
		Expose_Station_Model_WaferHeightMap.reset(new Class_());
		this->addToElementRepository("WaferHeightMap", Expose_Station_Model_WaferHeightMap);
			Expose_Station_Model_WaferHeightMap_measurements.reset(new Property());
			this->addToElementRepository("measurements", Expose_Station_Model_WaferHeightMap_measurements);
				Expose_Station_Model_WaferHeightMap_measurements_LiteralInteger39.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger39", Expose_Station_Model_WaferHeightMap_measurements_LiteralInteger39);
				Expose_Station_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural40.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural40", Expose_Station_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural40);

	// Initialize public members
	/*
	 * Model Expose Station Model
	 */
	Expose_Station_Model->setThisPackagePtr(Expose_Station_Model);
	Expose_Station_Model->setName("Expose Station Model");
	Expose_Station_Model->setVisibility(VisibilityKind::public_);
		// Association Association0
		Expose_Station_Model_Association0->setThisAssociationPtr(Expose_Station_Model_Association0);
		Expose_Station_Model_Association0->setName("Association0");
		Expose_Station_Model_Association0->setVisibility(VisibilityKind::public_);
		Expose_Station_Model_Association0->addOwnedEnd(Expose_Station_Model_Association0_exposestation);
		Expose_Station_Model_Association0->addOwnedEnd(Expose_Station_Model_Association0_waferheightmap);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_Association0);
		// Class ExposeStation
		Expose_Station_Model_ExposeStation->setThisClass_Ptr(Expose_Station_Model_ExposeStation);
		Expose_Station_Model_ExposeStation->setName("ExposeStation");
		Expose_Station_Model_ExposeStation->setVisibility(VisibilityKind::package);
		
			// Property WaferID
			Expose_Station_Model_ExposeStation_WaferID->setThisElementPtr(Expose_Station_Model_ExposeStation_WaferID);
			Expose_Station_Model_ExposeStation_WaferID->setName("WaferID");
			Expose_Station_Model_ExposeStation_WaferID->setVisibility(VisibilityKind::private_);
			
			Expose_Station_Model_ExposeStation_WaferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
		Expose_Station_Model_ExposeStation->addOwnedAttribute(Expose_Station_Model_ExposeStation_WaferID);
		// Activity ExposeWaferActivity
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->setThisActivityPtr(Expose_Station_Model_ExposeStation_ExposeWaferActivity);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->setName("ExposeWaferActivity");
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->setVisibility(VisibilityKind::public_);
			// OpaqueBehavior ExposeStepOpaqueBehavior
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ExposeStepOpaqueBehavior->setThisClass_Ptr(Expose_Station_Model_ExposeStation_ExposeWaferActivity_ExposeStepOpaqueBehavior);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ExposeStepOpaqueBehavior->setName("ExposeStepOpaqueBehavior");
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ExposeStepOpaqueBehavior->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->addOwnedBehavior(Expose_Station_Model_ExposeStation_ExposeWaferActivity_ExposeStepOpaqueBehavior);
				// OpaqueBehavior FindWaferHeightMapOpaqueBehavior
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_FindWaferHeightMapOpaqueBehavior->setThisClass_Ptr(Expose_Station_Model_ExposeStation_ExposeWaferActivity_FindWaferHeightMapOpaqueBehavior);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_FindWaferHeightMapOpaqueBehavior->setName("FindWaferHeightMapOpaqueBehavior");
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_FindWaferHeightMapOpaqueBehavior->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->addOwnedBehavior(Expose_Station_Model_ExposeStation_ExposeWaferActivity_FindWaferHeightMapOpaqueBehavior);
				// CallBehaviorAction CallBehaviorActionFindWaferHeightMap
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap->setName("CallBehaviorActionFindWaferHeightMap");
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap->setVisibility(VisibilityKind::public_);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap->setBehavior(Expose_Station_Model_ExposeStation_ExposeWaferActivity_FindWaferHeightMapOpaqueBehavior);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->addNode(Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap);
				// ActivityFinalNode End Activity
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_End_Activity->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferActivity_End_Activity);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_End_Activity->setName("End Activity");
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_End_Activity->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->addNode(Expose_Station_Model_ExposeStation_ExposeWaferActivity_End_Activity);
				// InitialNode Start Activity
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_Start_Activity->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferActivity_Start_Activity);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_Start_Activity->setName("Start Activity");
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_Start_Activity->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->addNode(Expose_Station_Model_ExposeStation_ExposeWaferActivity_Start_Activity);
				// CallBehaviorAction CallBehaviorActionExposeStep
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep->setName("CallBehaviorActionExposeStep");
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep->setVisibility(VisibilityKind::public_);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep->setBehavior(Expose_Station_Model_ExposeStation_ExposeWaferActivity_ExposeStepOpaqueBehavior);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->addNode(Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep);
				// ControlFlow ControlFlow13 from CallBehaviorActionExposeStep to End Activity
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13->setName("ControlFlow13");
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13->setSource(Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferActivity_End_Activity);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13);
				// ControlFlow ControlFlow14 from CallBehaviorActionFindWaferHeightMap to CallBehaviorActionExposeStep
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14->setName("ControlFlow14");
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14->setSource(Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14);
				// ControlFlow ControlFlow15 from Start Activity to CallBehaviorActionFindWaferHeightMap
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15->setName("ControlFlow15");
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15->setSource(Expose_Station_Model_ExposeStation_ExposeWaferActivity_Start_Activity);
				Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap);
			Expose_Station_Model_ExposeStation_ExposeWaferActivity->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15);
		Expose_Station_Model_ExposeStation->addOwnedBehavior(Expose_Station_Model_ExposeStation_ExposeWaferActivity);
		
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
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String->addMethod(Expose_Station_Model_ExposeStation_ExposeWaferActivity);
		Expose_Station_Model_ExposeStation->addOwnedOperation(Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_ExposeStation);
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
				// InitialNode InitialNode4
				Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4->setName("InitialNode4");
				Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_Launch_LaunchExposeActivity->addNode(Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				// ValueSpecificationAction waferID
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setThisExecutableNodePtr(Expose_Station_Model_Launch_LaunchExposeActivity_waferID);
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setName("waferID");
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString22
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_LiteralString22->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_LiteralString22);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_LiteralString22->setName("LiteralString22");
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_LiteralString22->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_LiteralString22->setValue("A0000001");
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setValue(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_LiteralString22);
					// OutputPin result
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result->setName("result");
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID->setResult(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
			Expose_Station_Model_Launch_LaunchExposeActivity->addNode(Expose_Station_Model_Launch_LaunchExposeActivity_waferID);
				// CallOperationAction CallExposeWafer
				Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer->setThisExecutableNodePtr(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer->setName("CallExposeWafer");
				Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer->setVisibility(VisibilityKind::public_);
				
					// OutputPin result
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result->setName("result");
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer->addResult(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer->setOperation(Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String);
					// InputPin target
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target->setName("target");
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target->setType(Expose_Station_Model_ExposeStation);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target);
					// InputPin argument
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument->setName("argument");
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer->addArgument(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument);
			Expose_Station_Model_Launch_LaunchExposeActivity->addNode(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer);
				// ObjectFlow ObjectFlow16 from result to target
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16->setName("ObjectFlow16");
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target);
					// LiteralBoolean LiteralBoolean18
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralBoolean18->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralBoolean18);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralBoolean18->setName("LiteralBoolean18");
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralBoolean18->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralBoolean18->setValue(true);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16->setGuard(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralBoolean18);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16);
				// ControlFlow ControlFlow26 from InitialNode4 to CreateExposeStation
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26);
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setName("ControlFlow26");
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26);
				// ObjectFlow ObjectFlow27 from result to argument
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27->setName("ObjectFlow27");
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument);
					// LiteralBoolean LiteralBoolean28
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralBoolean28->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralBoolean28);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralBoolean28->setName("LiteralBoolean28");
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralBoolean28->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralBoolean28->setValue(true);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27->setGuard(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralBoolean28);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27);
		Expose_Station_Model_Launch->addPackagedElement(Expose_Station_Model_Launch_LaunchExposeActivity);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_Launch);
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
}
