/*
 * Expose_Station_ModelModel.h
 * 
 * Auto-generated file
 */

#ifndef EXPOSE_STATION_MODEL_MODEL_H
#define EXPOSE_STATION_MODEL_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Expose_Station_Model
{
	class Expose_Station_ModelModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model Expose Station Model
		 */
		PackagePtr Expose_Station_Model = nullptr;
			Class_Ptr Expose_Station_Model_WaferHeightMap = nullptr;
				PropertyPtr Expose_Station_Model_WaferHeightMap_measurements = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural0 = nullptr;
					LiteralIntegerPtr Expose_Station_Model_WaferHeightMap_measurements_LiteralInteger1 = nullptr;
			/*
			 * Package Launch
			 */
			PackagePtr Expose_Station_Model_Launch = nullptr;
				ActivityPtr Expose_Station_Model_Launch_LaunchExposeActivity = nullptr;
					InitialNodePtr Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4 = nullptr;
					CreateObjectActionPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation = nullptr;
						OutputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralUnlimitedNatural2 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger3 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger4 = nullptr;
					ActivityFinalNodePtr Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14 = nullptr;
					CallOperationActionPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer = nullptr;
						InputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralUnlimitedNatural5 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger6 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger7 = nullptr;
						InputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger8 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger9 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralUnlimitedNatural10 = nullptr;
						OutputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralUnlimitedNatural11 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger12 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger13 = nullptr;
					ValueSpecificationActionPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID = nullptr;
						LiteralStringPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001 = nullptr;
						OutputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger14 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralUnlimitedNatural15 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger16 = nullptr;
					ObjectFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralBoolean18 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow17_LiteralInteger19 = nullptr;
					ObjectFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralBoolean21 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow20_LiteralInteger22 = nullptr;
					ObjectFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralBoolean24 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow23_LiteralInteger25 = nullptr;
					ControlFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26 = nullptr;
			Class_Ptr Expose_Station_Model_ExposeStation = nullptr;
				OperationPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralUnlimitedNatural27 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralInteger28 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralUnlimitedNatural29 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralInteger30 = nullptr;
				OperationPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralUnlimitedNatural31 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger32 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralUnlimitedNatural33 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger34 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger35 = nullptr;
				ActivityPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralInteger37 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow36_LiteralBoolean38 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralBoolean40 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow39_LiteralInteger41 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_result = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralUnlimitedNatural42 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralInteger43 = nullptr;
					ActivityParameterNodePtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId_LiteralInteger44 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralBoolean46 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow45_LiteralInteger47 = nullptr;
					MergeNodePtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_MergeNode11 = nullptr;
					ValueSpecificationActionPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger48 = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger49 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralUnlimitedNatural50 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger51 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralInteger52 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralUnlimitedNatural53 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralBoolean55 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow54_LiteralInteger56 = nullptr;
					ActivityParameterNodePtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult_LiteralInteger57 = nullptr;
					ReadSelfActionPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger58 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger59 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralUnlimitedNatural60 = nullptr;
					CallOperationActionPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap = nullptr;
						InputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralUnlimitedNatural61 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger62 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger63 = nullptr;
						InputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger64 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralUnlimitedNatural65 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger66 = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralUnlimitedNatural67 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger68 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger69 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralBoolean71 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow70_LiteralInteger72 = nullptr;
				ActivityPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralInteger74 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow73_LiteralBoolean75 = nullptr;
					MergeNodePtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_MergeNode15 = nullptr;
					ActivityParameterNodePtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID_LiteralInteger76 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralInteger77 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralUnlimitedNatural78 = nullptr;
					CreateObjectActionPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object_LiteralInteger79 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object_LiteralInteger80 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CreateDummyObjectAction_object_LiteralUnlimitedNatural81 = nullptr;
					CallBehaviorActionPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM_LiteralInteger82 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM_LiteralUnlimitedNatural83 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_resultWHM_LiteralInteger84 = nullptr;
						InputPinPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin_LiteralUnlimitedNatural85 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin_LiteralInteger86 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallBehaviorActionWHM_WaferIDInputPin_LiteralInteger87 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralInteger89 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow88_LiteralBoolean90 = nullptr;
					ReadSelfActionPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger91 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralUnlimitedNatural92 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger93 = nullptr;
					ActivityParameterNodePtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap_LiteralInteger94 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralInteger96 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow95_LiteralBoolean97 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralInteger98 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralUnlimitedNatural99 = nullptr;
					OpaqueBehaviorPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior = nullptr;
						ParameterPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter_LiteralUnlimitedNatural100 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WaferIDParameter_LiteralInteger101 = nullptr;
						ParameterPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter_LiteralUnlimitedNatural102 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_WHMParameter_LiteralInteger103 = nullptr;
						ParameterPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value_LiteralInteger104 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_findWHMOpaqueBehavior_value_LiteralUnlimitedNatural105 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralInteger107 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow106_LiteralBoolean108 = nullptr;
			AssociationPtr Expose_Station_Model_Association109 = nullptr;
				PropertyPtr Expose_Station_Model_Association109_exposestation = nullptr;
					LiteralIntegerPtr Expose_Station_Model_Association109_exposestation_LiteralInteger110 = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_Association109_exposestation_LiteralUnlimitedNatural111 = nullptr;
				PropertyPtr Expose_Station_Model_Association109_waferheightmap = nullptr;
					LiteralIntegerPtr Expose_Station_Model_Association109_waferheightmap_LiteralInteger112 = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_Association109_waferheightmap_LiteralUnlimitedNatural113 = nullptr;

		public:
			virtual ~Expose_Station_ModelModel();
			static const std::shared_ptr<Expose_Station_ModelModel>& Instance();

		private:
			Expose_Station_ModelModel();
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

#endif /* EXPOSE_STATION_MODEL_MODEL_H */
