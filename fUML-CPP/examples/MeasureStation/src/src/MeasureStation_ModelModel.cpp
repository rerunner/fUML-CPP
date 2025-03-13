/*
 * MeasureStation_ModelModel.cpp
 * 
 * Auto-generated file
 */

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallBehaviorAction.h>
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
#include <uml/activities/ActivityFinalNode.h>
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
		MeasureStation_Model_Position.reset(new Class_());
		this->addToElementRepository("Position", MeasureStation_Model_Position);
			MeasureStation_Model_Position_GetYposImpl.reset(new Activity());
			this->addToElementRepository("GetYposImpl", MeasureStation_Model_Position_GetYposImpl);
				MeasureStation_Model_Position_GetYposImpl_ReadYpos.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("ReadYpos", MeasureStation_Model_Position_GetYposImpl_ReadYpos);
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_Position_GetYposImpl_ReadYpos_object);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger0.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger0", MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger0);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger1.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger1", MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger1);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralUnlimitedNatural2.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural2", MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralUnlimitedNatural2);
					MeasureStation_Model_Position_GetYposImpl_ReadYpos_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_Position_GetYposImpl_ReadYpos_result);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger3.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger3", MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger3);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger4.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger4", MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger4);
						MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralUnlimitedNatural5.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural5", MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralUnlimitedNatural5);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow6.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow6", MeasureStation_Model_Position_GetYposImpl_ObjectFlow6);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralBoolean7.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean7", MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralBoolean7);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralInteger8);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow9.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow9", MeasureStation_Model_Position_GetYposImpl_ObjectFlow9);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralInteger10);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralBoolean11.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean11", MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralBoolean11);
				MeasureStation_Model_Position_GetYposImpl_Parameter12.reset(new Parameter());
				this->addToElementRepository("Parameter12", MeasureStation_Model_Position_GetYposImpl_Parameter12);
					MeasureStation_Model_Position_GetYposImpl_Parameter12_LiteralInteger13.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger13", MeasureStation_Model_Position_GetYposImpl_Parameter12_LiteralInteger13);
					MeasureStation_Model_Position_GetYposImpl_Parameter12_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural14", MeasureStation_Model_Position_GetYposImpl_Parameter12_LiteralUnlimitedNatural14);
				MeasureStation_Model_Position_GetYposImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_Position_GetYposImpl_This);
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin15.reset(new OutputPin());
					this->addToElementRepository("OutputPin15", MeasureStation_Model_Position_GetYposImpl_This_OutputPin15);
						MeasureStation_Model_Position_GetYposImpl_This_OutputPin15_LiteralInteger16.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger16", MeasureStation_Model_Position_GetYposImpl_This_OutputPin15_LiteralInteger16);
						MeasureStation_Model_Position_GetYposImpl_This_OutputPin15_LiteralUnlimitedNatural17.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural17", MeasureStation_Model_Position_GetYposImpl_This_OutputPin15_LiteralUnlimitedNatural17);
						MeasureStation_Model_Position_GetYposImpl_This_OutputPin15_LiteralInteger18.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger18", MeasureStation_Model_Position_GetYposImpl_This_OutputPin15_LiteralInteger18);
				MeasureStation_Model_Position_GetYposImpl_GetYposResult.reset(new ActivityParameterNode());
				this->addToElementRepository("GetYposResult", MeasureStation_Model_Position_GetYposImpl_GetYposResult);
					MeasureStation_Model_Position_GetYposImpl_GetYposResult_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", MeasureStation_Model_Position_GetYposImpl_GetYposResult_LiteralInteger19);
			MeasureStation_Model_Position_SetYPos_Real.reset(new Operation());
			this->addToElementRepository("SetYPos_Real", MeasureStation_Model_Position_SetYPos_Real);
				MeasureStation_Model_Position_SetYPos_Real_yPos.reset(new Parameter());
				this->addToElementRepository("yPos", MeasureStation_Model_Position_SetYPos_Real_yPos);
					MeasureStation_Model_Position_SetYPos_Real_yPos_LiteralInteger20.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger20", MeasureStation_Model_Position_SetYPos_Real_yPos_LiteralInteger20);
					MeasureStation_Model_Position_SetYPos_Real_yPos_LiteralUnlimitedNatural21.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural21", MeasureStation_Model_Position_SetYPos_Real_yPos_LiteralUnlimitedNatural21);
			MeasureStation_Model_Position_xpos.reset(new Property());
			this->addToElementRepository("xpos", MeasureStation_Model_Position_xpos);
				MeasureStation_Model_Position_xpos_LiteralInteger22.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger22", MeasureStation_Model_Position_xpos_LiteralInteger22);
				MeasureStation_Model_Position_xpos_LiteralReal23.reset(new LiteralReal());
				this->addToElementRepository("LiteralReal23", MeasureStation_Model_Position_xpos_LiteralReal23);
				MeasureStation_Model_Position_xpos_LiteralUnlimitedNatural24.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural24", MeasureStation_Model_Position_xpos_LiteralUnlimitedNatural24);
			MeasureStation_Model_Position_GetXposImpl.reset(new Activity());
			this->addToElementRepository("GetXposImpl", MeasureStation_Model_Position_GetXposImpl);
				MeasureStation_Model_Position_GetXposImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_Position_GetXposImpl_This);
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin25.reset(new OutputPin());
					this->addToElementRepository("OutputPin25", MeasureStation_Model_Position_GetXposImpl_This_OutputPin25);
						MeasureStation_Model_Position_GetXposImpl_This_OutputPin25_LiteralUnlimitedNatural26.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural26", MeasureStation_Model_Position_GetXposImpl_This_OutputPin25_LiteralUnlimitedNatural26);
						MeasureStation_Model_Position_GetXposImpl_This_OutputPin25_LiteralInteger27.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger27", MeasureStation_Model_Position_GetXposImpl_This_OutputPin25_LiteralInteger27);
						MeasureStation_Model_Position_GetXposImpl_This_OutputPin25_LiteralInteger28.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger28", MeasureStation_Model_Position_GetXposImpl_This_OutputPin25_LiteralInteger28);
				MeasureStation_Model_Position_GetXposImpl_xposValue.reset(new Parameter());
				this->addToElementRepository("xposValue", MeasureStation_Model_Position_GetXposImpl_xposValue);
					MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralInteger29.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger29", MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralInteger29);
					MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural30", MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralUnlimitedNatural30);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow31.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow31", MeasureStation_Model_Position_GetXposImpl_ObjectFlow31);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralBoolean32.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean32", MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralBoolean32);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralInteger33);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow34.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow34", MeasureStation_Model_Position_GetXposImpl_ObjectFlow34);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralBoolean35.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean35", MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralBoolean35);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralInteger36.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger36", MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralInteger36);
				MeasureStation_Model_Position_GetXposImpl_ReadXpos.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("ReadXpos", MeasureStation_Model_Position_GetXposImpl_ReadXpos);
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_Position_GetXposImpl_ReadXpos_object);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger37.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger37", MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger37);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger38.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger38", MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger38);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural39", MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralUnlimitedNatural39);
					MeasureStation_Model_Position_GetXposImpl_ReadXpos_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_Position_GetXposImpl_ReadXpos_result);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger40.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger40", MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger40);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger41.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger41", MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger41);
						MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural42", MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralUnlimitedNatural42);
				MeasureStation_Model_Position_GetXposImpl_GetXposResult.reset(new ActivityParameterNode());
				this->addToElementRepository("GetXposResult", MeasureStation_Model_Position_GetXposImpl_GetXposResult);
					MeasureStation_Model_Position_GetXposImpl_GetXposResult_LiteralInteger43.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger43", MeasureStation_Model_Position_GetXposImpl_GetXposResult_LiteralInteger43);
			MeasureStation_Model_Position_Real_GetYpos.reset(new Operation());
			this->addToElementRepository("Real_GetYpos", MeasureStation_Model_Position_Real_GetYpos);
				MeasureStation_Model_Position_Real_GetYpos_Parameter44.reset(new Parameter());
				this->addToElementRepository("Parameter44", MeasureStation_Model_Position_Real_GetYpos_Parameter44);
					MeasureStation_Model_Position_Real_GetYpos_Parameter44_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", MeasureStation_Model_Position_Real_GetYpos_Parameter44_LiteralInteger45);
					MeasureStation_Model_Position_Real_GetYpos_Parameter44_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural46", MeasureStation_Model_Position_Real_GetYpos_Parameter44_LiteralUnlimitedNatural46);
			MeasureStation_Model_Position_ypos.reset(new Property());
			this->addToElementRepository("ypos", MeasureStation_Model_Position_ypos);
				MeasureStation_Model_Position_ypos_LiteralReal47.reset(new LiteralReal());
				this->addToElementRepository("LiteralReal47", MeasureStation_Model_Position_ypos_LiteralReal47);
				MeasureStation_Model_Position_ypos_LiteralInteger48.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger48", MeasureStation_Model_Position_ypos_LiteralInteger48);
				MeasureStation_Model_Position_ypos_LiteralUnlimitedNatural49.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural49", MeasureStation_Model_Position_ypos_LiteralUnlimitedNatural49);
			MeasureStation_Model_Position_SetXPosImpl.reset(new Activity());
			this->addToElementRepository("SetXPosImpl", MeasureStation_Model_Position_SetXPosImpl);
				MeasureStation_Model_Position_SetXPosImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_Position_SetXPosImpl_This);
					MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50.reset(new OutputPin());
					this->addToElementRepository("OutputPin50", MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50);
						MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50_LiteralUnlimitedNatural51.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural51", MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50_LiteralUnlimitedNatural51);
						MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50_LiteralInteger52.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger52", MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50_LiteralInteger52);
						MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50_LiteralInteger53.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger53", MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50_LiteralInteger53);
				MeasureStation_Model_Position_SetXPosImpl_SetXPosValue.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("SetXPosValue", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue);
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value.reset(new InputPin());
					this->addToElementRepository("value", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value);
						MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural54", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value_LiteralUnlimitedNatural54);
						MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value_LiteralInteger55.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger55", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value_LiteralInteger55);
						MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value_LiteralInteger56.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger56", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value_LiteralInteger56);
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result);
						MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural57", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result_LiteralUnlimitedNatural57);
						MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result_LiteralInteger58.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger58", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result_LiteralInteger58);
						MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result_LiteralInteger59);
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object);
						MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural60", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object_LiteralUnlimitedNatural60);
						MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object_LiteralInteger61.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger61", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object_LiteralInteger61);
						MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object_LiteralInteger62.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger62", MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object_LiteralInteger62);
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow63", MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63);
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralBoolean64.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean64", MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralBoolean64);
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralInteger65.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger65", MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralInteger65);
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow66", MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66);
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralInteger67.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger67", MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralInteger67);
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralBoolean68.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean68", MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralBoolean68);
				MeasureStation_Model_Position_SetXPosImpl_xPos.reset(new Parameter());
				this->addToElementRepository("xPos", MeasureStation_Model_Position_SetXPosImpl_xPos);
					MeasureStation_Model_Position_SetXPosImpl_xPos_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", MeasureStation_Model_Position_SetXPosImpl_xPos_LiteralInteger69);
					MeasureStation_Model_Position_SetXPosImpl_xPos_LiteralUnlimitedNatural70.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural70", MeasureStation_Model_Position_SetXPosImpl_xPos_LiteralUnlimitedNatural70);
				MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("xPosActivityParameterNode", MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode);
					MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode_LiteralInteger71.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger71", MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode_LiteralInteger71);
			MeasureStation_Model_Position_SetXPos_Real.reset(new Operation());
			this->addToElementRepository("SetXPos_Real", MeasureStation_Model_Position_SetXPos_Real);
				MeasureStation_Model_Position_SetXPos_Real_xPos.reset(new Parameter());
				this->addToElementRepository("xPos", MeasureStation_Model_Position_SetXPos_Real_xPos);
					MeasureStation_Model_Position_SetXPos_Real_xPos_LiteralInteger72.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger72", MeasureStation_Model_Position_SetXPos_Real_xPos_LiteralInteger72);
					MeasureStation_Model_Position_SetXPos_Real_xPos_LiteralUnlimitedNatural73.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural73", MeasureStation_Model_Position_SetXPos_Real_xPos_LiteralUnlimitedNatural73);
			MeasureStation_Model_Position_SetYPosImpl.reset(new Activity());
			this->addToElementRepository("SetYPosImpl", MeasureStation_Model_Position_SetYPosImpl);
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow74", MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74);
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralInteger75.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger75", MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralInteger75);
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralBoolean76.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean76", MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralBoolean76);
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow77", MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77);
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralInteger78.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger78", MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralInteger78);
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralBoolean79.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean79", MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralBoolean79);
				MeasureStation_Model_Position_SetYPosImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_Position_SetYPosImpl_This);
					MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80.reset(new OutputPin());
					this->addToElementRepository("OutputPin80", MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80);
						MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80_LiteralUnlimitedNatural81.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural81", MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80_LiteralUnlimitedNatural81);
						MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80_LiteralInteger82.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger82", MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80_LiteralInteger82);
						MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80_LiteralInteger83.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger83", MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80_LiteralInteger83);
				MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("yPosActivityParameterNode", MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode);
					MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode_LiteralInteger84.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger84", MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode_LiteralInteger84);
				MeasureStation_Model_Position_SetYPosImpl_SetYPosValue.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("SetYPosValue", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue);
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object);
						MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object_LiteralInteger85.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger85", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object_LiteralInteger85);
						MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object_LiteralInteger86.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger86", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object_LiteralInteger86);
						MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object_LiteralUnlimitedNatural87.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural87", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object_LiteralUnlimitedNatural87);
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value.reset(new InputPin());
					this->addToElementRepository("value", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value);
						MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value_LiteralInteger88.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger88", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value_LiteralInteger88);
						MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value_LiteralUnlimitedNatural89.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural89", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value_LiteralUnlimitedNatural89);
						MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value_LiteralInteger90.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger90", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value_LiteralInteger90);
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result);
						MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result_LiteralInteger91.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger91", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result_LiteralInteger91);
						MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result_LiteralInteger92.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger92", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result_LiteralInteger92);
						MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural93", MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result_LiteralUnlimitedNatural93);
				MeasureStation_Model_Position_SetYPosImpl_yPos.reset(new Parameter());
				this->addToElementRepository("yPos", MeasureStation_Model_Position_SetYPosImpl_yPos);
					MeasureStation_Model_Position_SetYPosImpl_yPos_LiteralInteger94.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger94", MeasureStation_Model_Position_SetYPosImpl_yPos_LiteralInteger94);
					MeasureStation_Model_Position_SetYPosImpl_yPos_LiteralUnlimitedNatural95.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural95", MeasureStation_Model_Position_SetYPosImpl_yPos_LiteralUnlimitedNatural95);
			MeasureStation_Model_Position_Real_GetXpos.reset(new Operation());
			this->addToElementRepository("Real_GetXpos", MeasureStation_Model_Position_Real_GetXpos);
				MeasureStation_Model_Position_Real_GetXpos_xposValue.reset(new Parameter());
				this->addToElementRepository("xposValue", MeasureStation_Model_Position_Real_GetXpos_xposValue);
					MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralUnlimitedNatural96.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural96", MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralUnlimitedNatural96);
					MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralInteger97.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger97", MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralInteger97);
		MeasureStation_Model_MeasureStation.reset(new Class_());
		this->addToElementRepository("MeasureStation", MeasureStation_Model_MeasureStation);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity.reset(new Activity());
			this->addToElementRepository("MeasureWaferHeightMapActivity", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow98", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralBoolean99.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean99", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralBoolean99);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralInteger100.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger100", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralInteger100);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow101", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralBoolean102.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean102", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralBoolean102);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralInteger103.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger103", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralInteger103);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement.reset(new CreateObjectAction());
				this->addToElementRepository("CreateNewMarkMeasurement", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result_LiteralInteger104.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger104", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result_LiteralInteger104);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result_LiteralUnlimitedNatural105.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural105", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result_LiteralUnlimitedNatural105);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result_LiteralInteger106.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger106", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result_LiteralInteger106);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow107.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow107", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow107);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow108.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow108", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow108);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow109.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow109", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow109);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer.reset(new Parameter());
				this->addToElementRepository("currentWafer", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralInteger110.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger110", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralInteger110);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural111", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralUnlimitedNatural111);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow112", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralBoolean113.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean113", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralBoolean113);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralInteger114.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger114", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralInteger114);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow115", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralInteger116.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger116", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralInteger116);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralBoolean117.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean117", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralBoolean117);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow118", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralBoolean119.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean119", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralBoolean119);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralInteger120.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger120", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralInteger120);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap.reset(new Parameter());
				this->addToElementRepository("resultingWaferHeightMap", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralUnlimitedNatural121.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural121", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralUnlimitedNatural121);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralInteger122.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger122", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralInteger122);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeResultingWaferHeightMap", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap_LiteralInteger123.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger123", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap_LiteralInteger123);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0.reset(new ValueSpecificationAction());
				this->addToElementRepository("X at 0.0", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result_LiteralInteger124.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger124", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result_LiteralInteger124);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result_LiteralUnlimitedNatural125.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural125", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result_LiteralUnlimitedNatural125);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result_LiteralInteger126.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger126", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result_LiteralInteger126);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_LiteralReal127.reset(new LiteralReal());
					this->addToElementRepository("LiteralReal127", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_LiteralReal127);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement.reset(new CallOperationAction());
				this->addToElementRepository("CallOperationAddMarkMeasurement", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target.reset(new InputPin());
					this->addToElementRepository("target", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target_LiteralUnlimitedNatural128.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural128", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target_LiteralUnlimitedNatural128);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target_LiteralInteger129.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger129", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target_LiteralInteger129);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target_LiteralInteger130.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger130", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target_LiteralInteger130);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement.reset(new InputPin());
					this->addToElementRepository("measurement", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement_LiteralInteger131.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger131", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement_LiteralInteger131);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement_LiteralInteger132.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger132", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement_LiteralInteger132);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement_LiteralUnlimitedNatural133.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural133", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement_LiteralUnlimitedNatural133);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID.reset(new ActivityParameterNode());
				this->addToElementRepository("ActivityParameterNodeCurrentWaferID", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID_LiteralInteger134.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger134", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID_LiteralInteger134);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow135", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralBoolean136.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean136", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralBoolean136);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralInteger137.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger137", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralInteger137);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement.reset(new CallOperationAction());
				this->addToElementRepository("CallOperationDoMeasurement", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target.reset(new InputPin());
					this->addToElementRepository("target", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target_LiteralUnlimitedNatural138.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural138", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target_LiteralUnlimitedNatural138);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target_LiteralInteger139.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger139", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target_LiteralInteger139);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target_LiteralInteger140.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger140", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target_LiteralInteger140);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos.reset(new InputPin());
					this->addToElementRepository("atXpos", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos_LiteralInteger141.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger141", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos_LiteralInteger141);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos_LiteralInteger142.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger142", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos_LiteralInteger142);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos_LiteralUnlimitedNatural143.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural143", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos_LiteralUnlimitedNatural143);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos.reset(new InputPin());
					this->addToElementRepository("atYpos", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos_LiteralUnlimitedNatural144.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural144", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos_LiteralUnlimitedNatural144);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos_LiteralInteger145.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger145", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos_LiteralInteger145);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos_LiteralInteger146.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger146", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos_LiteralInteger146);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0.reset(new ValueSpecificationAction());
				this->addToElementRepository("Y at 0.0", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_LiteralReal147.reset(new LiteralReal());
					this->addToElementRepository("LiteralReal147", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_LiteralReal147);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result_LiteralInteger148.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger148", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result_LiteralInteger148);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result_LiteralInteger149.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger149", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result_LiteralInteger149);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result_LiteralUnlimitedNatural150.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural150", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result_LiteralUnlimitedNatural150);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityStart.reset(new InitialNode());
				this->addToElementRepository("ActivityStart", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityStart);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement.reset(new ForkNode());
				this->addToElementRepository("ForkNodeMarkMeasurement", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow151", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralInteger152.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger152", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralInteger152);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralBoolean153.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean153", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralBoolean153);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap.reset(new CreateObjectAction());
				this->addToElementRepository("CreateNewWaferHeightMap", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralUnlimitedNatural154.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural154", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralUnlimitedNatural154);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger155.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger155", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger155);
						MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger156.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger156", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger156);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow157", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralBoolean158.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean158", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralBoolean158);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralInteger159.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger159", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralInteger159);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap.reset(new ForkNode());
				this->addToElementRepository("ForkNodeWaferHeightMap", MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap);
			MeasureStation_Model_MeasureStation_InitializeActivity.reset(new Activity());
			this->addToElementRepository("InitializeActivity", MeasureStation_Model_MeasureStation_InitializeActivity);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow160", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralInteger161.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger161", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralInteger161);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralBoolean162.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean162", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralBoolean162);
				MeasureStation_Model_MeasureStation_InitializeActivity_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_MeasureStation_InitializeActivity_This);
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163.reset(new OutputPin());
					this->addToElementRepository("OutputPin163", MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163);
						MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163_LiteralUnlimitedNatural164.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural164", MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163_LiteralUnlimitedNatural164);
						MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163_LiteralInteger165.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger165", MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163_LiteralInteger165);
						MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163_LiteralInteger166.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger166", MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163_LiteralInteger166);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow167", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralBoolean168.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean168", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralBoolean168);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralInteger169.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger169", MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralInteger169);
				MeasureStation_Model_MeasureStation_InitializeActivity_0.reset(new ValueSpecificationAction());
				this->addToElementRepository("0", MeasureStation_Model_MeasureStation_InitializeActivity_0);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MeasureStation_InitializeActivity_0_result);
						MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralUnlimitedNatural170.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural170", MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralUnlimitedNatural170);
						MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger171.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger171", MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger171);
						MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger172.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger172", MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger172);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger173.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger173", MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger173);
				MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set NrOfMeasurements", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralUnlimitedNatural174.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural174", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralUnlimitedNatural174);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralInteger175.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger175", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralInteger175);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value.reset(new InputPin());
					this->addToElementRepository("value", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralUnlimitedNatural176.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural176", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralUnlimitedNatural176);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger177.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger177", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger177);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger178.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger178", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger178);
					MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralUnlimitedNatural179.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural179", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralUnlimitedNatural179);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger180.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger180", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger180);
						MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger181.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger181", MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger181);
			MeasureStation_Model_MeasureStation_nrOfMeasurements.reset(new Property());
			this->addToElementRepository("nrOfMeasurements", MeasureStation_Model_MeasureStation_nrOfMeasurements);
				MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralUnlimitedNatural182.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural182", MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralUnlimitedNatural182);
				MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralInteger183.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger183", MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralInteger183);
			MeasureStation_Model_MeasureStation_waferHeightMap.reset(new Property());
			this->addToElementRepository("waferHeightMap", MeasureStation_Model_MeasureStation_waferHeightMap);
				MeasureStation_Model_MeasureStation_waferHeightMap_LiteralUnlimitedNatural184.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural184", MeasureStation_Model_MeasureStation_waferHeightMap_LiteralUnlimitedNatural184);
				MeasureStation_Model_MeasureStation_waferHeightMap_LiteralInteger185.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger185", MeasureStation_Model_MeasureStation_waferHeightMap_LiteralInteger185);
			MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String.reset(new Operation());
			this->addToElementRepository("WaferHeightMap_MeasureWaferHeightMap_String", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String);
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap.reset(new Parameter());
				this->addToElementRepository("resultingWaferHeightMap", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap);
					MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralUnlimitedNatural186.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural186", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralUnlimitedNatural186);
					MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralInteger187.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger187", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralInteger187);
				MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer.reset(new Parameter());
				this->addToElementRepository("currentWafer", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer);
					MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralInteger188.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger188", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralInteger188);
					MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralUnlimitedNatural189.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural189", MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralUnlimitedNatural189);
			MeasureStation_Model_MeasureStation_Initialize.reset(new Operation());
			this->addToElementRepository("Initialize", MeasureStation_Model_MeasureStation_Initialize);
		/*
		 * Package Launch
		 */
		MeasureStation_Model_Launch.reset(new Package());
		this->addToElementRepository("Launch", MeasureStation_Model_Launch);
			MeasureStation_Model_Launch_LaunchMeasureActivity.reset(new Activity());
			this->addToElementRepository("LaunchMeasureActivity", MeasureStation_Model_Launch_LaunchMeasureActivity);
				MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation.reset(new CallOperationAction());
				this->addToElementRepository("InitializeMeasureStation", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation);
					MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target.reset(new InputPin());
					this->addToElementRepository("target", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target);
						MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger190.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger190", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger190);
						MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralUnlimitedNatural191.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural191", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralUnlimitedNatural191);
						MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger192.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger192", MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger192);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow193", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralBoolean194.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean194", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralBoolean194);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralInteger195.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger195", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralInteger195);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow196.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow196", MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow196);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation.reset(new CreateObjectAction());
				this->addToElementRepository("CreateObjectActionMeasureStation", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralUnlimitedNatural197.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural197", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralUnlimitedNatural197);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger198.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger198", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger198);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger199.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger199", MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger199);
				MeasureStation_Model_Launch_LaunchMeasureActivity_waferID.reset(new ValueSpecificationAction());
				this->addToElementRepository("waferID", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID);
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001.reset(new LiteralString());
					this->addToElementRepository("A0000001", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001);
					MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID.reset(new OutputPin());
					this->addToElementRepository("resultingWID", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID);
						MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger200.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger200", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger200);
						MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger201.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger201", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger201);
						MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralUnlimitedNatural202.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural202", MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralUnlimitedNatural202);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow203.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow203", MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow203);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow204", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralBoolean205.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean205", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralBoolean205);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralInteger206.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger206", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralInteger206);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow207", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralBoolean208.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean208", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralBoolean208);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralInteger209.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger209", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralInteger209);
				MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start.reset(new InitialNode());
				this->addToElementRepository("Launch start", MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow210", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralBoolean211.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean211", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralBoolean211);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralInteger212.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger212", MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralInteger212);
				MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap.reset(new CallOperationAction());
				this->addToElementRepository("CallOperationMeasureWaferHeightMap", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap.reset(new OutputPin());
					this->addToElementRepository("resultingWaferHeightMap", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralUnlimitedNatural213.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural213", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralUnlimitedNatural213);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger214.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger214", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger214);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger215.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger215", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger215);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer.reset(new InputPin());
					this->addToElementRepository("currentWafer", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger216.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger216", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger216);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralUnlimitedNatural217.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural217", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralUnlimitedNatural217);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger218.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger218", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger218);
					MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target.reset(new InputPin());
					this->addToElementRepository("target", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger219.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger219", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger219);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralUnlimitedNatural220.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural220", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralUnlimitedNatural220);
						MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger221.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger221", MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger221);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9.reset(new ForkNode());
				this->addToElementRepository("ForkNode9", MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow222.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow222", MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow222);
		MeasureStation_Model_WaferHeightMap.reset(new Class_());
		this->addToElementRepository("WaferHeightMap", MeasureStation_Model_WaferHeightMap);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl.reset(new Activity());
			this->addToElementRepository("AddMarkMeasurementImpl", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow223", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralInteger224.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger224", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralInteger224);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralBoolean225.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean225", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralBoolean225);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement.reset(new Parameter());
				this->addToElementRepository("measurement", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralInteger226.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger226", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralInteger226);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralUnlimitedNatural227.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural227", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralUnlimitedNatural227);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("measurementsListAddStructuralFeatureValueAction", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger228.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger228", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger228);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralUnlimitedNatural229.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural229", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralUnlimitedNatural229);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger230.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger230", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger230);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger231.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger231", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger231);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger232.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger232", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger232);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralUnlimitedNatural233.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural233", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralUnlimitedNatural233);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value.reset(new InputPin());
					this->addToElementRepository("value", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger234.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger234", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger234);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger235.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger235", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger235);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralUnlimitedNatural236.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural236", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralUnlimitedNatural236);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt.reset(new InputPin());
					this->addToElementRepository("insertAt", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger237.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger237", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger237);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralUnlimitedNatural238.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural238", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralUnlimitedNatural238);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger239.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger239", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger239);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow240", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralBoolean241.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean241", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralBoolean241);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralInteger242.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger242", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralInteger242);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput.reset(new ActivityParameterNode());
				this->addToElementRepository("newMeasurementInput", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput_LiteralInteger243.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger243", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput_LiteralInteger243);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow244", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralInteger245.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger245", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralInteger245);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralBoolean246.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean246", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralBoolean246);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247.reset(new OutputPin());
					this->addToElementRepository("OutputPin247", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247_LiteralInteger248.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger248", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247_LiteralInteger248);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247_LiteralInteger249.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger249", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247_LiteralInteger249);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247_LiteralUnlimitedNatural250.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural250", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247_LiteralUnlimitedNatural250);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("measurementListReadStructuralFeatureAction", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger251.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger251", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger251);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger252.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger252", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger252);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralUnlimitedNatural253.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural253", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralUnlimitedNatural253);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralUnlimitedNatural254.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural254", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralUnlimitedNatural254);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger255.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger255", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger255);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger256.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger256", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger256);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition.reset(new ValueSpecificationAction());
				this->addToElementRepository("AtPosition", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural257.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural257", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural257);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258.reset(new OutputPin());
					this->addToElementRepository("OutputPin258", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258_LiteralInteger259.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger259", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258_LiteralInteger259);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258_LiteralInteger260.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger260", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258_LiteralInteger260);
						MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258_LiteralUnlimitedNatural261.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural261", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258_LiteralUnlimitedNatural261);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow262", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralBoolean263.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean263", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralBoolean263);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralInteger264.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger264", MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralInteger264);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement.reset(new Operation());
			this->addToElementRepository("AddMarkMeasurement_MarkMeasurement", MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement.reset(new Parameter());
				this->addToElementRepository("measurement", MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralUnlimitedNatural265.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural265", MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralUnlimitedNatural265);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralInteger266.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger266", MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralInteger266);
			MeasureStation_Model_WaferHeightMap_measurements.reset(new Property());
			this->addToElementRepository("measurements", MeasureStation_Model_WaferHeightMap_measurements);
				MeasureStation_Model_WaferHeightMap_measurements_LiteralInteger267.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger267", MeasureStation_Model_WaferHeightMap_measurements_LiteralInteger267);
				MeasureStation_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural268.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural268", MeasureStation_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural268);
		MeasureStation_Model_MarkMeasurement.reset(new Class_());
		this->addToElementRepository("MarkMeasurement", MeasureStation_Model_MarkMeasurement);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity.reset(new Activity());
			this->addToElementRepository("DoMeasurementActivity", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("atXPosActivityParameterNode", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode_LiteralInteger269.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger269", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode_LiteralInteger269);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos.reset(new Parameter());
				this->addToElementRepository("atYpos", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos_LiteralInteger270.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger270", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos_LiteralInteger270);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos_LiteralUnlimitedNatural271.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural271", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos_LiteralUnlimitedNatural271);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow272", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralBoolean273.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean273", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralBoolean273);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralInteger274.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger274", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralInteger274);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow275", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralInteger276.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger276", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralInteger276);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralBoolean277.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean277", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralBoolean277);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow278.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow278", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow278);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow279.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow279", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow279);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow280", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralBoolean281.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean281", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralBoolean281);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralInteger282.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger282", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralInteger282);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("atYPosActivityParameterNode", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode_LiteralInteger283.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger283", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode_LiteralInteger283);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow284", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralInteger285.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger285", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralInteger285);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralBoolean286.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean286", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralBoolean286);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition.reset(new CreateObjectAction());
				this->addToElementRepository("CreatePosition", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result_LiteralInteger287.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger287", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result_LiteralInteger287);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result_LiteralUnlimitedNatural288.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural288", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result_LiteralUnlimitedNatural288);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result_LiteralInteger289.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger289", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result_LiteralInteger289);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow290", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralBoolean291.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean291", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralBoolean291);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralInteger292.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger292", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralInteger292);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This.reset(new ReadSelfAction());
				this->addToElementRepository("This", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293.reset(new OutputPin());
					this->addToElementRepository("OutputPin293", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293_LiteralUnlimitedNatural294.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural294", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293_LiteralUnlimitedNatural294);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293_LiteralInteger295.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger295", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293_LiteralInteger295);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293_LiteralInteger296.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger296", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293_LiteralInteger296);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow297.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow297", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow297);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode.reset(new ForkNode());
				this->addToElementRepository("ThisObjectForkNode", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow298.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow298", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow298);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_EndNode.reset(new ActivityFinalNode());
				this->addToElementRepository("EndNode", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_EndNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos.reset(new Parameter());
				this->addToElementRepository("atXpos", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos_LiteralUnlimitedNatural299.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural299", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos_LiteralUnlimitedNatural299);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos_LiteralInteger300.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger300", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos_LiteralInteger300);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode.reset(new ForkNode());
				this->addToElementRepository("PositionForkNode", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow301.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow301", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow301);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("SetPositionValues", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value.reset(new InputPin());
					this->addToElementRepository("value", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value_LiteralUnlimitedNatural302.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural302", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value_LiteralUnlimitedNatural302);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value_LiteralInteger303.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger303", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value_LiteralInteger303);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value_LiteralInteger304.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger304", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value_LiteralInteger304);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result_LiteralInteger305.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger305", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result_LiteralInteger305);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result_LiteralUnlimitedNatural306.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural306", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result_LiteralUnlimitedNatural306);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result_LiteralInteger307.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger307", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result_LiteralInteger307);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object_LiteralInteger308.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger308", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object_LiteralInteger308);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object_LiteralInteger309.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger309", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object_LiteralInteger309);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object_LiteralUnlimitedNatural310.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural310", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object_LiteralUnlimitedNatural310);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos.reset(new OpaqueBehavior());
				this->addToElementRepository("OpaqueBehaviorCalculateZPos", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result.reset(new Parameter());
					this->addToElementRepository("result", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result_LiteralInteger311.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger311", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result_LiteralInteger311);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result_LiteralUnlimitedNatural312.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural312", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result_LiteralUnlimitedNatural312);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow313", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralBoolean314.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean314", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralBoolean314);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralInteger315.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger315", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralInteger315);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos.reset(new CallOperationAction());
				this->addToElementRepository("CallSetXPos", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos.reset(new InputPin());
					this->addToElementRepository("xPos", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos_LiteralInteger316.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger316", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos_LiteralInteger316);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos_LiteralInteger317.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger317", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos_LiteralInteger317);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos_LiteralUnlimitedNatural318.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural318", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos_LiteralUnlimitedNatural318);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target.reset(new InputPin());
					this->addToElementRepository("target", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target_LiteralInteger319.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger319", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target_LiteralInteger319);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target_LiteralInteger320.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger320", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target_LiteralInteger320);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target_LiteralUnlimitedNatural321.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural321", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target_LiteralUnlimitedNatural321);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow322", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralBoolean323.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean323", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralBoolean323);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralInteger324.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger324", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralInteger324);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow325.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow325", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow325);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("SetZPosValue", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value.reset(new InputPin());
					this->addToElementRepository("value", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value_LiteralInteger326.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger326", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value_LiteralInteger326);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value_LiteralUnlimitedNatural327.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural327", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value_LiteralUnlimitedNatural327);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value_LiteralInteger328.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger328", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value_LiteralInteger328);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result_LiteralInteger329.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger329", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result_LiteralInteger329);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result_LiteralUnlimitedNatural330.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural330", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result_LiteralUnlimitedNatural330);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result_LiteralInteger331.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger331", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result_LiteralInteger331);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object.reset(new InputPin());
					this->addToElementRepository("object", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object_LiteralInteger332.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger332", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object_LiteralInteger332);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object_LiteralUnlimitedNatural333.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural333", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object_LiteralUnlimitedNatural333);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object_LiteralInteger334.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger334", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object_LiteralInteger334);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow335", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralInteger336.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger336", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralInteger336);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralBoolean337.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean337", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralBoolean337);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_StartNode.reset(new InitialNode());
				this->addToElementRepository("StartNode", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_StartNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow338", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralInteger339.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger339", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralInteger339);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralBoolean340.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean340", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralBoolean340);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior.reset(new CallBehaviorAction());
				this->addToElementRepository("CallCalculateZPosOpaqueBehavior", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result.reset(new OutputPin());
					this->addToElementRepository("result", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result_LiteralInteger341.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger341", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result_LiteralInteger341);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result_LiteralUnlimitedNatural342.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural342", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result_LiteralUnlimitedNatural342);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result_LiteralInteger343.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger343", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result_LiteralInteger343);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow344", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralBoolean345.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean345", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralBoolean345);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralInteger346.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger346", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralInteger346);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos.reset(new CallOperationAction());
				this->addToElementRepository("CallSetYPos", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos.reset(new InputPin());
					this->addToElementRepository("yPos", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos_LiteralInteger347.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger347", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos_LiteralInteger347);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos_LiteralUnlimitedNatural348.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural348", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos_LiteralUnlimitedNatural348);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos_LiteralInteger349.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger349", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos_LiteralInteger349);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target.reset(new InputPin());
					this->addToElementRepository("target", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target_LiteralInteger350.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger350", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target_LiteralInteger350);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target_LiteralUnlimitedNatural351.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural351", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target_LiteralUnlimitedNatural351);
						MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target_LiteralInteger352.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger352", MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target_LiteralInteger352);
			MeasureStation_Model_MarkMeasurement_zpos.reset(new Property());
			this->addToElementRepository("zpos", MeasureStation_Model_MarkMeasurement_zpos);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralInteger353.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger353", MeasureStation_Model_MarkMeasurement_zpos_LiteralInteger353);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal354.reset(new LiteralReal());
				this->addToElementRepository("LiteralReal354", MeasureStation_Model_MarkMeasurement_zpos_LiteralReal354);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralUnlimitedNatural355.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural355", MeasureStation_Model_MarkMeasurement_zpos_LiteralUnlimitedNatural355);
			MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real.reset(new Operation());
			this->addToElementRepository("DoMeasurement_Real_Real", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real);
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos.reset(new Parameter());
				this->addToElementRepository("atXpos", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos);
					MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralUnlimitedNatural356.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural356", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralUnlimitedNatural356);
					MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralInteger357.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger357", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralInteger357);
				MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos.reset(new Parameter());
				this->addToElementRepository("atYpos", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos);
					MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralUnlimitedNatural358.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural358", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralUnlimitedNatural358);
					MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralInteger359.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger359", MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralInteger359);
			MeasureStation_Model_MarkMeasurement_position.reset(new Property());
			this->addToElementRepository("position", MeasureStation_Model_MarkMeasurement_position);
				MeasureStation_Model_MarkMeasurement_position_LiteralInteger360.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger360", MeasureStation_Model_MarkMeasurement_position_LiteralInteger360);
				MeasureStation_Model_MarkMeasurement_position_LiteralUnlimitedNatural361.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural361", MeasureStation_Model_MarkMeasurement_position_LiteralUnlimitedNatural361);

	// Initialize public members
	/*
	 * Model MeasureStation Model
	 */
	MeasureStation_Model->setThisPackagePtr(MeasureStation_Model);
	MeasureStation_Model->setName("MeasureStation Model");
	MeasureStation_Model->setVisibility(VisibilityKind::package);
		// Class Position
		MeasureStation_Model_Position->setThisClass_Ptr(MeasureStation_Model_Position);
		MeasureStation_Model_Position->setName("Position");
		MeasureStation_Model_Position->setVisibility(VisibilityKind::public_);
		
			// Property xpos
			MeasureStation_Model_Position_xpos->setThisElementPtr(MeasureStation_Model_Position_xpos);
			MeasureStation_Model_Position_xpos->setName("xpos");
			MeasureStation_Model_Position_xpos->setVisibility(VisibilityKind::private_);
			
			MeasureStation_Model_Position_xpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				// LiteralReal LiteralReal23
				MeasureStation_Model_Position_xpos_LiteralReal23->setThisElementPtr(MeasureStation_Model_Position_xpos_LiteralReal23);
				MeasureStation_Model_Position_xpos_LiteralReal23->setName("LiteralReal23");
				MeasureStation_Model_Position_xpos_LiteralReal23->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_xpos_LiteralReal23->setValue(0.0f);
			MeasureStation_Model_Position_xpos->setDefaultValue(MeasureStation_Model_Position_xpos_LiteralReal23);
		MeasureStation_Model_Position->addOwnedAttribute(MeasureStation_Model_Position_xpos);
			// Property ypos
			MeasureStation_Model_Position_ypos->setThisElementPtr(MeasureStation_Model_Position_ypos);
			MeasureStation_Model_Position_ypos->setName("ypos");
			MeasureStation_Model_Position_ypos->setVisibility(VisibilityKind::private_);
			
			MeasureStation_Model_Position_ypos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				// LiteralReal LiteralReal47
				MeasureStation_Model_Position_ypos_LiteralReal47->setThisElementPtr(MeasureStation_Model_Position_ypos_LiteralReal47);
				MeasureStation_Model_Position_ypos_LiteralReal47->setName("LiteralReal47");
				MeasureStation_Model_Position_ypos_LiteralReal47->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_ypos_LiteralReal47->setValue(0.0f);
			MeasureStation_Model_Position_ypos->setDefaultValue(MeasureStation_Model_Position_ypos_LiteralReal47);
		MeasureStation_Model_Position->addOwnedAttribute(MeasureStation_Model_Position_ypos);
		// Activity GetYposImpl
			MeasureStation_Model_Position_GetYposImpl->setThisActivityPtr(MeasureStation_Model_Position_GetYposImpl);
			MeasureStation_Model_Position_GetYposImpl->setName("GetYposImpl");
			MeasureStation_Model_Position_GetYposImpl->setVisibility(VisibilityKind::public_);
			
				// Parameter Parameter12
				MeasureStation_Model_Position_GetYposImpl_Parameter12->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_Parameter12);
				MeasureStation_Model_Position_GetYposImpl_Parameter12->setName("Parameter12");
				MeasureStation_Model_Position_GetYposImpl_Parameter12->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetYposImpl_Parameter12->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_GetYposImpl_Parameter12->setDirection(ParameterDirectionKind::return_);
			MeasureStation_Model_Position_GetYposImpl->addOwnedParameter(MeasureStation_Model_Position_GetYposImpl_Parameter12);
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
				// ReadSelfAction This
				MeasureStation_Model_Position_GetYposImpl_This->setThisExecutableNodePtr(MeasureStation_Model_Position_GetYposImpl_This);
				MeasureStation_Model_Position_GetYposImpl_This->setName("This");
				MeasureStation_Model_Position_GetYposImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin15
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin15->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_This_OutputPin15);
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin15->setName("OutputPin15");
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin15->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetYposImpl_This_OutputPin15->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_GetYposImpl_This->setResult(MeasureStation_Model_Position_GetYposImpl_This_OutputPin15);
			MeasureStation_Model_Position_GetYposImpl->addNode(MeasureStation_Model_Position_GetYposImpl_This);
				// ActivityParameterNode GetYposResult
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_GetYposResult);
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setName("GetYposResult");
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_GetYposImpl_GetYposResult->setParameter(MeasureStation_Model_Position_GetYposImpl_Parameter12);
			MeasureStation_Model_Position_GetYposImpl->addNode(MeasureStation_Model_Position_GetYposImpl_GetYposResult);
				// ObjectFlow ObjectFlow6 from result to GetYposResult
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow6->setThisActivityEdgePtr(MeasureStation_Model_Position_GetYposImpl_ObjectFlow6);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow6->setName("ObjectFlow6");
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow6->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow6->setSource(MeasureStation_Model_Position_GetYposImpl_ReadYpos_result);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow6->setTarget(MeasureStation_Model_Position_GetYposImpl_GetYposResult);
					// LiteralBoolean LiteralBoolean7
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralBoolean7->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralBoolean7);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralBoolean7->setName("LiteralBoolean7");
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralBoolean7->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralBoolean7->setValue(true);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow6->setGuard(MeasureStation_Model_Position_GetYposImpl_ObjectFlow6_LiteralBoolean7);
			MeasureStation_Model_Position_GetYposImpl->addEdge(MeasureStation_Model_Position_GetYposImpl_ObjectFlow6);
				// ObjectFlow ObjectFlow9 from OutputPin15 to object
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow9->setThisActivityEdgePtr(MeasureStation_Model_Position_GetYposImpl_ObjectFlow9);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow9->setName("ObjectFlow9");
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow9->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow9->setSource(MeasureStation_Model_Position_GetYposImpl_This_OutputPin15);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow9->setTarget(MeasureStation_Model_Position_GetYposImpl_ReadYpos_object);
					// LiteralBoolean LiteralBoolean11
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralBoolean11->setThisElementPtr(MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralBoolean11);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralBoolean11->setName("LiteralBoolean11");
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralBoolean11->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralBoolean11->setValue(true);
				MeasureStation_Model_Position_GetYposImpl_ObjectFlow9->setGuard(MeasureStation_Model_Position_GetYposImpl_ObjectFlow9_LiteralBoolean11);
			MeasureStation_Model_Position_GetYposImpl->addEdge(MeasureStation_Model_Position_GetYposImpl_ObjectFlow9);
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
					// OutputPin OutputPin25
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin25->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_This_OutputPin25);
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin25->setName("OutputPin25");
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin25->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetXposImpl_This_OutputPin25->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_GetXposImpl_This->setResult(MeasureStation_Model_Position_GetXposImpl_This_OutputPin25);
			MeasureStation_Model_Position_GetXposImpl->addNode(MeasureStation_Model_Position_GetXposImpl_This);
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
				// ActivityParameterNode GetXposResult
				MeasureStation_Model_Position_GetXposImpl_GetXposResult->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_GetXposResult);
				MeasureStation_Model_Position_GetXposImpl_GetXposResult->setName("GetXposResult");
				MeasureStation_Model_Position_GetXposImpl_GetXposResult->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetXposImpl_GetXposResult->setParameter(MeasureStation_Model_Position_GetXposImpl_xposValue);
			MeasureStation_Model_Position_GetXposImpl->addNode(MeasureStation_Model_Position_GetXposImpl_GetXposResult);
				// ObjectFlow ObjectFlow31 from OutputPin25 to object
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow31->setThisActivityEdgePtr(MeasureStation_Model_Position_GetXposImpl_ObjectFlow31);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow31->setName("ObjectFlow31");
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow31->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow31->setSource(MeasureStation_Model_Position_GetXposImpl_This_OutputPin25);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow31->setTarget(MeasureStation_Model_Position_GetXposImpl_ReadXpos_object);
					// LiteralBoolean LiteralBoolean32
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralBoolean32->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralBoolean32);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralBoolean32->setName("LiteralBoolean32");
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralBoolean32->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralBoolean32->setValue(true);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow31->setGuard(MeasureStation_Model_Position_GetXposImpl_ObjectFlow31_LiteralBoolean32);
			MeasureStation_Model_Position_GetXposImpl->addEdge(MeasureStation_Model_Position_GetXposImpl_ObjectFlow31);
				// ObjectFlow ObjectFlow34 from result to GetXposResult
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow34->setThisActivityEdgePtr(MeasureStation_Model_Position_GetXposImpl_ObjectFlow34);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow34->setName("ObjectFlow34");
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow34->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow34->setSource(MeasureStation_Model_Position_GetXposImpl_ReadXpos_result);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow34->setTarget(MeasureStation_Model_Position_GetXposImpl_GetXposResult);
					// LiteralBoolean LiteralBoolean35
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralBoolean35->setThisElementPtr(MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralBoolean35);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralBoolean35->setName("LiteralBoolean35");
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralBoolean35->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralBoolean35->setValue(true);
				MeasureStation_Model_Position_GetXposImpl_ObjectFlow34->setGuard(MeasureStation_Model_Position_GetXposImpl_ObjectFlow34_LiteralBoolean35);
			MeasureStation_Model_Position_GetXposImpl->addEdge(MeasureStation_Model_Position_GetXposImpl_ObjectFlow34);
		MeasureStation_Model_Position->addOwnedBehavior(MeasureStation_Model_Position_GetXposImpl);
			// Activity SetXPosImpl
			MeasureStation_Model_Position_SetXPosImpl->setThisActivityPtr(MeasureStation_Model_Position_SetXPosImpl);
			MeasureStation_Model_Position_SetXPosImpl->setName("SetXPosImpl");
			MeasureStation_Model_Position_SetXPosImpl->setVisibility(VisibilityKind::public_);
			
				// Parameter xPos
				MeasureStation_Model_Position_SetXPosImpl_xPos->setThisElementPtr(MeasureStation_Model_Position_SetXPosImpl_xPos);
				MeasureStation_Model_Position_SetXPosImpl_xPos->setName("xPos");
				MeasureStation_Model_Position_SetXPosImpl_xPos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetXPosImpl_xPos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_Position_SetXPosImpl->addOwnedParameter(MeasureStation_Model_Position_SetXPosImpl_xPos);
				// ReadSelfAction This
				MeasureStation_Model_Position_SetXPosImpl_This->setThisExecutableNodePtr(MeasureStation_Model_Position_SetXPosImpl_This);
				MeasureStation_Model_Position_SetXPosImpl_This->setName("This");
				MeasureStation_Model_Position_SetXPosImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin50
					MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50->setThisElementPtr(MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50);
					MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50->setName("OutputPin50");
					MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_SetXPosImpl_This->setResult(MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50);
			MeasureStation_Model_Position_SetXPosImpl->addNode(MeasureStation_Model_Position_SetXPosImpl_This);
				// AddStructuralFeatureValueAction SetXPosValue
				MeasureStation_Model_Position_SetXPosImpl_SetXPosValue->setThisExecutableNodePtr(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue);
				MeasureStation_Model_Position_SetXPosImpl_SetXPosValue->setName("SetXPosValue");
				MeasureStation_Model_Position_SetXPosImpl_SetXPosValue->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_SetXPosImpl_SetXPosValue->setStructuralFeature(MeasureStation_Model_Position_xpos);
					// InputPin object
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object->setThisElementPtr(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object);
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object->setName("object");
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_SetXPosImpl_SetXPosValue->setObject(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object);
					// InputPin value
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value->setThisElementPtr(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value);
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value->setName("value");
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_SetXPosImpl_SetXPosValue->setValue(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value);
					// OutputPin result
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result->setThisElementPtr(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result);
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result->setName("result");
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_SetXPosImpl_SetXPosValue->setResult(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_result);
			MeasureStation_Model_Position_SetXPosImpl->addNode(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue);
				// ActivityParameterNode xPosActivityParameterNode
				MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode->setThisElementPtr(MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode);
				MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode->setName("xPosActivityParameterNode");
				MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode->setParameter(MeasureStation_Model_Position_SetXPosImpl_xPos);
			MeasureStation_Model_Position_SetXPosImpl->addNode(MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode);
				// ObjectFlow ObjectFlow63 from OutputPin50 to object
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63->setThisActivityEdgePtr(MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63);
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63->setName("ObjectFlow63");
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63->setSource(MeasureStation_Model_Position_SetXPosImpl_This_OutputPin50);
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63->setTarget(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_object);
					// LiteralBoolean LiteralBoolean64
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralBoolean64->setThisElementPtr(MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralBoolean64);
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralBoolean64->setName("LiteralBoolean64");
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralBoolean64->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralBoolean64->setValue(true);
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63->setGuard(MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63_LiteralBoolean64);
			MeasureStation_Model_Position_SetXPosImpl->addEdge(MeasureStation_Model_Position_SetXPosImpl_ObjectFlow63);
				// ObjectFlow ObjectFlow66 from xPosActivityParameterNode to value
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66->setThisActivityEdgePtr(MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66);
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66->setName("ObjectFlow66");
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66->setSource(MeasureStation_Model_Position_SetXPosImpl_xPosActivityParameterNode);
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66->setTarget(MeasureStation_Model_Position_SetXPosImpl_SetXPosValue_value);
					// LiteralBoolean LiteralBoolean68
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralBoolean68->setThisElementPtr(MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralBoolean68);
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralBoolean68->setName("LiteralBoolean68");
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralBoolean68->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralBoolean68->setValue(true);
				MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66->setGuard(MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66_LiteralBoolean68);
			MeasureStation_Model_Position_SetXPosImpl->addEdge(MeasureStation_Model_Position_SetXPosImpl_ObjectFlow66);
		MeasureStation_Model_Position->addOwnedBehavior(MeasureStation_Model_Position_SetXPosImpl);
			// Activity SetYPosImpl
			MeasureStation_Model_Position_SetYPosImpl->setThisActivityPtr(MeasureStation_Model_Position_SetYPosImpl);
			MeasureStation_Model_Position_SetYPosImpl->setName("SetYPosImpl");
			MeasureStation_Model_Position_SetYPosImpl->setVisibility(VisibilityKind::public_);
			
				// Parameter yPos
				MeasureStation_Model_Position_SetYPosImpl_yPos->setThisElementPtr(MeasureStation_Model_Position_SetYPosImpl_yPos);
				MeasureStation_Model_Position_SetYPosImpl_yPos->setName("yPos");
				MeasureStation_Model_Position_SetYPosImpl_yPos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetYPosImpl_yPos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_Position_SetYPosImpl->addOwnedParameter(MeasureStation_Model_Position_SetYPosImpl_yPos);
				// ReadSelfAction This
				MeasureStation_Model_Position_SetYPosImpl_This->setThisExecutableNodePtr(MeasureStation_Model_Position_SetYPosImpl_This);
				MeasureStation_Model_Position_SetYPosImpl_This->setName("This");
				MeasureStation_Model_Position_SetYPosImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin80
					MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80->setThisElementPtr(MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80);
					MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80->setName("OutputPin80");
					MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_SetYPosImpl_This->setResult(MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80);
			MeasureStation_Model_Position_SetYPosImpl->addNode(MeasureStation_Model_Position_SetYPosImpl_This);
				// ActivityParameterNode yPosActivityParameterNode
				MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode->setThisElementPtr(MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode);
				MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode->setName("yPosActivityParameterNode");
				MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode->setParameter(MeasureStation_Model_Position_SetYPosImpl_yPos);
			MeasureStation_Model_Position_SetYPosImpl->addNode(MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode);
				// AddStructuralFeatureValueAction SetYPosValue
				MeasureStation_Model_Position_SetYPosImpl_SetYPosValue->setThisExecutableNodePtr(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue);
				MeasureStation_Model_Position_SetYPosImpl_SetYPosValue->setName("SetYPosValue");
				MeasureStation_Model_Position_SetYPosImpl_SetYPosValue->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_Position_SetYPosImpl_SetYPosValue->setStructuralFeature(MeasureStation_Model_Position_ypos);
					// InputPin object
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object->setThisElementPtr(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object);
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object->setName("object");
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_SetYPosImpl_SetYPosValue->setObject(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object);
					// InputPin value
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value->setThisElementPtr(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value);
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value->setName("value");
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_SetYPosImpl_SetYPosValue->setValue(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value);
					// OutputPin result
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result->setThisElementPtr(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result);
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result->setName("result");
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result->setType(MeasureStation_Model_Position);
				MeasureStation_Model_Position_SetYPosImpl_SetYPosValue->setResult(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_result);
			MeasureStation_Model_Position_SetYPosImpl->addNode(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue);
				// ObjectFlow ObjectFlow74 from yPosActivityParameterNode to value
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74->setThisActivityEdgePtr(MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74);
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74->setName("ObjectFlow74");
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74->setSource(MeasureStation_Model_Position_SetYPosImpl_yPosActivityParameterNode);
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74->setTarget(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_value);
					// LiteralBoolean LiteralBoolean76
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralBoolean76->setThisElementPtr(MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralBoolean76);
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralBoolean76->setName("LiteralBoolean76");
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralBoolean76->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralBoolean76->setValue(true);
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74->setGuard(MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74_LiteralBoolean76);
			MeasureStation_Model_Position_SetYPosImpl->addEdge(MeasureStation_Model_Position_SetYPosImpl_ObjectFlow74);
				// ObjectFlow ObjectFlow77 from OutputPin80 to object
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77->setThisActivityEdgePtr(MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77);
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77->setName("ObjectFlow77");
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77->setSource(MeasureStation_Model_Position_SetYPosImpl_This_OutputPin80);
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77->setTarget(MeasureStation_Model_Position_SetYPosImpl_SetYPosValue_object);
					// LiteralBoolean LiteralBoolean79
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralBoolean79->setThisElementPtr(MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralBoolean79);
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralBoolean79->setName("LiteralBoolean79");
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralBoolean79->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralBoolean79->setValue(true);
				MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77->setGuard(MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77_LiteralBoolean79);
			MeasureStation_Model_Position_SetYPosImpl->addEdge(MeasureStation_Model_Position_SetYPosImpl_ObjectFlow77);
		MeasureStation_Model_Position->addOwnedBehavior(MeasureStation_Model_Position_SetYPosImpl);
		
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
				// Parameter Parameter44
				MeasureStation_Model_Position_Real_GetYpos_Parameter44->setThisElementPtr(MeasureStation_Model_Position_Real_GetYpos_Parameter44);
				MeasureStation_Model_Position_Real_GetYpos_Parameter44->setName("Parameter44");
				MeasureStation_Model_Position_Real_GetYpos_Parameter44->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_Real_GetYpos_Parameter44->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_Position_Real_GetYpos_Parameter44->setDirection(ParameterDirectionKind::return_);
			MeasureStation_Model_Position_Real_GetYpos->addOwnedParameter(MeasureStation_Model_Position_Real_GetYpos_Parameter44);
			MeasureStation_Model_Position_Real_GetYpos->addMethod(MeasureStation_Model_Position_GetYposImpl);
		MeasureStation_Model_Position->addOwnedOperation(MeasureStation_Model_Position_Real_GetYpos);
			// Operation SetXPos_Real
			MeasureStation_Model_Position_SetXPos_Real->setThisOperationPtr(MeasureStation_Model_Position_SetXPos_Real);
			MeasureStation_Model_Position_SetXPos_Real->setName("SetXPos");
			MeasureStation_Model_Position_SetXPos_Real->setVisibility(VisibilityKind::public_);
				// Parameter xPos
				MeasureStation_Model_Position_SetXPos_Real_xPos->setThisElementPtr(MeasureStation_Model_Position_SetXPos_Real_xPos);
				MeasureStation_Model_Position_SetXPos_Real_xPos->setName("xPos");
				MeasureStation_Model_Position_SetXPos_Real_xPos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetXPos_Real_xPos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_Position_SetXPos_Real->addOwnedParameter(MeasureStation_Model_Position_SetXPos_Real_xPos);
			MeasureStation_Model_Position_SetXPos_Real->addMethod(MeasureStation_Model_Position_SetXPosImpl);
		MeasureStation_Model_Position->addOwnedOperation(MeasureStation_Model_Position_SetXPos_Real);
			// Operation SetYPos_Real
			MeasureStation_Model_Position_SetYPos_Real->setThisOperationPtr(MeasureStation_Model_Position_SetYPos_Real);
			MeasureStation_Model_Position_SetYPos_Real->setName("SetYPos");
			MeasureStation_Model_Position_SetYPos_Real->setVisibility(VisibilityKind::public_);
				// Parameter yPos
				MeasureStation_Model_Position_SetYPos_Real_yPos->setThisElementPtr(MeasureStation_Model_Position_SetYPos_Real_yPos);
				MeasureStation_Model_Position_SetYPos_Real_yPos->setName("yPos");
				MeasureStation_Model_Position_SetYPos_Real_yPos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Position_SetYPos_Real_yPos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_Position_SetYPos_Real->addOwnedParameter(MeasureStation_Model_Position_SetYPos_Real_yPos);
			MeasureStation_Model_Position_SetYPos_Real->addMethod(MeasureStation_Model_Position_SetYPosImpl);
		MeasureStation_Model_Position->addOwnedOperation(MeasureStation_Model_Position_SetYPos_Real);
	MeasureStation_Model->addPackagedElement(MeasureStation_Model_Position);
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
				// CallOperationAction CallOperationDoMeasurement
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement->setName("CallOperationDoMeasurement");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement->setOperation(MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real);
					// InputPin target
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target->setName("target");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target->setType(MeasureStation_Model_MarkMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target);
					// InputPin atXpos
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos->setName("atXpos");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement->addArgument(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos);
					// InputPin atYpos
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos->setName("atYpos");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement->addArgument(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement);
				// ValueSpecificationAction Y at 0.0
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0->setName("Y at 0.0");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0->setVisibility(VisibilityKind::public_);
					// LiteralReal LiteralReal147
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_LiteralReal147->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_LiteralReal147);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_LiteralReal147->setName("LiteralReal147");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_LiteralReal147->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_LiteralReal147->setValue(0.0f);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0->setValue(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_LiteralReal147);
					// OutputPin result
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result->setName("result");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0->setResult(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0);
				// CreateObjectAction CreateNewMarkMeasurement
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement->setName("CreateNewMarkMeasurement");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement->setClassifier(MeasureStation_Model_MarkMeasurement);
					// OutputPin result
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result->setName("result");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result->setType(MeasureStation_Model_MarkMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement->setResult(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement);
				// InitialNode ActivityStart
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityStart->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityStart);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityStart->setName("ActivityStart");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityStart->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityStart);
				// ForkNode ForkNodeMarkMeasurement
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement->setName("ForkNodeMarkMeasurement");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement);
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
				// ActivityParameterNode ActivityParameterNodeResultingWaferHeightMap
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap->setName("ActivityParameterNodeResultingWaferHeightMap");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap->setParameter(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap);
				// ValueSpecificationAction X at 0.0
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0->setName("X at 0.0");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0->setVisibility(VisibilityKind::public_);
					// LiteralReal LiteralReal127
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_LiteralReal127->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_LiteralReal127);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_LiteralReal127->setName("LiteralReal127");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_LiteralReal127->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_LiteralReal127->setValue(0.0f);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0->setValue(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_LiteralReal127);
					// OutputPin result
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result->setName("result");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0->setResult(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0);
				// CallOperationAction CallOperationAddMarkMeasurement
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement->setName("CallOperationAddMarkMeasurement");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement->setOperation(MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement);
					// InputPin target
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target->setName("target");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target);
					// InputPin measurement
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement->setName("measurement");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement->setType(MeasureStation_Model_MarkMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement->addArgument(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement);
				// ActivityParameterNode ActivityParameterNodeCurrentWaferID
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID->setName("ActivityParameterNodeCurrentWaferID");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID->setParameter(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID);
				// ForkNode ForkNodeWaferHeightMap
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap->setName("ForkNodeWaferHeightMap");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addNode(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap);
				// ObjectFlow ObjectFlow98 from ForkNodeMarkMeasurement to measurement
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98->setName("ObjectFlow98");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_measurement);
					// LiteralBoolean LiteralBoolean99
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralBoolean99->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralBoolean99);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralBoolean99->setName("LiteralBoolean99");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralBoolean99->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralBoolean99->setValue(true);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98->setGuard(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98_LiteralBoolean99);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow98);
				// ObjectFlow ObjectFlow101 from ForkNodeWaferHeightMap to ActivityParameterNodeResultingWaferHeightMap
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101->setName("ObjectFlow101");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap);
					// LiteralBoolean LiteralBoolean102
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralBoolean102->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralBoolean102);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralBoolean102->setName("LiteralBoolean102");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralBoolean102->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralBoolean102->setValue(true);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101->setGuard(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101_LiteralBoolean102);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow101);
				// ObjectFlow ObjectFlow151 from result to atYpos
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151->setName("ObjectFlow151");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_Y_at_0_0_result);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atYpos);
					// LiteralBoolean LiteralBoolean153
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralBoolean153->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralBoolean153);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralBoolean153->setName("LiteralBoolean153");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralBoolean153->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralBoolean153->setValue(true);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151->setGuard(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151_LiteralBoolean153);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow151);
				// ControlFlow ControlFlow107 from ActivityStart to CreateNewWaferHeightMap
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow107->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow107);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow107->setName("ControlFlow107");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow107->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow107->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityStart);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow107->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow107);
				// ControlFlow ControlFlow108 from CreateNewWaferHeightMap to CreateNewMarkMeasurement
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow108->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow108);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow108->setName("ControlFlow108");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow108->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow108->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow108->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow108);
				// ControlFlow ControlFlow109 from CallOperationDoMeasurement to CallOperationAddMarkMeasurement
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow109->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow109);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow109->setName("ControlFlow109");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow109->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow109->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow109->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ControlFlow109);
				// ObjectFlow ObjectFlow112 from result to ForkNodeWaferHeightMap
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112->setName("ObjectFlow112");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap);
					// LiteralBoolean LiteralBoolean113
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralBoolean113->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralBoolean113);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralBoolean113->setName("LiteralBoolean113");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralBoolean113->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralBoolean113->setValue(true);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112->setGuard(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112_LiteralBoolean113);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow112);
				// ObjectFlow ObjectFlow115 from result to atXpos
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115->setName("ObjectFlow115");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_X_at_0_0_result);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_atXpos);
					// LiteralBoolean LiteralBoolean117
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralBoolean117->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralBoolean117);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralBoolean117->setName("LiteralBoolean117");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralBoolean117->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralBoolean117->setValue(true);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115->setGuard(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115_LiteralBoolean117);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow115);
				// ObjectFlow ObjectFlow118 from ForkNodeWaferHeightMap to target
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118->setName("ObjectFlow118");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeWaferHeightMap);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationAddMarkMeasurement_target);
					// LiteralBoolean LiteralBoolean119
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralBoolean119->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralBoolean119);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralBoolean119->setName("LiteralBoolean119");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralBoolean119->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralBoolean119->setValue(true);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118->setGuard(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118_LiteralBoolean119);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow118);
				// ObjectFlow ObjectFlow157 from result to ForkNodeMarkMeasurement
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157->setName("ObjectFlow157");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewMarkMeasurement_result);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement);
					// LiteralBoolean LiteralBoolean158
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralBoolean158->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralBoolean158);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralBoolean158->setName("LiteralBoolean158");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralBoolean158->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralBoolean158->setValue(true);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157->setGuard(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157_LiteralBoolean158);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow157);
				// ObjectFlow ObjectFlow135 from ForkNodeMarkMeasurement to target
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135->setName("ObjectFlow135");
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135->setSource(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ForkNodeMarkMeasurement);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135->setTarget(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CallOperationDoMeasurement_target);
					// LiteralBoolean LiteralBoolean136
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralBoolean136->setThisElementPtr(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralBoolean136);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralBoolean136->setName("LiteralBoolean136");
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralBoolean136->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralBoolean136->setValue(true);
				MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135->setGuard(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135_LiteralBoolean136);
			MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity->addEdge(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow135);
		MeasureStation_Model_MeasureStation->addOwnedBehavior(MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity);
			// Activity InitializeActivity
			MeasureStation_Model_MeasureStation_InitializeActivity->setThisActivityPtr(MeasureStation_Model_MeasureStation_InitializeActivity);
			MeasureStation_Model_MeasureStation_InitializeActivity->setName("InitializeActivity");
			MeasureStation_Model_MeasureStation_InitializeActivity->setVisibility(VisibilityKind::public_);
				// ReadSelfAction This
				MeasureStation_Model_MeasureStation_InitializeActivity_This->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_InitializeActivity_This);
				MeasureStation_Model_MeasureStation_InitializeActivity_This->setName("This");
				MeasureStation_Model_MeasureStation_InitializeActivity_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin163
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163);
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163->setName("OutputPin163");
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163->setType(MeasureStation_Model_MeasureStation);
				MeasureStation_Model_MeasureStation_InitializeActivity_This->setResult(MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163);
			MeasureStation_Model_MeasureStation_InitializeActivity->addNode(MeasureStation_Model_MeasureStation_InitializeActivity_This);
				// ValueSpecificationAction 0
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setThisExecutableNodePtr(MeasureStation_Model_MeasureStation_InitializeActivity_0);
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setName("0");
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger173
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger173->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger173);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger173->setName("LiteralInteger173");
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger173->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger173->setValue(0);
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setValue(MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger173);
					// OutputPin result
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_0_result);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result->setName("result");
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_0_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MeasureStation_Model_MeasureStation_InitializeActivity_0->setResult(MeasureStation_Model_MeasureStation_InitializeActivity_0_result);
			MeasureStation_Model_MeasureStation_InitializeActivity->addNode(MeasureStation_Model_MeasureStation_InitializeActivity_0);
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
				// ObjectFlow ObjectFlow160 from result to value
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160->setName("ObjectFlow160");
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160->setSource(MeasureStation_Model_MeasureStation_InitializeActivity_0_result);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160->setTarget(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value);
					// LiteralBoolean LiteralBoolean162
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralBoolean162->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralBoolean162);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralBoolean162->setName("LiteralBoolean162");
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralBoolean162->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralBoolean162->setValue(true);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160->setGuard(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160_LiteralBoolean162);
			MeasureStation_Model_MeasureStation_InitializeActivity->addEdge(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow160);
				// ObjectFlow ObjectFlow167 from OutputPin163 to object
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167->setThisActivityEdgePtr(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167->setName("ObjectFlow167");
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167->setSource(MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin163);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167->setTarget(MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object);
					// LiteralBoolean LiteralBoolean168
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralBoolean168->setThisElementPtr(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralBoolean168);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralBoolean168->setName("LiteralBoolean168");
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralBoolean168->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralBoolean168->setValue(true);
				MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167->setGuard(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167_LiteralBoolean168);
			MeasureStation_Model_MeasureStation_InitializeActivity->addEdge(MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow167);
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
				// InitialNode Launch start
				MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start);
				MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start->setName("Launch start");
				MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addNode(MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start);
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
				// ControlFlow ControlFlow203 from CreateObjectActionMeasureStation to InitializeMeasureStation
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow203->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow203);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow203->setName("ControlFlow203");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow203->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow203->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow203->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow203);
				// ObjectFlow ObjectFlow193 from resultingWID to currentWafer
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193->setName("ObjectFlow193");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer);
					// LiteralBoolean LiteralBoolean194
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralBoolean194->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralBoolean194);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralBoolean194->setName("LiteralBoolean194");
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralBoolean194->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralBoolean194->setValue(true);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193->setGuard(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193_LiteralBoolean194);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow193);
				// ObjectFlow ObjectFlow204 from ForkNode9 to target
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204->setName("ObjectFlow204");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target);
					// LiteralBoolean LiteralBoolean205
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralBoolean205->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralBoolean205);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralBoolean205->setName("LiteralBoolean205");
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralBoolean205->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralBoolean205->setValue(true);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204->setGuard(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204_LiteralBoolean205);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow204);
				// ControlFlow ControlFlow196 from InitializeMeasureStation to CallOperationMeasureWaferHeightMap
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow196->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow196);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow196->setName("ControlFlow196");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow196->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow196->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow196->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow196);
				// ObjectFlow ObjectFlow207 from result to ForkNode9
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207->setName("ObjectFlow207");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
					// LiteralBoolean LiteralBoolean208
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralBoolean208->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralBoolean208);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralBoolean208->setName("LiteralBoolean208");
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralBoolean208->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralBoolean208->setValue(true);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207->setGuard(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207_LiteralBoolean208);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow207);
				// ObjectFlow ObjectFlow210 from ForkNode9 to target
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210->setName("ObjectFlow210");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target);
					// LiteralBoolean LiteralBoolean211
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralBoolean211->setThisElementPtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralBoolean211);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralBoolean211->setName("LiteralBoolean211");
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralBoolean211->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralBoolean211->setValue(true);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210->setGuard(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210_LiteralBoolean211);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow210);
				// ControlFlow ControlFlow222 from Launch start to CreateObjectActionMeasureStation
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow222->setThisActivityEdgePtr(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow222);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow222->setName("ControlFlow222");
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow222->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow222->setSource(MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start);
				MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow222->setTarget(MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation);
			MeasureStation_Model_Launch_LaunchMeasureActivity->addEdge(MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow222);
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
				// ActivityParameterNode newMeasurementInput
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput->setName("newMeasurementInput");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput->setParameter(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addNode(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput);
				// ReadSelfAction This
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This->setThisExecutableNodePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This->setName("This");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin247
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247->setName("OutputPin247");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247->setType(MeasureStation_Model_WaferHeightMap);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This->setResult(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addNode(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This);
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
				// ValueSpecificationAction AtPosition
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setThisExecutableNodePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setName("AtPosition");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setVisibility(VisibilityKind::public_);
					// LiteralUnlimitedNatural LiteralUnlimitedNatural257
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural257->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural257);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural257->setName("LiteralUnlimitedNatural257");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural257->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural257->setValue(0);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setValue(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural257);
					// OutputPin OutputPin258
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258->setName("OutputPin258");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_UnlimitedNatural);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition->setResult(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addNode(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition);
				// ObjectFlow ObjectFlow223 from newMeasurementInput to value
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223->setThisActivityEdgePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223->setName("ObjectFlow223");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223->setSource(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223->setTarget(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value);
					// LiteralBoolean LiteralBoolean225
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralBoolean225->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralBoolean225);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralBoolean225->setName("LiteralBoolean225");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralBoolean225->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralBoolean225->setValue(true);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223->setGuard(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223_LiteralBoolean225);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addEdge(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow223);
				// ObjectFlow ObjectFlow240 from OutputPin258 to insertAt
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240->setThisActivityEdgePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240->setName("ObjectFlow240");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240->setSource(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin258);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240->setTarget(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt);
					// LiteralBoolean LiteralBoolean241
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralBoolean241->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralBoolean241);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralBoolean241->setName("LiteralBoolean241");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralBoolean241->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralBoolean241->setValue(true);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240->setGuard(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240_LiteralBoolean241);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addEdge(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow240);
				// ObjectFlow ObjectFlow244 from result to object
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244->setThisActivityEdgePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244->setName("ObjectFlow244");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244->setSource(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244->setTarget(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object);
					// LiteralBoolean LiteralBoolean246
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralBoolean246->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralBoolean246);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralBoolean246->setName("LiteralBoolean246");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralBoolean246->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralBoolean246->setValue(true);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244->setGuard(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244_LiteralBoolean246);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addEdge(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow244);
				// ObjectFlow ObjectFlow262 from OutputPin247 to object
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262->setThisActivityEdgePtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262->setName("ObjectFlow262");
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262->setSource(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin247);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262->setTarget(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object);
					// LiteralBoolean LiteralBoolean263
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralBoolean263->setThisElementPtr(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralBoolean263);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralBoolean263->setName("LiteralBoolean263");
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralBoolean263->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralBoolean263->setValue(true);
				MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262->setGuard(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262_LiteralBoolean263);
			MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl->addEdge(MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow262);
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
		// Class MarkMeasurement
		MeasureStation_Model_MarkMeasurement->setThisClass_Ptr(MeasureStation_Model_MarkMeasurement);
		MeasureStation_Model_MarkMeasurement->setName("MarkMeasurement");
		MeasureStation_Model_MarkMeasurement->setVisibility(VisibilityKind::public_);
		
			// Property zpos
			MeasureStation_Model_MarkMeasurement_zpos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_zpos);
			MeasureStation_Model_MarkMeasurement_zpos->setName("zpos");
			MeasureStation_Model_MarkMeasurement_zpos->setVisibility(VisibilityKind::public_);
			
			MeasureStation_Model_MarkMeasurement_zpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				// LiteralReal LiteralReal354
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal354->setThisElementPtr(MeasureStation_Model_MarkMeasurement_zpos_LiteralReal354);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal354->setName("LiteralReal354");
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal354->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MarkMeasurement_zpos_LiteralReal354->setValue(0.0f);
			MeasureStation_Model_MarkMeasurement_zpos->setDefaultValue(MeasureStation_Model_MarkMeasurement_zpos_LiteralReal354);
		MeasureStation_Model_MarkMeasurement->addOwnedAttribute(MeasureStation_Model_MarkMeasurement_zpos);
			// Property position
			MeasureStation_Model_MarkMeasurement_position->setThisElementPtr(MeasureStation_Model_MarkMeasurement_position);
			MeasureStation_Model_MarkMeasurement_position->setName("position");
			MeasureStation_Model_MarkMeasurement_position->setVisibility(VisibilityKind::public_);
			
			MeasureStation_Model_MarkMeasurement_position->setType(MeasureStation_Model_Position);
			MeasureStation_Model_MarkMeasurement_position->setAggregation(AggregationKind::shared);
		MeasureStation_Model_MarkMeasurement->addOwnedAttribute(MeasureStation_Model_MarkMeasurement_position);
		// Activity DoMeasurementActivity
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->setThisActivityPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->setName("DoMeasurementActivity");
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->setVisibility(VisibilityKind::public_);
			// OpaqueBehavior OpaqueBehaviorCalculateZPos
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos->setThisClass_Ptr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos->setName("OpaqueBehaviorCalculateZPos");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos->setVisibility(VisibilityKind::public_);
				
					// Parameter result
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result->setName("result");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result->setVisibility(VisibilityKind::public_);
					
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result->setDirection(ParameterDirectionKind::out);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos->addOwnedParameter(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos_result);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addOwnedBehavior(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos);
				// Parameter atXpos
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos->setName("atXpos");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addOwnedParameter(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos);
				// Parameter atYpos
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos->setName("atYpos");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addOwnedParameter(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos);
				// ActivityParameterNode atXPosActivityParameterNode
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode->setName("atXPosActivityParameterNode");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode->setParameter(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXpos);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode);
				// AddStructuralFeatureValueAction SetPositionValues
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues->setThisExecutableNodePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues->setName("SetPositionValues");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues->setStructuralFeature(MeasureStation_Model_MarkMeasurement_position);
					// InputPin object
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object->setName("object");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object->setType(MeasureStation_Model_MarkMeasurement);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues->setObject(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object);
					// InputPin value
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value->setName("value");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value->setType(MeasureStation_Model_Position);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues->setValue(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value);
					// OutputPin result
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result->setName("result");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result->setType(MeasureStation_Model_MarkMeasurement);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues->setResult(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_result);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues);
				// CallOperationAction CallSetXPos
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos->setThisExecutableNodePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos->setName("CallSetXPos");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos->setOperation(MeasureStation_Model_Position_SetXPos_Real);
					// InputPin target
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target->setName("target");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target->setType(MeasureStation_Model_Position);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target);
					// InputPin xPos
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos->setName("xPos");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos->addArgument(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos);
				// ActivityParameterNode atYPosActivityParameterNode
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode->setName("atYPosActivityParameterNode");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode->setParameter(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYpos);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode);
				// AddStructuralFeatureValueAction SetZPosValue
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue->setThisExecutableNodePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue->setName("SetZPosValue");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue->setStructuralFeature(MeasureStation_Model_MarkMeasurement_zpos);
					// InputPin object
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object->setName("object");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object->setType(MeasureStation_Model_MarkMeasurement);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue->setObject(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object);
					// InputPin value
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value->setName("value");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue->setValue(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value);
					// OutputPin result
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result->setName("result");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result->setType(MeasureStation_Model_MarkMeasurement);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue->setResult(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_result);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue);
				// CreateObjectAction CreatePosition
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition->setThisExecutableNodePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition->setName("CreatePosition");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition->setClassifier(MeasureStation_Model_Position);
					// OutputPin result
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result->setName("result");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result->setType(MeasureStation_Model_Position);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition->setResult(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition);
				// InitialNode StartNode
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_StartNode->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_StartNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_StartNode->setName("StartNode");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_StartNode->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_StartNode);
				// ReadSelfAction This
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This->setThisExecutableNodePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This->setName("This");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This->setVisibility(VisibilityKind::public_);
					// OutputPin OutputPin293
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293->setName("OutputPin293");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293->setType(MeasureStation_Model_MarkMeasurement);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This->setResult(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This);
				// CallBehaviorAction CallCalculateZPosOpaqueBehavior
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior->setThisExecutableNodePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior->setName("CallCalculateZPosOpaqueBehavior");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior->setVisibility(VisibilityKind::public_);
				
					// OutputPin result
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result->setName("result");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior->addResult(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior->setBehavior(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_OpaqueBehaviorCalculateZPos);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior);
				// ForkNode ThisObjectForkNode
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode->setName("ThisObjectForkNode");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode);
				// CallOperationAction CallSetYPos
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos->setThisExecutableNodePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos->setName("CallSetYPos");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos->setVisibility(VisibilityKind::public_);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos->setOperation(MeasureStation_Model_Position_SetYPos_Real);
					// InputPin target
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target->setName("target");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target->setType(MeasureStation_Model_Position);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target);
					// InputPin yPos
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos->setName("yPos");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos->addArgument(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos);
				// ActivityFinalNode EndNode
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_EndNode->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_EndNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_EndNode->setName("EndNode");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_EndNode->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_EndNode);
				// ForkNode PositionForkNode
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode->setName("PositionForkNode");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode->setVisibility(VisibilityKind::public_);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addNode(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode);
				// ControlFlow ControlFlow301 from StartNode to CreatePosition
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow301->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow301);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow301->setName("ControlFlow301");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow301->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow301->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_StartNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow301->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow301);
				// ObjectFlow ObjectFlow272 from ThisObjectForkNode to object
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272->setName("ObjectFlow272");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_object);
					// LiteralBoolean LiteralBoolean273
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralBoolean273->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralBoolean273);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralBoolean273->setName("LiteralBoolean273");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralBoolean273->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralBoolean273->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272_LiteralBoolean273);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow272);
				// ObjectFlow ObjectFlow275 from OutputPin293 to ThisObjectForkNode
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275->setName("ObjectFlow275");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_This_OutputPin293);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode);
					// LiteralBoolean LiteralBoolean277
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralBoolean277->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralBoolean277);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralBoolean277->setName("LiteralBoolean277");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralBoolean277->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralBoolean277->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275_LiteralBoolean277);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow275);
				// ObjectFlow ObjectFlow313 from result to value
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313->setName("ObjectFlow313");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior_result);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_value);
					// LiteralBoolean LiteralBoolean314
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralBoolean314->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralBoolean314);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralBoolean314->setName("LiteralBoolean314");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralBoolean314->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralBoolean314->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313_LiteralBoolean314);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow313);
				// ObjectFlow ObjectFlow322 from PositionForkNode to target
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322->setName("ObjectFlow322");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_target);
					// LiteralBoolean LiteralBoolean323
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralBoolean323->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralBoolean323);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralBoolean323->setName("LiteralBoolean323");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralBoolean323->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralBoolean323->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322_LiteralBoolean323);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow322);
				// ControlFlow ControlFlow278 from SetZPosValue to EndNode
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow278->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow278);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow278->setName("ControlFlow278");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow278->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow278->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow278->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_EndNode);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow278);
				// ControlFlow ControlFlow279 from SetPositionValues to CallCalculateZPosOpaqueBehavior
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow279->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow279);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow279->setName("ControlFlow279");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow279->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow279->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow279->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallCalculateZPosOpaqueBehavior);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow279);
				// ControlFlow ControlFlow325 from CallSetXPos to CallSetYPos
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow325->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow325);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow325->setName("ControlFlow325");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow325->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow325->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow325->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow325);
				// ObjectFlow ObjectFlow280 from result to PositionForkNode
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280->setName("ObjectFlow280");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition_result);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode);
					// LiteralBoolean LiteralBoolean281
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralBoolean281->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralBoolean281);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralBoolean281->setName("LiteralBoolean281");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralBoolean281->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralBoolean281->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280_LiteralBoolean281);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow280);
				// ObjectFlow ObjectFlow335 from PositionForkNode to value
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335->setName("ObjectFlow335");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues_value);
					// LiteralBoolean LiteralBoolean337
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralBoolean337->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralBoolean337);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralBoolean337->setName("LiteralBoolean337");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralBoolean337->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralBoolean337->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335_LiteralBoolean337);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow335);
				// ObjectFlow ObjectFlow284 from PositionForkNode to target
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284->setName("ObjectFlow284");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_PositionForkNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_target);
					// LiteralBoolean LiteralBoolean286
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralBoolean286->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralBoolean286);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralBoolean286->setName("LiteralBoolean286");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralBoolean286->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralBoolean286->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284_LiteralBoolean286);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow284);
				// ObjectFlow ObjectFlow290 from atYPosActivityParameterNode to yPos
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290->setName("ObjectFlow290");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atYPosActivityParameterNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos_yPos);
					// LiteralBoolean LiteralBoolean291
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralBoolean291->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralBoolean291);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralBoolean291->setName("LiteralBoolean291");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralBoolean291->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralBoolean291->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290_LiteralBoolean291);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow290);
				// ObjectFlow ObjectFlow338 from ThisObjectForkNode to object
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338->setName("ObjectFlow338");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ThisObjectForkNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetZPosValue_object);
					// LiteralBoolean LiteralBoolean340
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralBoolean340->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralBoolean340);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralBoolean340->setName("LiteralBoolean340");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralBoolean340->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralBoolean340->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338_LiteralBoolean340);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow338);
				// ControlFlow ControlFlow297 from CallSetYPos to SetPositionValues
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow297->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow297);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow297->setName("ControlFlow297");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow297->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow297->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetYPos);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow297->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_SetPositionValues);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow297);
				// ControlFlow ControlFlow298 from CreatePosition to CallSetXPos
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow298->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow298);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow298->setName("ControlFlow298");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow298->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow298->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CreatePosition);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow298->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ControlFlow298);
				// ObjectFlow ObjectFlow344 from atXPosActivityParameterNode to xPos
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344->setThisActivityEdgePtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344->setName("ObjectFlow344");
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344->setVisibility(VisibilityKind::public_);
				
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344->setSource(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_atXPosActivityParameterNode);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344->setTarget(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_CallSetXPos_xPos);
					// LiteralBoolean LiteralBoolean345
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralBoolean345->setThisElementPtr(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralBoolean345);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralBoolean345->setName("LiteralBoolean345");
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralBoolean345->setVisibility(VisibilityKind::public_);
					MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralBoolean345->setValue(true);
				MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344->setGuard(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344_LiteralBoolean345);
			MeasureStation_Model_MarkMeasurement_DoMeasurementActivity->addEdge(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity_ObjectFlow344);
		MeasureStation_Model_MarkMeasurement->addOwnedBehavior(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity);
		
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
			MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real->addMethod(MeasureStation_Model_MarkMeasurement_DoMeasurementActivity);
		MeasureStation_Model_MarkMeasurement->addOwnedOperation(MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real);
	MeasureStation_Model->addPackagedElement(MeasureStation_Model_MarkMeasurement);
}
