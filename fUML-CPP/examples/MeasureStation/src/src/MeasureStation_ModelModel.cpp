/*
 * MeasureStation_ModelModel.cpp
 * 
 * Auto-generated file
 */

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/InputPin.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/actions/ReadStructuralFeatureAction.h>
#include <uml/actions/OutputPin.h>
#include <uml/values/LiteralInteger.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/packages/Package.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/classification/Operation.h>
#include <uml/activities/ForkNode.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/activities/InitialNode.h>
#include <uml/values/LiteralReal.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/actions/ReadSelfAction.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/activities/Activity.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/classification/Property.h>
#include <uml/values/LiteralString.h>
#include <uml/packages/Package.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/activities/ControlFlow.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <uml/commonstructure/PackageImport.h>
#include <uml/activities/ActivityParameterNode.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/classification/Parameter.h>

#include "MeasureStation_ModelModel.h"

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace MeasureStation_Model;
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

MeasureStation_ModelModel::MeasureStation_ModelModel()
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

MeasureStation_ModelModel::~MeasureStation_ModelModel()
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

const std::shared_ptr<MeasureStation_ModelModel>& MeasureStation_ModelModel::Instance()
{
	static std::shared_ptr<MeasureStation_ModelModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MeasureStation_ModelModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void MeasureStation_ModelModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model MeasureStation Model
	 */
	MeasureStation_Model.reset(new Package());
	this->addToElementRepository("MeasureStation Model", MeasureStation_Model);
		MeasureStation_Model_MeasureStation.reset(new Class_());
		this->addToElementRepository("MeasureStation", MeasureStation_Model_MeasureStation);
			MeasureStation_Model_MeasureStation_waferHeightMap.reset(new Property());
			this->addToElementRepository("waferHeightMap", MeasureStation_Model_MeasureStation_waferHeightMap);
				MeasureStation_Model_MeasureStation_waferHeightMap_LiteralInteger0.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger0", MeasureStation_Model_MeasureStation_waferHeightMap_LiteralInteger0);
				MeasureStation_Model_MeasureStation_waferHeightMap_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural1", MeasureStation_Model_MeasureStation_waferHeightMap_LiteralUnlimitedNatural1);
			MeasureStation_Model_MeasureStation_Initialize.reset(new Operation());
			this->addToElementRepository("Initialize", MeasureStation_Model_MeasureStation_Initialize);
			MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String.reset(new Operation());
			this->addToElementRepository("WaferHeightMap_MeasureWaferHeightMap_String", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String);
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap.reset(new Parameter());
				this->addToElementRepository("resultingWaferHeightMap", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap);
					MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralInteger2);
					MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural3", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralUnlimitedNatural3);
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer.reset(new Parameter());
				this->addToElementRepository("currentWafer", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer);
					MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural4", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralUnlimitedNatural4);
					MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralInteger5);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity.reset(new Activity());
			this->addToElementRepository("MeasureWaferHeightMapActivity", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeCurrentWaferID", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID_LiteralInteger6.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger6", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID_LiteralInteger6);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer.reset(new Parameter());
				this->addToElementRepository("currentWafer", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralUnlimitedNatural7.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural7", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralUnlimitedNatural7);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralInteger8);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeResultingWaferHeightMap", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap_LiteralInteger9);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow10", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralBoolean11.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean11", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralBoolean11);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralInteger12);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap.reset(new CreateObjectAction());
				this->addToElementRepository("CreateNewWaferHeightMap", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger13.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger13", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger13);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger14.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger14", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger14);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralUnlimitedNatural15.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural15", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralUnlimitedNatural15);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap.reset(new Parameter());
				this->addToElementRepository("resultingWaferHeightMap", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralUnlimitedNatural16.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural16", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralUnlimitedNatural16);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralInteger17);
			MeasureStation_Model_MeasureStation_InitializeActivity.reset(new Activity());
			this->addToElementRepository("InitializeActivity", MeasureStation_Model_MeasureStation_InitializeActivity);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow18", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralInteger19);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralBoolean20.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean20", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralBoolean20);
				MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set NrOfMeasurements", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger21.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger21", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger21);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural22", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralUnlimitedNatural22);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger23.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger23", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger23);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value.reset(new InputPin());
					this->addToElementRepository("value", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger24.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger24", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger24);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural25", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralUnlimitedNatural25);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger26.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger26", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger26);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural27", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralUnlimitedNatural27);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralInteger28.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger28", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralInteger28);
				MeasureStation_Model_MeasureStation_InitializeActivity_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_MeasureStation_InitializeActivity_This);
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29.reset(new OutputPin());
					this->addToElementRepository("OutputPin29", MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29);
						MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29_LiteralInteger30.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger30", MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29_LiteralInteger30);
						MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29_LiteralUnlimitedNatural31.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural31", MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29_LiteralUnlimitedNatural31);
						MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29_LiteralInteger32.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger32", MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29_LiteralInteger32);
				MeasureStation_Model_MeasureStation_InitializeActivity_0.reset(new ValueSpecificationAction());
				this->addToElementRepository("0", MeasureStation_Model_MeasureStation_InitializeActivity_0);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger33);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MeasureStation_InitializeActivity_0_result);
						MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger34.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger34", MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger34);
						MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural35", MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralUnlimitedNatural35);
						MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger36.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger36", MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger36);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow37", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralInteger38.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger38", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralInteger38);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralBoolean39.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean39", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralBoolean39);
			MeasureStation_Model_MeasureStation_nrOfMeasurements.reset(new Property());
			this->addToElementRepository("nrOfMeasurements", MeasureStation_Model_MeasureStation_nrOfMeasurements);
				MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralUnlimitedNatural40.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural40", MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralUnlimitedNatural40);
				MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralInteger41.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger41", MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralInteger41);
		MeasureStation_Model_MarkMeasurement.reset(new Class_());
		this->addToElementRepository("MarkMeasurement", MeasureStation_Model_MarkMeasurement);
			MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior.reset(new OpaqueBehavior());
			this->addToElementRepository("DoMeasurementOpaqueBehavior", MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior);
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos.reset(new Parameter());
				this->addToElementRepository("atYpos", MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos);
					MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos_LiteralInteger42.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger42", MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos_LiteralInteger42);
					MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos_LiteralUnlimitedNatural43.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural43", MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos_LiteralUnlimitedNatural43);
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos.reset(new Parameter());
				this->addToElementRepository("atXpos", MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos);
					MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos_LiteralInteger44.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger44", MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos_LiteralInteger44);
					MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos_LiteralUnlimitedNatural45.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural45", MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos_LiteralUnlimitedNatural45);
			MeasureStation_Model_MarkMeasurement_zpos.reset(new Property());
			this->addToElementRepository("zpos", MeasureStation_Model_MarkMeasurement_zpos);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralInteger46.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger46", MeasureStation_Model_MarkMeasurement_zpos_LiteralInteger46);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralUnlimitedNatural47.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural47", MeasureStation_Model_MarkMeasurement_zpos_LiteralUnlimitedNatural47);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal48.reset(new LiteralReal());
				this->addToElementRepository("LiteralReal48", MeasureStation_Model_MarkMeasurement_zpos_LiteralReal48);
			MeasureStation_Model_MarkMeasurement_position.reset(new Property());
			this->addToElementRepository("position", MeasureStation_Model_MarkMeasurement_position);
				MeasureStation_Model_MarkMeasurement_position_LiteralInteger49.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger49", MeasureStation_Model_MarkMeasurement_position_LiteralInteger49);
				MeasureStation_Model_MarkMeasurement_position_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural50", MeasureStation_Model_MarkMeasurement_position_LiteralUnlimitedNatural50);
			MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real.reset(new Operation());
			this->addToElementRepository("DoMeasurement_Real_Real", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real);
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos.reset(new Parameter());
				this->addToElementRepository("atYpos", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos);
					MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralInteger51.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger51", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralInteger51);
					MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural52", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralUnlimitedNatural52);
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos.reset(new Parameter());
				this->addToElementRepository("atXpos", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos);
					MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralUnlimitedNatural53.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural53", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralUnlimitedNatural53);
					MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralInteger54.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger54", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralInteger54);
		/*
		 * Package Launch
		 */
		MeasureStation_Model_Launch.reset(new Package());
		this->addToElementRepository("Launch", MeasureStation_Model_Launch);
			MeasureStation_Model_Launch_LaunchMeasureActivity.reset(new Activity());
			this->addToElementRepository("LaunchMeasureActivity", MeasureStation_Model_Launch_LaunchMeasureActivity);
				MeasureStation_Model_Launch_LaunchMeasureActivity_waferID.reset(new ValueSpecificationAction());
				this->addToElementRepository("waferID", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID);
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID.reset(new OutputPin());
					this->addToElementRepository("resultingWID", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID);
						MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger55.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger55", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger55);
						MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger56.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger56", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger56);
						MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural57", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralUnlimitedNatural57);
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001.reset(new LiteralString());
					this->addToElementRepository("A0000001", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow58", MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation.reset(new CreateObjectAction());
				this->addToElementRepository("CreateObjectActionMeasureStation", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger59);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger60.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger60", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger60);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural61", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralUnlimitedNatural61);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow62", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralBoolean63.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean63", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralBoolean63);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralInteger64.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger64", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralInteger64);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow65", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralInteger66.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger66", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralInteger66);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralBoolean67.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean67", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralBoolean67);
				MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start.reset(new InitialNode());
				this->addToElementRepository("Launch start", MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow68", MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap.reset(new CallOperationAction());
				this->addToElementRepository("CallOperationMeasureWaferHeightMap", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap.reset(new OutputPin());
					this->addToElementRepository("resultingWaferHeightMap", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger69.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger69", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger69);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger70.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger70", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger70);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralUnlimitedNatural71.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural71", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralUnlimitedNatural71);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target.reset(new InputPin());
					this->addToElementRepository("target", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural72", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralUnlimitedNatural72);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger73.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger73", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger73);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger74.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger74", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger74);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer.reset(new InputPin());
					this->addToElementRepository("currentWafer", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger75.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger75", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger75);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger76.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger76", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger76);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralUnlimitedNatural77.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural77", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralUnlimitedNatural77);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow78", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralBoolean79.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean79", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralBoolean79);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralInteger80.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger80", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralInteger80);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9.reset(new ForkNode());
				this->addToElementRepository("ForkNode9", MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow81", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralInteger82.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger82", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralInteger82);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralBoolean83.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean83", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralBoolean83);
				MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation.reset(new CallOperationAction());
				this->addToElementRepository("InitializeMeasureStation", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation);
					MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target.reset(new InputPin());
					this->addToElementRepository("target", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target);
						MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger84.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger84", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger84);
						MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralUnlimitedNatural85.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural85", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralUnlimitedNatural85);
						MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger86.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger86", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger86);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow87", MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87);
		MeasureStation_Model_WaferHeightMap.reset(new Class_());
		this->addToElementRepository("WaferHeightMap", MeasureStation_Model_WaferHeightMap);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl.reset(new Activity());
			this->addToElementRepository("AddMarkMeasurementImpl", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput.reset(new ActivityParameterNode());
				this->addToElementRepository("newMeasurementInput", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput_LiteralInteger88.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger88", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput_LiteralInteger88);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition.reset(new ValueSpecificationAction());
				this->addToElementRepository("AtPosition", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89.reset(new OutputPin());
					this->addToElementRepository("OutputPin89", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89_LiteralInteger90.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger90", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89_LiteralInteger90);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89_LiteralUnlimitedNatural91.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural91", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89_LiteralUnlimitedNatural91);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89_LiteralInteger92.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger92", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89_LiteralInteger92);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural93", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural93);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement.reset(new Parameter());
				this->addToElementRepository("measurement", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralInteger94.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger94", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralInteger94);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralUnlimitedNatural95.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural95", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralUnlimitedNatural95);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow96", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralInteger97.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger97", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralInteger97);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralBoolean98.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean98", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralBoolean98);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("measurementListReadStructuralFeatureAction", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger99.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger99", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger99);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralUnlimitedNatural100.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural100", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralUnlimitedNatural100);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger101.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger101", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger101);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralUnlimitedNatural102.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural102", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralUnlimitedNatural102);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger103.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger103", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger103);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger104.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger104", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger104);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow105", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralInteger106.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger106", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralInteger106);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralBoolean107.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean107", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralBoolean107);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108.reset(new OutputPin());
					this->addToElementRepository("OutputPin108", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108_LiteralUnlimitedNatural109.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural109", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108_LiteralUnlimitedNatural109);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108_LiteralInteger110.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger110", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108_LiteralInteger110);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108_LiteralInteger111.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger111", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108_LiteralInteger111);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow112", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralBoolean113.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean113", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralBoolean113);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralInteger114.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger114", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralInteger114);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow115", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralBoolean116.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean116", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralBoolean116);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralInteger117.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger117", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralInteger117);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("measurementsListAddStructuralFeatureValueAction", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralUnlimitedNatural118.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural118", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralUnlimitedNatural118);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger119.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger119", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger119);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger120.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger120", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger120);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value.reset(new InputPin());
					this->addToElementRepository("value", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger121.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger121", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger121);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger122.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger122", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger122);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralUnlimitedNatural123.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural123", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralUnlimitedNatural123);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger124.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger124", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger124);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger125.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger125", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger125);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralUnlimitedNatural126.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural126", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralUnlimitedNatural126);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt.reset(new InputPin());
					this->addToElementRepository("insertAt", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger127.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger127", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger127);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger128.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger128", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger128);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralUnlimitedNatural129.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural129", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralUnlimitedNatural129);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement.reset(new Operation());
			this->addToElementRepository("AddMarkMeasurement_MarkMeasurement", MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement.reset(new Parameter());
				this->addToElementRepository("measurement", MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralUnlimitedNatural130.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural130", MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralUnlimitedNatural130);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralInteger131.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger131", MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralInteger131);
			MeasureStation_Model_WaferHeightMap_measurements.reset(new Property());
			this->addToElementRepository("measurements", MeasureStation_Model_WaferHeightMap_measurements);
				MeasureStation_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural132.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural132", MeasureStation_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural132);
				MeasureStation_Model_WaferHeightMap_measurements_LiteralInteger133.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger133", MeasureStation_Model_WaferHeightMap_measurements_LiteralInteger133);
		MeasureStation_Model_Position.reset(new Class_());
		this->addToElementRepository("Position", MeasureStation_Model_Position);
			MeasureStation_Model_Position_GetYposImpl.reset(new Activity());
			this->addToElementRepository("GetYposImpl", MeasureStation_Model_Position_GetYposImpl);
				MeasureStation_Model_Position_GetYposImpl_Parameter134.reset(new Parameter());
				this->addToElementRepository("Parameter134", MeasureStation_Model_Position_GetYposImpl_Parameter134);
					MeasureStation_Model_Position_GetYposImpl_Parameter134_LiteralUnlimitedNatural135.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural135", MeasureStation_Model_Position_GetYposImpl_Parameter134_LiteralUnlimitedNatural135);
					MeasureStation_Model_Position_GetYposImpl_Parameter134_LiteralInteger136.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger136", MeasureStation_Model_Position_GetYposImpl_Parameter134_LiteralInteger136);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow137.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow137", MeasureStation_Model_Position_GetYposImpl_ObjectFlow137);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralBoolean138.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean138", MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralBoolean138);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralInteger139.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger139", MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralInteger139);
				MeasureStation_Model_Position_GetYposImpl_ReadYpos.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("ReadYpos", MeasureStation_Model_Position_GetYposImpl_ReadYpos);
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_Position_GetYposImpl_ReadYpos_result);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralUnlimitedNatural140.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural140", MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralUnlimitedNatural140);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger141.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger141", MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger141);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger142.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger142", MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger142);
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_Position_GetYposImpl_ReadYpos_object);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralUnlimitedNatural143.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural143", MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralUnlimitedNatural143);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger144.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger144", MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger144);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger145.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger145", MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger145);
				MeasureStation_Model_Position_GetYposImpl_GetYposResult.reset(new ActivityParameterNode());
				this->addToElementRepository("GetYposResult", MeasureStation_Model_Position_GetYposImpl_GetYposResult);
					MeasureStation_Model_Position_GetYposImpl_GetYposResult_LiteralInteger146.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger146", MeasureStation_Model_Position_GetYposImpl_GetYposResult_LiteralInteger146);
				MeasureStation_Model_Position_GetYposImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_Position_GetYposImpl_This);
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin147.reset(new OutputPin());
					this->addToElementRepository("OutputPin147", MeasureStation_Model_Position_GetYposImpl_This_OutputPin147);
						MeasureStation_Model_Position_GetYposImpl_This_OutputPin147_LiteralInteger148.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger148", MeasureStation_Model_Position_GetYposImpl_This_OutputPin147_LiteralInteger148);
						MeasureStation_Model_Position_GetYposImpl_This_OutputPin147_LiteralUnlimitedNatural149.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural149", MeasureStation_Model_Position_GetYposImpl_This_OutputPin147_LiteralUnlimitedNatural149);
						MeasureStation_Model_Position_GetYposImpl_This_OutputPin147_LiteralInteger150.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger150", MeasureStation_Model_Position_GetYposImpl_This_OutputPin147_LiteralInteger150);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow151.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow151", MeasureStation_Model_Position_GetYposImpl_ObjectFlow151);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralBoolean152.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean152", MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralBoolean152);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralInteger153.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger153", MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralInteger153);
			MeasureStation_Model_Position_xpos.reset(new Property());
			this->addToElementRepository("xpos", MeasureStation_Model_Position_xpos);
				MeasureStation_Model_Position_xpos_LiteralInteger154.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger154", MeasureStation_Model_Position_xpos_LiteralInteger154);
				MeasureStation_Model_Position_xpos_LiteralReal155.reset(new LiteralReal());
				this->addToElementRepository("LiteralReal155", MeasureStation_Model_Position_xpos_LiteralReal155);
				MeasureStation_Model_Position_xpos_LiteralUnlimitedNatural156.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural156", MeasureStation_Model_Position_xpos_LiteralUnlimitedNatural156);
			MeasureStation_Model_Position_GetXposImpl.reset(new Activity());
			this->addToElementRepository("GetXposImpl", MeasureStation_Model_Position_GetXposImpl);
				MeasureStation_Model_Position_GetXposImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_Position_GetXposImpl_This);
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin157.reset(new OutputPin());
					this->addToElementRepository("OutputPin157", MeasureStation_Model_Position_GetXposImpl_This_OutputPin157);
						MeasureStation_Model_Position_GetXposImpl_This_OutputPin157_LiteralUnlimitedNatural158.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural158", MeasureStation_Model_Position_GetXposImpl_This_OutputPin157_LiteralUnlimitedNatural158);
						MeasureStation_Model_Position_GetXposImpl_This_OutputPin157_LiteralInteger159.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger159", MeasureStation_Model_Position_GetXposImpl_This_OutputPin157_LiteralInteger159);
						MeasureStation_Model_Position_GetXposImpl_This_OutputPin157_LiteralInteger160.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger160", MeasureStation_Model_Position_GetXposImpl_This_OutputPin157_LiteralInteger160);
				MeasureStation_Model_Position_GetXposImpl_GetXposResult.reset(new ActivityParameterNode());
				this->addToElementRepository("GetXposResult", MeasureStation_Model_Position_GetXposImpl_GetXposResult);
					MeasureStation_Model_Position_GetXposImpl_GetXposResult_LiteralInteger161.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger161", MeasureStation_Model_Position_GetXposImpl_GetXposResult_LiteralInteger161);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow162.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow162", MeasureStation_Model_Position_GetXposImpl_ObjectFlow162);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralInteger163.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger163", MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralInteger163);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralBoolean164.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean164", MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralBoolean164);
				MeasureStation_Model_Position_GetXposImpl_ReadXpos.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("ReadXpos", MeasureStation_Model_Position_GetXposImpl_ReadXpos);
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_Position_GetXposImpl_ReadXpos_object);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralUnlimitedNatural165.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural165", MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralUnlimitedNatural165);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger166.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger166", MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger166);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger167.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger167", MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger167);
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_Position_GetXposImpl_ReadXpos_result);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger168.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger168", MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger168);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger169.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger169", MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger169);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralUnlimitedNatural170.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural170", MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralUnlimitedNatural170);
				MeasureStation_Model_Position_GetXposImpl_xposValue.reset(new Parameter());
				this->addToElementRepository("xposValue", MeasureStation_Model_Position_GetXposImpl_xposValue);
					MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralInteger171.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger171", MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralInteger171);
					MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralUnlimitedNatural172.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural172", MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralUnlimitedNatural172);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow173.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow173", MeasureStation_Model_Position_GetXposImpl_ObjectFlow173);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralBoolean174.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean174", MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralBoolean174);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralInteger175.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger175", MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralInteger175);
			MeasureStation_Model_Position_Real_GetXpos.reset(new Operation());
			this->addToElementRepository("Real_GetXpos", MeasureStation_Model_Position_Real_GetXpos);
				MeasureStation_Model_Position_Real_GetXpos_xposValue.reset(new Parameter());
				this->addToElementRepository("xposValue", MeasureStation_Model_Position_Real_GetXpos_xposValue);
					MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralInteger176.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger176", MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralInteger176);
					MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralUnlimitedNatural177.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural177", MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralUnlimitedNatural177);
			MeasureStation_Model_Position_ypos.reset(new Property());
			this->addToElementRepository("ypos", MeasureStation_Model_Position_ypos);
				MeasureStation_Model_Position_ypos_LiteralUnlimitedNatural178.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural178", MeasureStation_Model_Position_ypos_LiteralUnlimitedNatural178);
				MeasureStation_Model_Position_ypos_LiteralInteger179.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger179", MeasureStation_Model_Position_ypos_LiteralInteger179);
				MeasureStation_Model_Position_ypos_LiteralReal180.reset(new LiteralReal());
				this->addToElementRepository("LiteralReal180", MeasureStation_Model_Position_ypos_LiteralReal180);
			MeasureStation_Model_Position_Real_GetYpos.reset(new Operation());
			this->addToElementRepository("Real_GetYpos", MeasureStation_Model_Position_Real_GetYpos);
				MeasureStation_Model_Position_Real_GetYpos_Parameter181.reset(new Parameter());
				this->addToElementRepository("Parameter181", MeasureStation_Model_Position_Real_GetYpos_Parameter181);
					MeasureStation_Model_Position_Real_GetYpos_Parameter181_LiteralUnlimitedNatural182.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural182", MeasureStation_Model_Position_Real_GetYpos_Parameter181_LiteralUnlimitedNatural182);
					MeasureStation_Model_Position_Real_GetYpos_Parameter181_LiteralInteger183.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger183", MeasureStation_Model_Position_Real_GetYpos_Parameter181_LiteralInteger183);

	// Initialize public members
	/*
	 * Model MeasureStation Model
	 */
	MeasureStation_Model->setThisPackagePtr(MeasureStation_Model);
	MeasureStation_Model->setName("MeasureStation Model");
	MeasureStation_Model->setVisibility(VisibilityKind::package);
		// Class MeasureStation
		MeasureStation_Model_MeasureStation->setThisClass_Ptr(MeasureStation_Model_MeasureStation);
		MeasureStation_Model_MeasureStation->setName("MeasureStation");
		MeasureStation_Model_MeasureStation->setVisibility(VisibilityKind::public_);
		
			// Property waferHeightMap
			MeasureStation_Model_MeasureStation_waferHeightMap->setThisElementPtr(MeasureStation_Model_MeasureStation_waferHeightMap);
			MeasureStation_Model_MeasureStation_waferHeightMap->setName("waferHeightMap");
			MeasureStation_Model_MeasureStation_waferHeightMap->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_MeasureStation_waferHeightMap->setLower(0);
			MeasureStation_Model_MeasureStation_waferHeightMap->setType(MeasureStation_Model_WaferHeightMap);
		MeasureStation_Model_MeasureStation->addOwnedAttribute(MeasureStation_Model_MeasureStation_waferHeightMap);
			// Property nrOfMeasurements
			MeasureStation_Model_MeasureStation_nrOfMeasurements->setThisElementPtr(MeasureStation_Model_MeasureStation_nrOfMeasurements);
			MeasureStation_Model_MeasureStation_nrOfMeasurements->setName("nrOfMeasurements");
			MeasureStation_Model_MeasureStation_nrOfMeasurements->setVisibility(VisibilityKind::public_);
			
			MeasureStation_Model_MeasureStation_nrOfMeasurements->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		MeasureStation_Model_MeasureStation->addOwnedAttribute(MeasureStation_Model_MeasureStation_nrOfMeasurements);
		// Activity MeasureWaferHeightMapActivity
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->setThisActivityPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->setName("MeasureWaferHeightMapActivity");
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter currentWafer
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer->setName("currentWafer");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addOwnedParameter(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer);
				// Parameter resultingWaferHeightMap
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap->setName("resultingWaferHeightMap");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap->setDirection(ParameterDirectionKind::return_);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addOwnedParameter(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap);
				// ActivityParameterNode ActivityParameterNodeCurrentWaferID
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID->setName("ActivityParameterNodeCurrentWaferID");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID->setParameter(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID);
				// ActivityParameterNode ActivityParameterNodeResultingWaferHeightMap
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap->setName("ActivityParameterNodeResultingWaferHeightMap");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap->setParameter(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap);
				// CreateObjectAction CreateNewWaferHeightMap
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap->setName("CreateNewWaferHeightMap");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap->setClassifier(MeasureStation_Model_WaferHeightMap);
					// OutputPin result
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result->setName("result");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap->setResult(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap);
				// ObjectFlow ObjectFlow10 from result to ActivityParameterNodeResultingWaferHeightMap
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10->setName("ObjectFlow10");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap);
					// LiteralBoolean LiteralBoolean11
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralBoolean11->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralBoolean11);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralBoolean11->setName("LiteralBoolean11");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralBoolean11->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralBoolean11->setValue(true);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10->setGuard(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralBoolean11);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10);
		MeasureStation_Model_MeasureStation->addOwnedBehavior(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity);
			// Activity InitializeActivity
			MeasureStation_Model_MeasureStation_InitializeActivity->setThisActivityPtr(MeasureStation_Model_MeasureStation_InitializeActivity);
			MeasureStation_Model_MeasureStation_InitializeActivity->setName("InitializeActivity");
			MeasureStation_Model_MeasureStation_InitializeActivity->setVisibility(VisibilityKind::public_);
				// AddStructuralFeatureValueAction Set NrOfMeasurements
				MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements);
				MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements->setName("Set NrOfMeasurements");
				MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements->setStructuralFeature(MeasureStation_Model_MeasureStation_nrOfMeasurements);
					// InputPin object
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object->setName("object");
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object->setType(MeasureStation_Model_MeasureStation);
				MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements->setObject(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object);
					// InputPin value
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value->setName("value");
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements->setValue(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value);
					// OutputPin result
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result->setName("result");
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result->setType(MeasureStation_Model_MeasureStation);
				MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements->setResult(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result);
			MeasureStation_Model_MeasureStation_InitializeActivity->addNode(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements);
				// ReadSelfAction This
				MeasureStation_Model_MeasureStation_InitializeActivity_This->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_InitializeActivity_This);
				MeasureStation_Model_MeasureStation_InitializeActivity_This->setName("This");
				MeasureStation_Model_MeasureStation_InitializeActivity_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin29
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29);
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29->setName("OutputPin29");
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29->setType(MeasureStation_Model_MeasureStation);
				MeasureStation_Model_MeasureStation_InitializeActivity_This->setResult(MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29);
			MeasureStation_Model_MeasureStation_InitializeActivity->addNode(MeasureStation_Model_MeasureStation_InitializeActivity_This);
				// ValueSpecificationAction 0
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_InitializeActivity_0);
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setName("0");
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger33
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger33->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger33);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger33->setName("LiteralInteger33");
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger33->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger33->setValue(0);
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setValue(MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger33);
					// OutputPin result
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_0_result);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result->setName("result");
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setResult(MeasureStation_Model_MeasureStation_InitializeActivity_0_result);
			MeasureStation_Model_MeasureStation_InitializeActivity->addNode(MeasureStation_Model_MeasureStation_InitializeActivity_0);
				// ObjectFlow ObjectFlow18 from result to value
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18->setName("ObjectFlow18");
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18->setSource(MeasureStation_Model_MeasureStation_InitializeActivity_0_result);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18->setTarget(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value);
					// LiteralBoolean LiteralBoolean20
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralBoolean20->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralBoolean20);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralBoolean20->setName("LiteralBoolean20");
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralBoolean20->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralBoolean20->setValue(true);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18->setGuard(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralBoolean20);
			MeasureStation_Model_MeasureStation_InitializeActivity->addEdge(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18);
				// ObjectFlow ObjectFlow37 from OutputPin29 to object
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37->setName("ObjectFlow37");
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37->setSource(MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37->setTarget(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object);
					// LiteralBoolean LiteralBoolean39
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralBoolean39->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralBoolean39);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralBoolean39->setName("LiteralBoolean39");
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralBoolean39->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralBoolean39->setValue(true);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37->setGuard(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralBoolean39);
			MeasureStation_Model_MeasureStation_InitializeActivity->addEdge(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37);
		MeasureStation_Model_MeasureStation->addOwnedBehavior(MeasureStation_Model_MeasureStation_InitializeActivity);
		
			// Operation Initialize
			MeasureStation_Model_MeasureStation_Initialize->setThisOperationPtr(MeasureStation_Model_MeasureStation_Initialize);
			MeasureStation_Model_MeasureStation_Initialize->setName("Initialize");
			MeasureStation_Model_MeasureStation_Initialize->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_MeasureStation_Initialize->addMethod(MeasureStation_Model_MeasureStation_InitializeActivity);
		MeasureStation_Model_MeasureStation->addOwnedOperation(MeasureStation_Model_MeasureStation_Initialize);
			// Operation WaferHeightMap_MeasureWaferHeightMap_String
			MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String->setThisOperationPtr(MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String);
			MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String->setName("MeasureWaferHeightMap");
			MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String->setVisibility(VisibilityKind::public_);
				// Parameter currentWafer
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer->setThisElementPtr(MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer);
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer->setName("currentWafer");
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String->addOwnedParameter(MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer);
				// Parameter resultingWaferHeightMap
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap->setThisElementPtr(MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap);
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap->setName("resultingWaferHeightMap");
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap->setDirection(ParameterDirectionKind::return_);
			MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String->addOwnedParameter(MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap);
			MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String->addMethod(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity);
		MeasureStation_Model_MeasureStation->addOwnedOperation(MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String);
	MeasureStation_Model->addPackagedElement(MeasureStation_Model_MeasureStation);
		// Class MarkMeasurement
		MeasureStation_Model_MarkMeasurement->setThisClass_Ptr(MeasureStation_Model_MarkMeasurement);
		MeasureStation_Model_MarkMeasurement->setName("MarkMeasurement");
		MeasureStation_Model_MarkMeasurement->setVisibility(VisibilityKind::public_);
		
			// Property zpos
			MeasureStation_Model_MarkMeasurement_zpos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_zpos);
			MeasureStation_Model_MarkMeasurement_zpos->setName("zpos");
			MeasureStation_Model_MarkMeasurement_zpos->setVisibility(VisibilityKind::public_);
			
			MeasureStation_Model_MarkMeasurement_zpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				// LiteralReal LiteralReal48
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal48->setThisElementPtr(MeasureStation_Model_MarkMeasurement_zpos_LiteralReal48);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal48->setName("LiteralReal48");
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal48->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal48->setValue(0.0f);
			MeasureStation_Model_MarkMeasurement_zpos->setDefaultValue(MeasureStation_Model_MarkMeasurement_zpos_LiteralReal48);
		MeasureStation_Model_MarkMeasurement->addOwnedAttribute(MeasureStation_Model_MarkMeasurement_zpos);
			// Property position
			MeasureStation_Model_MarkMeasurement_position->setThisElementPtr(MeasureStation_Model_MarkMeasurement_position);
			MeasureStation_Model_MarkMeasurement_position->setName("position");
			MeasureStation_Model_MarkMeasurement_position->setVisibility(VisibilityKind::public_);
			
			MeasureStation_Model_MarkMeasurement_position->setType(MeasureStation_Model_Position);
			MeasureStation_Model_MarkMeasurement_position->setAggregation(AggregationKind::shared);
		MeasureStation_Model_MarkMeasurement->addOwnedAttribute(MeasureStation_Model_MarkMeasurement_position);
		// OpaqueBehavior DoMeasurementOpaqueBehavior
			MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior->setThisClass_Ptr(MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior);
			MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior->setName("DoMeasurementOpaqueBehavior");
			MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior->setVisibility(VisibilityKind::public_);
			
				// Parameter atXpos
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos);
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos->setName("atXpos");
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior->addOwnedParameter(MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos);
				// Parameter atYpos
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos);
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos->setName("atYpos");
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior->addOwnedParameter(MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos);
		MeasureStation_Model_MarkMeasurement->addOwnedBehavior(MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior);
		
			// Operation DoMeasurement_Real_Real
			MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real->setThisOperationPtr(MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real);
			MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real->setName("DoMeasurement");
			MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real->setVisibility(VisibilityKind::public_);
				// Parameter atXpos
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos);
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos->setName("atXpos");
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real->addOwnedParameter(MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos);
				// Parameter atYpos
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos);
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos->setName("atYpos");
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real->addOwnedParameter(MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos);
			MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real->addMethod(MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior);
		MeasureStation_Model_MarkMeasurement->addOwnedOperation(MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real);
	MeasureStation_Model->addPackagedElement(MeasureStation_Model_MarkMeasurement);
		/*
		 * Package Launch
		 */
		MeasureStation_Model_Launch->setThisPackagePtr(MeasureStation_Model_Launch);
		MeasureStation_Model_Launch->setName("Launch");
		MeasureStation_Model_Launch->setVisibility(VisibilityKind::public_);
			// Activity LaunchMeasureActivity
			MeasureStation_Model_Launch_LaunchMeasureActivity->setThisActivityPtr(MeasureStation_Model_Launch_LaunchMeasureActivity);
			MeasureStation_Model_Launch_LaunchMeasureActivity->setName("LaunchMeasureActivity");
			MeasureStation_Model_Launch_LaunchMeasureActivity->setVisibility(VisibilityKind::public_);
				// ValueSpecificationAction waferID
				MeasureStation_Model_Launch_LaunchMeasureActivity_waferID->setThisExecutableNodePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_waferID);
				MeasureStation_Model_Launch_LaunchMeasureActivity_waferID->setName("waferID");
				MeasureStation_Model_Launch_LaunchMeasureActivity_waferID->setVisibility(VisibilityKind::public_);
					// LiteralString A0000001
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001);
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001->setName("A0000001");
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001->setValue("A0000001");
				MeasureStation_Model_Launch_LaunchMeasureActivity_waferID->setValue(MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001);
					// OutputPin resultingWID
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID);
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID->setName("resultingWID");
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				MeasureStation_Model_Launch_LaunchMeasureActivity_waferID->setResult(MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addNode(MeasureStation_Model_Launch_LaunchMeasureActivity_waferID);
				// CreateObjectAction CreateObjectActionMeasureStation
				MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation->setThisExecutableNodePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation->setName("CreateObjectActionMeasureStation");
				MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation->setClassifier(MeasureStation_Model_MeasureStation);
					// OutputPin result
					MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result->setName("result");
					MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result->setType(MeasureStation_Model_MeasureStation);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation->setResult(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addNode(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation);
				// CallOperationAction CallOperationMeasureWaferHeightMap
				MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap->setThisExecutableNodePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap->setName("CallOperationMeasureWaferHeightMap");
				MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap->setVisibility(VisibilityKind::public_);
				
					// OutputPin resultingWaferHeightMap
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap->setName("resultingWaferHeightMap");
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap->addResult(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap->setOperation(MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String);
					// InputPin target
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target->setName("target");
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target->setType(MeasureStation_Model_MeasureStation);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target);
					// InputPin currentWafer
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer->setName("currentWafer");
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap->addArgument(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addNode(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap);
				// ForkNode ForkNode9
				MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9->setName("ForkNode9");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addNode(MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
				// InitialNode Launch start
				MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start);
				MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start->setName("Launch start");
				MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addNode(MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start);
				// CallOperationAction InitializeMeasureStation
				MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation->setThisExecutableNodePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation);
				MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation->setName("InitializeMeasureStation");
				MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation->setOperation(MeasureStation_Model_MeasureStation_Initialize);
					// InputPin target
					MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target);
					MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target->setName("target");
					MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target->setType(MeasureStation_Model_MeasureStation);
				MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addNode(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation);
				// ControlFlow ControlFlow68 from Launch start to CreateObjectActionMeasureStation
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68->setName("ControlFlow68");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68);
				// ControlFlow ControlFlow58 from InitializeMeasureStation to CallOperationMeasureWaferHeightMap
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58->setName("ControlFlow58");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58);
				// ObjectFlow ObjectFlow78 from ForkNode9 to target
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78->setName("ObjectFlow78");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target);
					// LiteralBoolean LiteralBoolean79
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralBoolean79->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralBoolean79);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralBoolean79->setName("LiteralBoolean79");
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralBoolean79->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralBoolean79->setValue(true);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78->setGuard(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralBoolean79);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78);
				// ObjectFlow ObjectFlow62 from ForkNode9 to target
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62->setName("ObjectFlow62");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target);
					// LiteralBoolean LiteralBoolean63
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralBoolean63->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralBoolean63);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralBoolean63->setName("LiteralBoolean63");
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralBoolean63->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralBoolean63->setValue(true);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62->setGuard(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralBoolean63);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62);
				// ObjectFlow ObjectFlow81 from resultingWID to currentWafer
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81->setName("ObjectFlow81");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer);
					// LiteralBoolean LiteralBoolean83
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralBoolean83->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralBoolean83);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralBoolean83->setName("LiteralBoolean83");
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralBoolean83->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralBoolean83->setValue(true);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81->setGuard(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralBoolean83);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81);
				// ObjectFlow ObjectFlow65 from result to ForkNode9
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65->setName("ObjectFlow65");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
					// LiteralBoolean LiteralBoolean67
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralBoolean67->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralBoolean67);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralBoolean67->setName("LiteralBoolean67");
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralBoolean67->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralBoolean67->setValue(true);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65->setGuard(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralBoolean67);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65);
				// ControlFlow ControlFlow87 from CreateObjectActionMeasureStation to InitializeMeasureStation
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87->setName("ControlFlow87");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87);
		MeasureStation_Model_Launch->addPackagedElement(MeasureStation_Model_Launch_LaunchMeasureActivity);
	MeasureStation_Model->addPackagedElement(MeasureStation_Model_Launch);
		// Class WaferHeightMap
		MeasureStation_Model_WaferHeightMap->setThisClass_Ptr(MeasureStation_Model_WaferHeightMap);
		MeasureStation_Model_WaferHeightMap->setName("WaferHeightMap");
		MeasureStation_Model_WaferHeightMap->setVisibility(VisibilityKind::public_);
		
			// Property measurements
			MeasureStation_Model_WaferHeightMap_measurements->setThisElementPtr(MeasureStation_Model_WaferHeightMap_measurements);
			MeasureStation_Model_WaferHeightMap_measurements->setName("measurements");
			MeasureStation_Model_WaferHeightMap_measurements->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_WaferHeightMap_measurements->setUpper(10000);
			MeasureStation_Model_WaferHeightMap_measurements->setLower(0);
			MeasureStation_Model_WaferHeightMap_measurements->setType(MeasureStation_Model_MarkMeasurement);
		MeasureStation_Model_WaferHeightMap->addOwnedAttribute(MeasureStation_Model_WaferHeightMap_measurements);
		// Activity AddMarkMeasurementImpl
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->setThisActivityPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->setName("AddMarkMeasurementImpl");
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->setVisibility(VisibilityKind::public_);
			
				// Parameter measurement
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement->setName("measurement");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement->setType(MeasureStation_Model_MarkMeasurement);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addOwnedParameter(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement);
				// ActivityParameterNode newMeasurementInput
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput->setName("newMeasurementInput");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput->setParameter(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addNode(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput);
				// ValueSpecificationAction AtPosition
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setThisExecutableNodePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setName("AtPosition");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setVisibility(VisibilityKind::public_);
					// LiteralUnlimitedNatural LiteralUnlimitedNatural93
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural93->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural93);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural93->setName("LiteralUnlimitedNatural93");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural93->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural93->setValue(0);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setValue(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural93);
					// OutputPin OutputPin89
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89->setName("OutputPin89");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_UnlimitedNatural);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setResult(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addNode(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition);
				// ReadStructuralFeatureAction measurementListReadStructuralFeatureAction
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction->setThisExecutableNodePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction->setName("measurementListReadStructuralFeatureAction");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction->setStructuralFeature(MeasureStation_Model_WaferHeightMap_measurements);
					// InputPin object
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object->setName("object");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction->setObject(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object);
					// OutputPin result
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result->setName("result");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result->setType(MeasureStation_Model_MarkMeasurement);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result->setUpper(10000);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result->setLower(0);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction->setResult(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addNode(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction);
				// ReadSelfAction This
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This->setThisExecutableNodePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This->setName("This");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin108
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108->setName("OutputPin108");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This->setResult(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addNode(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This);
				// AddStructuralFeatureValueAction measurementsListAddStructuralFeatureValueAction
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction->setThisExecutableNodePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction->setName("measurementsListAddStructuralFeatureValueAction");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction->setStructuralFeature(MeasureStation_Model_WaferHeightMap_measurements);
					// InputPin object
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object->setName("object");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction->setObject(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object);
					// InputPin value
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value->setName("value");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value->setType(MeasureStation_Model_MarkMeasurement);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction->setValue(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value);
					// OutputPin result
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result->setName("result");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction->setResult(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result);
					// InputPin insertAt
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt->setName("insertAt");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_UnlimitedNatural);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction->setInsertAt(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addNode(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction);
				// ObjectFlow ObjectFlow96 from result to object
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96->setThisActivityEdgePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96->setName("ObjectFlow96");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96->setSource(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96->setTarget(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object);
					// LiteralBoolean LiteralBoolean98
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralBoolean98->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralBoolean98);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralBoolean98->setName("LiteralBoolean98");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralBoolean98->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralBoolean98->setValue(true);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96->setGuard(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralBoolean98);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addEdge(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96);
				// ObjectFlow ObjectFlow105 from OutputPin108 to object
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105->setThisActivityEdgePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105->setName("ObjectFlow105");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105->setSource(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105->setTarget(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object);
					// LiteralBoolean LiteralBoolean107
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralBoolean107->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralBoolean107);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralBoolean107->setName("LiteralBoolean107");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralBoolean107->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralBoolean107->setValue(true);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105->setGuard(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralBoolean107);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addEdge(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105);
				// ObjectFlow ObjectFlow112 from OutputPin89 to insertAt
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112->setThisActivityEdgePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112->setName("ObjectFlow112");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112->setSource(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112->setTarget(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt);
					// LiteralBoolean LiteralBoolean113
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralBoolean113->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralBoolean113);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralBoolean113->setName("LiteralBoolean113");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralBoolean113->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralBoolean113->setValue(true);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112->setGuard(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralBoolean113);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addEdge(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112);
				// ObjectFlow ObjectFlow115 from newMeasurementInput to value
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115->setThisActivityEdgePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115->setName("ObjectFlow115");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115->setSource(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115->setTarget(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value);
					// LiteralBoolean LiteralBoolean116
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralBoolean116->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralBoolean116);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralBoolean116->setName("LiteralBoolean116");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralBoolean116->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralBoolean116->setValue(true);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115->setGuard(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralBoolean116);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addEdge(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115);
		MeasureStation_Model_WaferHeightMap->addOwnedBehavior(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl);
		
			// Operation AddMarkMeasurement_MarkMeasurement
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement->setThisOperationPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement->setName("AddMarkMeasurement");
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement->setVisibility(VisibilityKind::public_);
				// Parameter measurement
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement->setName("measurement");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement->setType(MeasureStation_Model_MarkMeasurement);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement->addOwnedParameter(MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement->addMethod(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl);
		MeasureStation_Model_WaferHeightMap->addOwnedOperation(MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement);
	MeasureStation_Model->addPackagedElement(MeasureStation_Model_WaferHeightMap);
		// Class Position
		MeasureStation_Model_Position->setThisClass_Ptr(MeasureStation_Model_Position);
		MeasureStation_Model_Position->setName("Position");
		MeasureStation_Model_Position->setVisibility(VisibilityKind::public_);
		
			// Property xpos
			MeasureStation_Model_Position_xpos->setThisElementPtr(MeasureStation_Model_Position_xpos);
			MeasureStation_Model_Position_xpos->setName("xpos");
			MeasureStation_Model_Position_xpos->setVisibility(VisibilityKind::private_);
			
			MeasureStation_Model_Position_xpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				// LiteralReal LiteralReal155
				MeasureStation_Model_Position_xpos_LiteralReal155->setThisElementPtr(MeasureStation_Model_Position_xpos_LiteralReal155);
				MeasureStation_Model_Position_xpos_LiteralReal155->setName("LiteralReal155");
				MeasureStation_Model_Position_xpos_LiteralReal155->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_xpos_LiteralReal155->setValue(0.0f);
			MeasureStation_Model_Position_xpos->setDefaultValue(MeasureStation_Model_Position_xpos_LiteralReal155);
		MeasureStation_Model_Position->addOwnedAttribute(MeasureStation_Model_Position_xpos);
			// Property ypos
			MeasureStation_Model_Position_ypos->setThisElementPtr(MeasureStation_Model_Position_ypos);
			MeasureStation_Model_Position_ypos->setName("ypos");
			MeasureStation_Model_Position_ypos->setVisibility(VisibilityKind::private_);
			
			MeasureStation_Model_Position_ypos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				// LiteralReal LiteralReal180
				MeasureStation_Model_Position_ypos_LiteralReal180->setThisElementPtr(MeasureStation_Model_Position_ypos_LiteralReal180);
				MeasureStation_Model_Position_ypos_LiteralReal180->setName("LiteralReal180");
				MeasureStation_Model_Position_ypos_LiteralReal180->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_ypos_LiteralReal180->setValue(0.0f);
			MeasureStation_Model_Position_ypos->setDefaultValue(MeasureStation_Model_Position_ypos_LiteralReal180);
		MeasureStation_Model_Position->addOwnedAttribute(MeasureStation_Model_Position_ypos);
		// Activity GetYposImpl
			MeasureStation_Model_Position_GetYposImpl->setThisActivityPtr(MeasureStation_Model_Position_GetYposImpl);
			MeasureStation_Model_Position_GetYposImpl->setName("GetYposImpl");
			MeasureStation_Model_Position_GetYposImpl->setVisibility(VisibilityKind::public_);
			
				// Parameter Parameter134
				MeasureStation_Model_Position_GetYposImpl_Parameter134->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_Parameter134);
				MeasureStation_Model_Position_GetYposImpl_Parameter134->setName("Parameter134");
				MeasureStation_Model_Position_GetYposImpl_Parameter134->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetYposImpl_Parameter134->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_GetYposImpl_Parameter134->setDirection(ParameterDirectionKind::return_);
			MeasureStation_Model_Position_GetYposImpl->addOwnedParameter(MeasureStation_Model_Position_GetYposImpl_Parameter134);
				// ReadStructuralFeatureAction ReadYpos
				MeasureStation_Model_Position_GetYposImpl_ReadYpos->setThisExecutableNodePtr(MeasureStation_Model_Position_GetYposImpl_ReadYpos);
				MeasureStation_Model_Position_GetYposImpl_ReadYpos->setName("ReadYpos");
				MeasureStation_Model_Position_GetYposImpl_ReadYpos->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_GetYposImpl_ReadYpos->setStructuralFeature(MeasureStation_Model_Position_ypos);
					// InputPin object
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_object->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_ReadYpos_object);
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_object->setName("object");
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_object->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_object->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_GetYposImpl_ReadYpos->setObject(MeasureStation_Model_Position_GetYposImpl_ReadYpos_object);
					// OutputPin result
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_result->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_ReadYpos_result);
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_result->setName("result");
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_GetYposImpl_ReadYpos->setResult(MeasureStation_Model_Position_GetYposImpl_ReadYpos_result);
			MeasureStation_Model_Position_GetYposImpl->addNode(MeasureStation_Model_Position_GetYposImpl_ReadYpos);
				// ActivityParameterNode GetYposResult
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_GetYposResult);
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setName("GetYposResult");
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setParameter(MeasureStation_Model_Position_GetYposImpl_Parameter134);
			MeasureStation_Model_Position_GetYposImpl->addNode(MeasureStation_Model_Position_GetYposImpl_GetYposResult);
				// ReadSelfAction This
				MeasureStation_Model_Position_GetYposImpl_This->setThisExecutableNodePtr(MeasureStation_Model_Position_GetYposImpl_This);
				MeasureStation_Model_Position_GetYposImpl_This->setName("This");
				MeasureStation_Model_Position_GetYposImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin147
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin147->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_This_OutputPin147);
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin147->setName("OutputPin147");
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin147->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin147->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_GetYposImpl_This->setResult(MeasureStation_Model_Position_GetYposImpl_This_OutputPin147);
			MeasureStation_Model_Position_GetYposImpl->addNode(MeasureStation_Model_Position_GetYposImpl_This);
				// ObjectFlow ObjectFlow137 from result to GetYposResult
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow137->setThisActivityEdgePtr(MeasureStation_Model_Position_GetYposImpl_ObjectFlow137);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow137->setName("ObjectFlow137");
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow137->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow137->setSource(MeasureStation_Model_Position_GetYposImpl_ReadYpos_result);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow137->setTarget(MeasureStation_Model_Position_GetYposImpl_GetYposResult);
					// LiteralBoolean LiteralBoolean138
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralBoolean138->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralBoolean138);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralBoolean138->setName("LiteralBoolean138");
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralBoolean138->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralBoolean138->setValue(true);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow137->setGuard(MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralBoolean138);
			MeasureStation_Model_Position_GetYposImpl->addEdge(MeasureStation_Model_Position_GetYposImpl_ObjectFlow137);
				// ObjectFlow ObjectFlow151 from OutputPin147 to object
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow151->setThisActivityEdgePtr(MeasureStation_Model_Position_GetYposImpl_ObjectFlow151);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow151->setName("ObjectFlow151");
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow151->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow151->setSource(MeasureStation_Model_Position_GetYposImpl_This_OutputPin147);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow151->setTarget(MeasureStation_Model_Position_GetYposImpl_ReadYpos_object);
					// LiteralBoolean LiteralBoolean152
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralBoolean152->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralBoolean152);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralBoolean152->setName("LiteralBoolean152");
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralBoolean152->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralBoolean152->setValue(true);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow151->setGuard(MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralBoolean152);
			MeasureStation_Model_Position_GetYposImpl->addEdge(MeasureStation_Model_Position_GetYposImpl_ObjectFlow151);
		MeasureStation_Model_Position->addOwnedBehavior(MeasureStation_Model_Position_GetYposImpl);
			// Activity GetXposImpl
			MeasureStation_Model_Position_GetXposImpl->setThisActivityPtr(MeasureStation_Model_Position_GetXposImpl);
			MeasureStation_Model_Position_GetXposImpl->setName("GetXposImpl");
			MeasureStation_Model_Position_GetXposImpl->setVisibility(VisibilityKind::public_);
			
				// Parameter xposValue
				MeasureStation_Model_Position_GetXposImpl_xposValue->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_xposValue);
				MeasureStation_Model_Position_GetXposImpl_xposValue->setName("xposValue");
				MeasureStation_Model_Position_GetXposImpl_xposValue->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetXposImpl_xposValue->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_GetXposImpl_xposValue->setDirection(ParameterDirectionKind::return_);
			MeasureStation_Model_Position_GetXposImpl->addOwnedParameter(MeasureStation_Model_Position_GetXposImpl_xposValue);
				// ReadSelfAction This
				MeasureStation_Model_Position_GetXposImpl_This->setThisExecutableNodePtr(MeasureStation_Model_Position_GetXposImpl_This);
				MeasureStation_Model_Position_GetXposImpl_This->setName("This");
				MeasureStation_Model_Position_GetXposImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin157
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin157->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_This_OutputPin157);
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin157->setName("OutputPin157");
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin157->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin157->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_GetXposImpl_This->setResult(MeasureStation_Model_Position_GetXposImpl_This_OutputPin157);
			MeasureStation_Model_Position_GetXposImpl->addNode(MeasureStation_Model_Position_GetXposImpl_This);
				// ActivityParameterNode GetXposResult
				MeasureStation_Model_Position_GetXposImpl_GetXposResult->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_GetXposResult);
				MeasureStation_Model_Position_GetXposImpl_GetXposResult->setName("GetXposResult");
				MeasureStation_Model_Position_GetXposImpl_GetXposResult->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetXposImpl_GetXposResult->setParameter(MeasureStation_Model_Position_GetXposImpl_xposValue);
			MeasureStation_Model_Position_GetXposImpl->addNode(MeasureStation_Model_Position_GetXposImpl_GetXposResult);
				// ReadStructuralFeatureAction ReadXpos
				MeasureStation_Model_Position_GetXposImpl_ReadXpos->setThisExecutableNodePtr(MeasureStation_Model_Position_GetXposImpl_ReadXpos);
				MeasureStation_Model_Position_GetXposImpl_ReadXpos->setName("ReadXpos");
				MeasureStation_Model_Position_GetXposImpl_ReadXpos->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_GetXposImpl_ReadXpos->setStructuralFeature(MeasureStation_Model_Position_xpos);
					// InputPin object
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_object->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_ReadXpos_object);
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_object->setName("object");
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_object->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_object->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_GetXposImpl_ReadXpos->setObject(MeasureStation_Model_Position_GetXposImpl_ReadXpos_object);
					// OutputPin result
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_result->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_ReadXpos_result);
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_result->setName("result");
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_GetXposImpl_ReadXpos->setResult(MeasureStation_Model_Position_GetXposImpl_ReadXpos_result);
			MeasureStation_Model_Position_GetXposImpl->addNode(MeasureStation_Model_Position_GetXposImpl_ReadXpos);
				// ObjectFlow ObjectFlow162 from result to GetXposResult
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow162->setThisActivityEdgePtr(MeasureStation_Model_Position_GetXposImpl_ObjectFlow162);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow162->setName("ObjectFlow162");
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow162->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow162->setSource(MeasureStation_Model_Position_GetXposImpl_ReadXpos_result);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow162->setTarget(MeasureStation_Model_Position_GetXposImpl_GetXposResult);
					// LiteralBoolean LiteralBoolean164
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralBoolean164->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralBoolean164);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralBoolean164->setName("LiteralBoolean164");
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralBoolean164->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralBoolean164->setValue(true);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow162->setGuard(MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralBoolean164);
			MeasureStation_Model_Position_GetXposImpl->addEdge(MeasureStation_Model_Position_GetXposImpl_ObjectFlow162);
				// ObjectFlow ObjectFlow173 from OutputPin157 to object
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow173->setThisActivityEdgePtr(MeasureStation_Model_Position_GetXposImpl_ObjectFlow173);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow173->setName("ObjectFlow173");
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow173->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow173->setSource(MeasureStation_Model_Position_GetXposImpl_This_OutputPin157);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow173->setTarget(MeasureStation_Model_Position_GetXposImpl_ReadXpos_object);
					// LiteralBoolean LiteralBoolean174
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralBoolean174->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralBoolean174);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralBoolean174->setName("LiteralBoolean174");
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralBoolean174->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralBoolean174->setValue(true);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow173->setGuard(MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralBoolean174);
			MeasureStation_Model_Position_GetXposImpl->addEdge(MeasureStation_Model_Position_GetXposImpl_ObjectFlow173);
		MeasureStation_Model_Position->addOwnedBehavior(MeasureStation_Model_Position_GetXposImpl);
		
			// Operation Real_GetXpos
			MeasureStation_Model_Position_Real_GetXpos->setThisOperationPtr(MeasureStation_Model_Position_Real_GetXpos);
			MeasureStation_Model_Position_Real_GetXpos->setName("GetXpos");
			MeasureStation_Model_Position_Real_GetXpos->setVisibility(VisibilityKind::public_);
				// Parameter xposValue
				MeasureStation_Model_Position_Real_GetXpos_xposValue->setThisElementPtr(MeasureStation_Model_Position_Real_GetXpos_xposValue);
				MeasureStation_Model_Position_Real_GetXpos_xposValue->setName("xposValue");
				MeasureStation_Model_Position_Real_GetXpos_xposValue->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_Real_GetXpos_xposValue->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_Real_GetXpos_xposValue->setDirection(ParameterDirectionKind::return_);
			MeasureStation_Model_Position_Real_GetXpos->addOwnedParameter(MeasureStation_Model_Position_Real_GetXpos_xposValue);
			MeasureStation_Model_Position_Real_GetXpos->addMethod(MeasureStation_Model_Position_GetXposImpl);
		MeasureStation_Model_Position->addOwnedOperation(MeasureStation_Model_Position_Real_GetXpos);
			// Operation Real_GetYpos
			MeasureStation_Model_Position_Real_GetYpos->setThisOperationPtr(MeasureStation_Model_Position_Real_GetYpos);
			MeasureStation_Model_Position_Real_GetYpos->setName("GetYpos");
			MeasureStation_Model_Position_Real_GetYpos->setVisibility(VisibilityKind::public_);
				// Parameter Parameter181
				MeasureStation_Model_Position_Real_GetYpos_Parameter181->setThisElementPtr(MeasureStation_Model_Position_Real_GetYpos_Parameter181);
				MeasureStation_Model_Position_Real_GetYpos_Parameter181->setName("Parameter181");
				MeasureStation_Model_Position_Real_GetYpos_Parameter181->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_Real_GetYpos_Parameter181->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_Real_GetYpos_Parameter181->setDirection(ParameterDirectionKind::return_);
			MeasureStation_Model_Position_Real_GetYpos->addOwnedParameter(MeasureStation_Model_Position_Real_GetYpos_Parameter181);
			MeasureStation_Model_Position_Real_GetYpos->addMethod(MeasureStation_Model_Position_GetYposImpl);
		MeasureStation_Model_Position->addOwnedOperation(MeasureStation_Model_Position_Real_GetYpos);
	MeasureStation_Model->addPackagedElement(MeasureStation_Model_Position);
}
