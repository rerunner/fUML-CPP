/*
 * Expose_Station_ModelModel.cpp
 * 
 * Auto-generated file
 */

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CreateObjectAction.h>
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
#include <uml/classification/InstanceValue.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/actions/ReadSelfAction.h>
#include <uml/activities/Activity.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/classification/InstanceSpecification.h>
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
				Expose_Station_Model_WaferHeightMap_measurements_LiteralInteger0.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger0", Expose_Station_Model_WaferHeightMap_measurements_LiteralInteger0);
				Expose_Station_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural1", Expose_Station_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural1);
		Expose_Station_Model_Association2.reset(new Association());
		this->addToElementRepository("Association2", Expose_Station_Model_Association2);
			Expose_Station_Model_Association2_exposestation.reset(new Property());
			this->addToElementRepository("exposestation", Expose_Station_Model_Association2_exposestation);
				Expose_Station_Model_Association2_exposestation_LiteralInteger3.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger3", Expose_Station_Model_Association2_exposestation_LiteralInteger3);
				Expose_Station_Model_Association2_exposestation_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural4", Expose_Station_Model_Association2_exposestation_LiteralUnlimitedNatural4);
			Expose_Station_Model_Association2_waferheightmap.reset(new Property());
			this->addToElementRepository("waferheightmap", Expose_Station_Model_Association2_waferheightmap);
				Expose_Station_Model_Association2_waferheightmap_LiteralInteger5.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger5", Expose_Station_Model_Association2_waferheightmap_LiteralInteger5);
				Expose_Station_Model_Association2_waferheightmap_LiteralUnlimitedNatural6.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural6", Expose_Station_Model_Association2_waferheightmap_LiteralUnlimitedNatural6);
		Expose_Station_Model_InstanceSpecification7.reset(new InstanceSpecification());
		this->addToElementRepository("InstanceSpecification7", Expose_Station_Model_InstanceSpecification7);
		Expose_Station_Model_ExposeStation.reset(new Class_());
		this->addToElementRepository("ExposeStation", Expose_Station_Model_ExposeStation);
			Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior.reset(new OpaqueBehavior());
			this->addToElementRepository("SearchWHMOpaqueBehavior", Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior);
			Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String.reset(new Operation());
			this->addToElementRepository("WaferHeightMap_FindWaferHeightMap_String", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String);
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID.reset(new Parameter());
				this->addToElementRepository("waferID", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID);
					Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralUnlimitedNatural8.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural8", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralUnlimitedNatural8);
					Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralInteger9);
				Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result);
					Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural10", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralUnlimitedNatural10);
					Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralInteger11.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger11", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralInteger11);
					Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_defaultWHM.reset(new InstanceValue());
					this->addToElementRepository("defaultWHM", Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_defaultWHM);
			Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String.reset(new Operation());
			this->addToElementRepository("WaferHeightMap_SearchWHM_String", Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String);
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result);
					Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result_LiteralInteger12);
					Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural13", Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result_LiteralUnlimitedNatural13);
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID.reset(new Parameter());
				this->addToElementRepository("waferID", Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID);
					Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural14", Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID_LiteralUnlimitedNatural14);
					Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID_LiteralInteger15.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger15", Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID_LiteralInteger15);
			Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String.reset(new Operation());
			this->addToElementRepository("Integer_ExposeWafer_String", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String);
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID.reset(new Parameter());
				this->addToElementRepository("currentWaferID", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger16.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger16", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger16);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger17);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural18", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralUnlimitedNatural18);
				Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger19);
					Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural20", Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralUnlimitedNatural20);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl.reset(new Activity());
			this->addToElementRepository("FindWaferHeightMapImpl", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM.reset(new CallOperationAction());
				this->addToElementRepository("CallOperationActionSearchWHM", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result_LiteralInteger21.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger21", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result_LiteralInteger21);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result_LiteralInteger22.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger22", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result_LiteralInteger22);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural23", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result_LiteralUnlimitedNatural23);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID.reset(new InputPin());
					this->addToElementRepository("waferID", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID_LiteralInteger24.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger24", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID_LiteralInteger24);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID_LiteralInteger25.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger25", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID_LiteralInteger25);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID_LiteralUnlimitedNatural26.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural26", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID_LiteralUnlimitedNatural26);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target.reset(new InputPin());
					this->addToElementRepository("target", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target_LiteralInteger27.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger27", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target_LiteralInteger27);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target_LiteralUnlimitedNatural28.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural28", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target_LiteralUnlimitedNatural28);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural29", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target_LiteralUnlimitedNatural29);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow30", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralBoolean31.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean31", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralBoolean31);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralInteger32.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger32", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralInteger32);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow33", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralInteger34.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger34", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralInteger34);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralBoolean35.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean35", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralBoolean35);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeWaferID", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID_LiteralInteger36.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger36", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID_LiteralInteger36);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow37", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralBoolean38.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean38", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralBoolean38);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralInteger39);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger40.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger40", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger40);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralUnlimitedNatural41.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural41", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralUnlimitedNatural41);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger42.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger42", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger42);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID.reset(new Parameter());
				this->addToElementRepository("waferID", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralInteger43.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger43", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralInteger43);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralUnlimitedNatural44.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural44", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralUnlimitedNatural44);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralUnlimitedNatural45.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural45", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralUnlimitedNatural45);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralInteger46.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger46", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralInteger46);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object.reset(new OutputPin());
					this->addToElementRepository("object", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object_LiteralInteger47.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger47", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object_LiteralInteger47);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object_LiteralUnlimitedNatural48.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural48", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object_LiteralUnlimitedNatural48);
						Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object_LiteralUnlimitedNatural49.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural49", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object_LiteralUnlimitedNatural49);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeWaferHeightMap", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap_LiteralInteger50.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger50", Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap_LiteralInteger50);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl.reset(new Activity());
			this->addToElementRepository("ExposeWaferImpl", Expose_Station_Model_ExposeStation_ExposeWaferImpl);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow51", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralBoolean52.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean52", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralBoolean52);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralInteger53);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction.reset(new ValueSpecificationAction());
				this->addToElementRepository("TemporaryResultValueSpecificationAction", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger54.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger54", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger54);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger55.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger55", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger55);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralUnlimitedNatural56.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural56", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralUnlimitedNatural56);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger57);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeCurrentWaferId", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId_LiteralInteger58.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger58", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId_LiteralInteger58);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow59", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralInteger60.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger60", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralInteger60);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralBoolean61.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean61", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralBoolean61);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID.reset(new Parameter());
				this->addToElementRepository("currentWaferID", Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralInteger62);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralUnlimitedNatural63.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural63", Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralUnlimitedNatural63);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_result.reset(new Parameter());
				this->addToElementRepository("result", Expose_Station_Model_ExposeStation_ExposeWaferImpl_result);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralInteger64.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger64", Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralInteger64);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural65", Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralUnlimitedNatural65);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object.reset(new OutputPin());
					this->addToElementRepository("object", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger66.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger66", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger66);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger67.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger67", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger67);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralUnlimitedNatural68.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural68", Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralUnlimitedNatural68);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap.reset(new CallOperationAction());
				this->addToElementRepository("CallOperationActionFindWaferHeightMap", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target.reset(new InputPin());
					this->addToElementRepository("target", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger69.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger69", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger69);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger70.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger70", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger70);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralUnlimitedNatural71.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural71", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralUnlimitedNatural71);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger72.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger72", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger72);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralUnlimitedNatural73.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural73", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralUnlimitedNatural73);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger74.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger74", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger74);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID.reset(new InputPin());
					this->addToElementRepository("waferID", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralUnlimitedNatural75.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural75", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralUnlimitedNatural75);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger76.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger76", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger76);
						Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger77.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger77", Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger77);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow78", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralBoolean79.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean79", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralBoolean79);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralInteger80.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger80", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralInteger80);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeResult", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult_LiteralInteger81.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger81", Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult_LiteralInteger81);
		Expose_Station_Model_emptyWHM.reset(new InstanceSpecification());
		this->addToElementRepository("emptyWHM", Expose_Station_Model_emptyWHM);
		/*
		 * Package Launch
		 */
		Expose_Station_Model_Launch.reset(new Package());
		this->addToElementRepository("Launch", Expose_Station_Model_Launch);
			Expose_Station_Model_Launch_LaunchExposeActivity.reset(new Activity());
			this->addToElementRepository("LaunchExposeActivity", Expose_Station_Model_Launch_LaunchExposeActivity);
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow82", Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82);
				Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinalNode14", Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14);
				Expose_Station_Model_Launch_LaunchExposeActivity_waferID.reset(new ValueSpecificationAction());
				this->addToElementRepository("waferID", Expose_Station_Model_Launch_LaunchExposeActivity_waferID);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
						Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralUnlimitedNatural83.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural83", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralUnlimitedNatural83);
						Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger84.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger84", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger84);
						Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger85.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger85", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger85);
					Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001.reset(new LiteralString());
					this->addToElementRepository("A0000001", Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow86", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralBoolean87.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean87", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralBoolean87);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralInteger88.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger88", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralInteger88);
				Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4.reset(new InitialNode());
				this->addToElementRepository("InitialNode4", Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow89", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralInteger90.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger90", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralInteger90);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralBoolean91.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean91", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralBoolean91);
				Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation.reset(new CreateObjectAction());
				this->addToElementRepository("CreateExposeStation", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation);
					Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result);
						Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger92.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger92", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger92);
						Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger93.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger93", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger93);
						Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralUnlimitedNatural94.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural94", Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralUnlimitedNatural94);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow95", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralBoolean96.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean96", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralBoolean96);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralInteger97.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger97", Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralInteger97);
				Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer.reset(new CallOperationAction());
				this->addToElementRepository("CallOperationExposeWafer", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID.reset(new InputPin());
					this->addToElementRepository("currentWaferID", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralUnlimitedNatural98.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural98", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralUnlimitedNatural98);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger99.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger99", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger99);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger100.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger100", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger100);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target.reset(new InputPin());
					this->addToElementRepository("target", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralUnlimitedNatural101.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural101", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralUnlimitedNatural101);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger102.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger102", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger102);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger103.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger103", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger103);
					Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result.reset(new OutputPin());
					this->addToElementRepository("result", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralUnlimitedNatural104.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural104", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralUnlimitedNatural104);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger105.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger105", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger105);
						Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger106.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger106", Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger106);

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
		// Association Association2
		Expose_Station_Model_Association2->setThisAssociationPtr(Expose_Station_Model_Association2);
		Expose_Station_Model_Association2->setName("Association2");
		Expose_Station_Model_Association2->setVisibility(VisibilityKind::public_);
		Expose_Station_Model_Association2->addOwnedEnd(Expose_Station_Model_Association2_exposestation);
		Expose_Station_Model_Association2->addOwnedEnd(Expose_Station_Model_Association2_waferheightmap);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_Association2);
		// InstanceSpecification InstanceSpecification7
		Expose_Station_Model_InstanceSpecification7->setThisInstanceSpecificationPtr(Expose_Station_Model_InstanceSpecification7);
		Expose_Station_Model_InstanceSpecification7->setName("InstanceSpecification7");
		Expose_Station_Model_InstanceSpecification7->setVisibility(VisibilityKind::public_);
		Expose_Station_Model_InstanceSpecification7->addClassifier(Expose_Station_Model_WaferHeightMap);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_InstanceSpecification7);
		// Class ExposeStation
		Expose_Station_Model_ExposeStation->setThisClass_Ptr(Expose_Station_Model_ExposeStation);
		Expose_Station_Model_ExposeStation->setName("ExposeStation");
		Expose_Station_Model_ExposeStation->setVisibility(VisibilityKind::public_);
		// OpaqueBehavior SearchWHMOpaqueBehavior
			Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior->setThisClass_Ptr(Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior);
			Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior->setName("SearchWHMOpaqueBehavior");
			Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior->setVisibility(VisibilityKind::private_);
		Expose_Station_Model_ExposeStation->addOwnedBehavior(Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior);
			// Activity FindWaferHeightMapImpl
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->setThisActivityPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->setName("FindWaferHeightMapImpl");
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->setVisibility(VisibilityKind::public_);
			
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
				// CallOperationAction CallOperationActionSearchWHM
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM->setName("CallOperationActionSearchWHM");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM->setVisibility(VisibilityKind::public_);
				
					// OutputPin result
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result->setName("result");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result->setType(Expose_Station_Model_WaferHeightMap);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM->addResult(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM->setOperation(Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String);
					// InputPin target
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target->setName("target");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target->setType(Expose_Station_Model_ExposeStation);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM->setTarget(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target);
					// InputPin waferID
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID->setName("waferID");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM->addArgument(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM);
				// ActivityParameterNode ActivityParameterNodeWaferID
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID->setName("ActivityParameterNodeWaferID");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID->setParameter(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID);
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
				// ReadSelfAction This
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This->setName("This");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin object
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object->setName("object");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object->setType(Expose_Station_Model_ExposeStation);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This->setResult(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This);
				// ActivityParameterNode ActivityParameterNodeWaferHeightMap
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap->setName("ActivityParameterNodeWaferHeightMap");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap->setParameter(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addNode(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap);
				// ObjectFlow ObjectFlow30 from ActivityParameterNodeWaferID to waferID
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30->setName("ObjectFlow30");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30->setSource(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30->setTarget(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID);
					// LiteralBoolean LiteralBoolean31
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralBoolean31->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralBoolean31);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralBoolean31->setName("LiteralBoolean31");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralBoolean31->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralBoolean31->setValue(true);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30->setGuard(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralBoolean31);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addEdge(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30);
				// ObjectFlow ObjectFlow33 from result to ActivityParameterNodeWaferHeightMap
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33->setName("ObjectFlow33");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33->setSource(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33->setTarget(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap);
					// LiteralBoolean LiteralBoolean35
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralBoolean35->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralBoolean35);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralBoolean35->setName("LiteralBoolean35");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralBoolean35->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralBoolean35->setValue(true);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33->setGuard(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralBoolean35);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addEdge(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33);
				// ObjectFlow ObjectFlow37 from object to target
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37->setName("ObjectFlow37");
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37->setSource(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37->setTarget(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target);
					// LiteralBoolean LiteralBoolean38
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralBoolean38->setThisElementPtr(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralBoolean38);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralBoolean38->setName("LiteralBoolean38");
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralBoolean38->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralBoolean38->setValue(true);
				Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37->setGuard(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralBoolean38);
			Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl->addEdge(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37);
		Expose_Station_Model_ExposeStation->addOwnedBehavior(Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl);
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
				// ValueSpecificationAction TemporaryResultValueSpecificationAction
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setThisExecutableNodePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setName("TemporaryResultValueSpecificationAction");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger57
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger57->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger57);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger57->setName("LiteralInteger57");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger57->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger57->setValue(0);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setValue(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger57);
					// OutputPin result
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result->setName("result");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction->setResult(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addNode(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction);
				// ActivityParameterNode ActivityParameterNodeCurrentWaferId
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId->setName("ActivityParameterNodeCurrentWaferId");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId->setParameter(Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addNode(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId);
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
				// ActivityParameterNode ActivityParameterNodeResult
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult->setName("ActivityParameterNodeResult");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult->setParameter(Expose_Station_Model_ExposeStation_ExposeWaferImpl_result);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addNode(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult);
				// ObjectFlow ObjectFlow51 from ActivityParameterNodeCurrentWaferId to waferID
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51->setName("ObjectFlow51");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51->setSource(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID);
					// LiteralBoolean LiteralBoolean52
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralBoolean52->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralBoolean52);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralBoolean52->setName("LiteralBoolean52");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralBoolean52->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralBoolean52->setValue(true);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51->setGuard(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralBoolean52);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51);
				// ObjectFlow ObjectFlow59 from object to target
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59->setName("ObjectFlow59");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59->setSource(Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target);
					// LiteralBoolean LiteralBoolean61
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralBoolean61->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralBoolean61);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralBoolean61->setName("LiteralBoolean61");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralBoolean61->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralBoolean61->setValue(true);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59->setGuard(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralBoolean61);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59);
				// ObjectFlow ObjectFlow78 from result to ActivityParameterNodeResult
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78->setThisActivityEdgePtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78->setName("ObjectFlow78");
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78->setSource(Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78->setTarget(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult);
					// LiteralBoolean LiteralBoolean79
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralBoolean79->setThisElementPtr(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralBoolean79);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralBoolean79->setName("LiteralBoolean79");
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralBoolean79->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralBoolean79->setValue(true);
				Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78->setGuard(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralBoolean79);
			Expose_Station_Model_ExposeStation_ExposeWaferImpl->addEdge(Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78);
		Expose_Station_Model_ExposeStation->addOwnedBehavior(Expose_Station_Model_ExposeStation_ExposeWaferImpl);
		
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
			// Operation WaferHeightMap_SearchWHM_String
			Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String->setThisOperationPtr(Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String);
			Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String->setName("SearchWHM");
			Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String->setVisibility(VisibilityKind::private_);
				// Parameter waferID
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID->setThisElementPtr(Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID);
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID->setName("waferID");
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String->addOwnedParameter(Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID);
				// Parameter result
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result->setThisElementPtr(Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result);
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result->setName("result");
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result->setType(Expose_Station_Model_WaferHeightMap);
				Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result->setDirection(ParameterDirectionKind::return_);
			Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String->addOwnedParameter(Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result);
			Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String->addMethod(Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior);
		Expose_Station_Model_ExposeStation->addOwnedOperation(Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_ExposeStation);
		// InstanceSpecification emptyWHM
		Expose_Station_Model_emptyWHM->setThisInstanceSpecificationPtr(Expose_Station_Model_emptyWHM);
		Expose_Station_Model_emptyWHM->setName("emptyWHM");
		Expose_Station_Model_emptyWHM->setVisibility(VisibilityKind::public_);
		Expose_Station_Model_emptyWHM->addClassifier(Expose_Station_Model_WaferHeightMap);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_emptyWHM);
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
				// ActivityFinalNode ActivityFinalNode14
				Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14);
				Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14->setName("ActivityFinalNode14");
				Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14->setVisibility(VisibilityKind::public_);
			Expose_Station_Model_Launch_LaunchExposeActivity->addNode(Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14);
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
				// ControlFlow ControlFlow82 from InitialNode4 to CreateExposeStation
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82);
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82->setName("ControlFlow82");
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4);
				Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82);
				// ObjectFlow ObjectFlow86 from result to currentWaferID
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86->setName("ObjectFlow86");
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID);
					// LiteralBoolean LiteralBoolean87
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralBoolean87->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralBoolean87);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralBoolean87->setName("LiteralBoolean87");
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralBoolean87->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralBoolean87->setValue(true);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86->setGuard(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralBoolean87);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86);
				// ObjectFlow ObjectFlow89 from result to ActivityFinalNode14
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89->setName("ObjectFlow89");
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14);
					// LiteralBoolean LiteralBoolean91
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralBoolean91->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralBoolean91);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralBoolean91->setName("LiteralBoolean91");
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralBoolean91->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralBoolean91->setValue(true);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89->setGuard(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralBoolean91);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89);
				// ObjectFlow ObjectFlow95 from result to target
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95->setThisActivityEdgePtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95->setName("ObjectFlow95");
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95->setVisibility(VisibilityKind::public_);
				
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95->setSource(Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95->setTarget(Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target);
					// LiteralBoolean LiteralBoolean96
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralBoolean96->setThisElementPtr(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralBoolean96);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralBoolean96->setName("LiteralBoolean96");
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralBoolean96->setVisibility(VisibilityKind::public_);
					Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralBoolean96->setValue(true);
				Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95->setGuard(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralBoolean96);
			Expose_Station_Model_Launch_LaunchExposeActivity->addEdge(Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95);
		Expose_Station_Model_Launch->addPackagedElement(Expose_Station_Model_Launch_LaunchExposeActivity);
	Expose_Station_Model->addPackagedElement(Expose_Station_Model_Launch);
}
