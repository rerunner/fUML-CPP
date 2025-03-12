/*
 * MeasureStation_ModelModel.h
 * 
 * Auto-generated file
 */

#ifndef MEASURESTATION_MODEL_MODEL_H
#define MEASURESTATION_MODEL_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace MeasureStation_Model
{
	class MeasureStation_ModelModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model MeasureStation Model
		 */
		PackagePtr MeasureStation_Model = nullptr;
			Class_Ptr MeasureStation_Model_MeasureStation = nullptr;
				PropertyPtr MeasureStation_Model_MeasureStation_waferHeightMap = nullptr;
					LiteralIntegerPtr MeasureStation_Model_MeasureStation_waferHeightMap_LiteralInteger0 = nullptr;
					LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_waferHeightMap_LiteralUnlimitedNatural1 = nullptr;
				OperationPtr MeasureStation_Model_MeasureStation_Initialize = nullptr;
				OperationPtr MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String = nullptr;
					ParameterPtr MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralInteger2 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_resultingWaferHeightMap_LiteralUnlimitedNatural3 = nullptr;
					ParameterPtr MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralUnlimitedNatural4 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_WaferHeightMap_MeasureWaferHeightMap_String_currentWafer_LiteralInteger5 = nullptr;
				ActivityPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity = nullptr;
					ActivityParameterNodePtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeCurrentWaferID_LiteralInteger6 = nullptr;
					ParameterPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralUnlimitedNatural7 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_currentWafer_LiteralInteger8 = nullptr;
					ActivityParameterNodePtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ActivityParameterNodeResultingWaferHeightMap_LiteralInteger9 = nullptr;
					ObjectFlowPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralBoolean11 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_ObjectFlow10_LiteralInteger12 = nullptr;
					CreateObjectActionPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap = nullptr;
						OutputPinPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger13 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralInteger14 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_CreateNewWaferHeightMap_result_LiteralUnlimitedNatural15 = nullptr;
					ParameterPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralUnlimitedNatural16 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_MeasureWaferHeightMapActivity_resultingWaferHeightMap_LiteralInteger17 = nullptr;
				ActivityPtr MeasureStation_Model_MeasureStation_InitializeActivity = nullptr;
					ObjectFlowPtr MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralInteger19 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow18_LiteralBoolean20 = nullptr;
					AddStructuralFeatureValueActionPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements = nullptr;
						InputPinPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger21 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralUnlimitedNatural22 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_object_LiteralInteger23 = nullptr;
						InputPinPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger24 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralUnlimitedNatural25 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_value_LiteralInteger26 = nullptr;
						OutputPinPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralUnlimitedNatural27 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_Set_NrOfMeasurements_result_LiteralInteger28 = nullptr;
					ReadSelfActionPtr MeasureStation_Model_MeasureStation_InitializeActivity_This = nullptr;
						OutputPinPtr MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29_LiteralInteger30 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29_LiteralUnlimitedNatural31 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_This_OutputPin29_LiteralInteger32 = nullptr;
					ValueSpecificationActionPtr MeasureStation_Model_MeasureStation_InitializeActivity_0 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_0_LiteralInteger33 = nullptr;
						OutputPinPtr MeasureStation_Model_MeasureStation_InitializeActivity_0_result = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger34 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralUnlimitedNatural35 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_0_result_LiteralInteger36 = nullptr;
					ObjectFlowPtr MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralInteger38 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_MeasureStation_InitializeActivity_ObjectFlow37_LiteralBoolean39 = nullptr;
				PropertyPtr MeasureStation_Model_MeasureStation_nrOfMeasurements = nullptr;
					LiteralUnlimitedNaturalPtr MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralUnlimitedNatural40 = nullptr;
					LiteralIntegerPtr MeasureStation_Model_MeasureStation_nrOfMeasurements_LiteralInteger41 = nullptr;
			Class_Ptr MeasureStation_Model_MarkMeasurement = nullptr;
				OpaqueBehaviorPtr MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior = nullptr;
					ParameterPtr MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos_LiteralInteger42 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atYpos_LiteralUnlimitedNatural43 = nullptr;
					ParameterPtr MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos_LiteralInteger44 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_MarkMeasurement_DoMeasurementOpaqueBehavior_atXpos_LiteralUnlimitedNatural45 = nullptr;
				PropertyPtr MeasureStation_Model_MarkMeasurement_zpos = nullptr;
					LiteralIntegerPtr MeasureStation_Model_MarkMeasurement_zpos_LiteralInteger46 = nullptr;
					LiteralUnlimitedNaturalPtr MeasureStation_Model_MarkMeasurement_zpos_LiteralUnlimitedNatural47 = nullptr;
					LiteralRealPtr MeasureStation_Model_MarkMeasurement_zpos_LiteralReal48 = nullptr;
				PropertyPtr MeasureStation_Model_MarkMeasurement_position = nullptr;
					LiteralIntegerPtr MeasureStation_Model_MarkMeasurement_position_LiteralInteger49 = nullptr;
					LiteralUnlimitedNaturalPtr MeasureStation_Model_MarkMeasurement_position_LiteralUnlimitedNatural50 = nullptr;
				OperationPtr MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real = nullptr;
					ParameterPtr MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralInteger51 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atYpos_LiteralUnlimitedNatural52 = nullptr;
					ParameterPtr MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralUnlimitedNatural53 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_MarkMeasurement_DoMeasurement_Real_Real_atXpos_LiteralInteger54 = nullptr;
			/*
			 * Package Launch
			 */
			PackagePtr MeasureStation_Model_Launch = nullptr;
				ActivityPtr MeasureStation_Model_Launch_LaunchMeasureActivity = nullptr;
					ValueSpecificationActionPtr MeasureStation_Model_Launch_LaunchMeasureActivity_waferID = nullptr;
						OutputPinPtr MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger55 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralInteger56 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_resultingWID_LiteralUnlimitedNatural57 = nullptr;
						LiteralStringPtr MeasureStation_Model_Launch_LaunchMeasureActivity_waferID_A0000001 = nullptr;
					ControlFlowPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow58 = nullptr;
					CreateObjectActionPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation = nullptr;
						OutputPinPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger59 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralInteger60 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CreateObjectActionMeasureStation_result_LiteralUnlimitedNatural61 = nullptr;
					ObjectFlowPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralBoolean63 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow62_LiteralInteger64 = nullptr;
					ObjectFlowPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralInteger66 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow65_LiteralBoolean67 = nullptr;
					InitialNodePtr MeasureStation_Model_Launch_LaunchMeasureActivity_Launch_start = nullptr;
					ControlFlowPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow68 = nullptr;
					CallOperationActionPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap = nullptr;
						OutputPinPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger69 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralInteger70 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_resultingWaferHeightMap_LiteralUnlimitedNatural71 = nullptr;
						InputPinPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralUnlimitedNatural72 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger73 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_target_LiteralInteger74 = nullptr;
						InputPinPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger75 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralInteger76 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Launch_LaunchMeasureActivity_CallOperationMeasureWaferHeightMap_currentWafer_LiteralUnlimitedNatural77 = nullptr;
					ObjectFlowPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralBoolean79 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow78_LiteralInteger80 = nullptr;
					ForkNodePtr MeasureStation_Model_Launch_LaunchMeasureActivity_ForkNode9 = nullptr;
					ObjectFlowPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralInteger82 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ObjectFlow81_LiteralBoolean83 = nullptr;
					CallOperationActionPtr MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation = nullptr;
						InputPinPtr MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger84 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralUnlimitedNatural85 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Launch_LaunchMeasureActivity_InitializeMeasureStation_target_LiteralInteger86 = nullptr;
					ControlFlowPtr MeasureStation_Model_Launch_LaunchMeasureActivity_ControlFlow87 = nullptr;
			Class_Ptr MeasureStation_Model_WaferHeightMap = nullptr;
				ActivityPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl = nullptr;
					ActivityParameterNodePtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput = nullptr;
						LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_newMeasurementInput_LiteralInteger88 = nullptr;
					ValueSpecificationActionPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition = nullptr;
						OutputPinPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89_LiteralInteger90 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89_LiteralUnlimitedNatural91 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_OutputPin89_LiteralInteger92 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_AtPosition_LiteralUnlimitedNatural93 = nullptr;
					ParameterPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement = nullptr;
						LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralInteger94 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurement_LiteralUnlimitedNatural95 = nullptr;
					ObjectFlowPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralInteger97 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow96_LiteralBoolean98 = nullptr;
					ReadStructuralFeatureActionPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction = nullptr;
						InputPinPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger99 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralUnlimitedNatural100 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_object_LiteralInteger101 = nullptr;
						OutputPinPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralUnlimitedNatural102 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger103 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementListReadStructuralFeatureAction_result_LiteralInteger104 = nullptr;
					ObjectFlowPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralInteger106 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow105_LiteralBoolean107 = nullptr;
					ReadSelfActionPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This = nullptr;
						OutputPinPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108_LiteralUnlimitedNatural109 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108_LiteralInteger110 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_This_OutputPin108_LiteralInteger111 = nullptr;
					ObjectFlowPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralBoolean113 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow112_LiteralInteger114 = nullptr;
					ObjectFlowPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralBoolean116 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_ObjectFlow115_LiteralInteger117 = nullptr;
					AddStructuralFeatureValueActionPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction = nullptr;
						OutputPinPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralUnlimitedNatural118 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger119 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_result_LiteralInteger120 = nullptr;
						InputPinPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger121 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralInteger122 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_value_LiteralUnlimitedNatural123 = nullptr;
						InputPinPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger124 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralInteger125 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_object_LiteralUnlimitedNatural126 = nullptr;
						InputPinPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger127 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralInteger128 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurementImpl_measurementsListAddStructuralFeatureValueAction_insertAt_LiteralUnlimitedNatural129 = nullptr;
				OperationPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement = nullptr;
					ParameterPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralUnlimitedNatural130 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_AddMarkMeasurement_MarkMeasurement_measurement_LiteralInteger131 = nullptr;
				PropertyPtr MeasureStation_Model_WaferHeightMap_measurements = nullptr;
					LiteralUnlimitedNaturalPtr MeasureStation_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural132 = nullptr;
					LiteralIntegerPtr MeasureStation_Model_WaferHeightMap_measurements_LiteralInteger133 = nullptr;
			Class_Ptr MeasureStation_Model_Position = nullptr;
				ActivityPtr MeasureStation_Model_Position_GetYposImpl = nullptr;
					ParameterPtr MeasureStation_Model_Position_GetYposImpl_Parameter134 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_GetYposImpl_Parameter134_LiteralUnlimitedNatural135 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_Parameter134_LiteralInteger136 = nullptr;
					ObjectFlowPtr MeasureStation_Model_Position_GetYposImpl_ObjectFlow137 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralBoolean138 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_ObjectFlow137_LiteralInteger139 = nullptr;
					ReadStructuralFeatureActionPtr MeasureStation_Model_Position_GetYposImpl_ReadYpos = nullptr;
						OutputPinPtr MeasureStation_Model_Position_GetYposImpl_ReadYpos_result = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralUnlimitedNatural140 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger141 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_ReadYpos_result_LiteralInteger142 = nullptr;
						InputPinPtr MeasureStation_Model_Position_GetYposImpl_ReadYpos_object = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralUnlimitedNatural143 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger144 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_ReadYpos_object_LiteralInteger145 = nullptr;
					ActivityParameterNodePtr MeasureStation_Model_Position_GetYposImpl_GetYposResult = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_GetYposResult_LiteralInteger146 = nullptr;
					ReadSelfActionPtr MeasureStation_Model_Position_GetYposImpl_This = nullptr;
						OutputPinPtr MeasureStation_Model_Position_GetYposImpl_This_OutputPin147 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_This_OutputPin147_LiteralInteger148 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_GetYposImpl_This_OutputPin147_LiteralUnlimitedNatural149 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_This_OutputPin147_LiteralInteger150 = nullptr;
					ObjectFlowPtr MeasureStation_Model_Position_GetYposImpl_ObjectFlow151 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralBoolean152 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_GetYposImpl_ObjectFlow151_LiteralInteger153 = nullptr;
				PropertyPtr MeasureStation_Model_Position_xpos = nullptr;
					LiteralIntegerPtr MeasureStation_Model_Position_xpos_LiteralInteger154 = nullptr;
					LiteralRealPtr MeasureStation_Model_Position_xpos_LiteralReal155 = nullptr;
					LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_xpos_LiteralUnlimitedNatural156 = nullptr;
				ActivityPtr MeasureStation_Model_Position_GetXposImpl = nullptr;
					ReadSelfActionPtr MeasureStation_Model_Position_GetXposImpl_This = nullptr;
						OutputPinPtr MeasureStation_Model_Position_GetXposImpl_This_OutputPin157 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_GetXposImpl_This_OutputPin157_LiteralUnlimitedNatural158 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_This_OutputPin157_LiteralInteger159 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_This_OutputPin157_LiteralInteger160 = nullptr;
					ActivityParameterNodePtr MeasureStation_Model_Position_GetXposImpl_GetXposResult = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_GetXposResult_LiteralInteger161 = nullptr;
					ObjectFlowPtr MeasureStation_Model_Position_GetXposImpl_ObjectFlow162 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralInteger163 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_Position_GetXposImpl_ObjectFlow162_LiteralBoolean164 = nullptr;
					ReadStructuralFeatureActionPtr MeasureStation_Model_Position_GetXposImpl_ReadXpos = nullptr;
						InputPinPtr MeasureStation_Model_Position_GetXposImpl_ReadXpos_object = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralUnlimitedNatural165 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger166 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_ReadXpos_object_LiteralInteger167 = nullptr;
						OutputPinPtr MeasureStation_Model_Position_GetXposImpl_ReadXpos_result = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger168 = nullptr;
							LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralInteger169 = nullptr;
							LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_GetXposImpl_ReadXpos_result_LiteralUnlimitedNatural170 = nullptr;
					ParameterPtr MeasureStation_Model_Position_GetXposImpl_xposValue = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralInteger171 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_GetXposImpl_xposValue_LiteralUnlimitedNatural172 = nullptr;
					ObjectFlowPtr MeasureStation_Model_Position_GetXposImpl_ObjectFlow173 = nullptr;
						LiteralBooleanPtr MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralBoolean174 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_GetXposImpl_ObjectFlow173_LiteralInteger175 = nullptr;
				OperationPtr MeasureStation_Model_Position_Real_GetXpos = nullptr;
					ParameterPtr MeasureStation_Model_Position_Real_GetXpos_xposValue = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralInteger176 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_Real_GetXpos_xposValue_LiteralUnlimitedNatural177 = nullptr;
				PropertyPtr MeasureStation_Model_Position_ypos = nullptr;
					LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_ypos_LiteralUnlimitedNatural178 = nullptr;
					LiteralIntegerPtr MeasureStation_Model_Position_ypos_LiteralInteger179 = nullptr;
					LiteralRealPtr MeasureStation_Model_Position_ypos_LiteralReal180 = nullptr;
				OperationPtr MeasureStation_Model_Position_Real_GetYpos = nullptr;
					ParameterPtr MeasureStation_Model_Position_Real_GetYpos_Parameter181 = nullptr;
						LiteralUnlimitedNaturalPtr MeasureStation_Model_Position_Real_GetYpos_Parameter181_LiteralUnlimitedNatural182 = nullptr;
						LiteralIntegerPtr MeasureStation_Model_Position_Real_GetYpos_Parameter181_LiteralInteger183 = nullptr;

		public:
			virtual ~MeasureStation_ModelModel();
			static const std::shared_ptr<MeasureStation_ModelModel>& Instance();

		private:
			MeasureStation_ModelModel();
			void initializeInMemoryModel();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* MEASURESTATION_MODEL_MODEL_H */
