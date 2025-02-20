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
					LiteralIntegerPtr Expose_Station_Model_WaferHeightMap_measurements_LiteralInteger0 = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural1 = nullptr;
			AssociationPtr Expose_Station_Model_Association2 = nullptr;
				PropertyPtr Expose_Station_Model_Association2_exposestation = nullptr;
					LiteralIntegerPtr Expose_Station_Model_Association2_exposestation_LiteralInteger3 = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_Association2_exposestation_LiteralUnlimitedNatural4 = nullptr;
				PropertyPtr Expose_Station_Model_Association2_waferheightmap = nullptr;
					LiteralIntegerPtr Expose_Station_Model_Association2_waferheightmap_LiteralInteger5 = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_Association2_waferheightmap_LiteralUnlimitedNatural6 = nullptr;
			InstanceSpecificationPtr Expose_Station_Model_InstanceSpecification7 = nullptr;
			Class_Ptr Expose_Station_Model_ExposeStation = nullptr;
				OpaqueBehaviorPtr Expose_Station_Model_ExposeStation_SearchWHMOpaqueBehavior = nullptr;
				OperationPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralUnlimitedNatural8 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_waferID_LiteralInteger9 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralUnlimitedNatural10 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_LiteralInteger11 = nullptr;
						InstanceValuePtr Expose_Station_Model_ExposeStation_WaferHeightMap_FindWaferHeightMap_String_result_defaultWHM = nullptr;
				OperationPtr Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result_LiteralInteger12 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_result_LiteralUnlimitedNatural13 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID_LiteralUnlimitedNatural14 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_WaferHeightMap_SearchWHM_String_waferID_LiteralInteger15 = nullptr;
				OperationPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger16 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger17 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralUnlimitedNatural18 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger19 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralUnlimitedNatural20 = nullptr;
				ActivityPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl = nullptr;
					CallOperationActionPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result_LiteralInteger21 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result_LiteralInteger22 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_result_LiteralUnlimitedNatural23 = nullptr;
						InputPinPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID_LiteralInteger24 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID_LiteralInteger25 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_waferID_LiteralUnlimitedNatural26 = nullptr;
						InputPinPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target_LiteralInteger27 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target_LiteralUnlimitedNatural28 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_CallOperationActionSearchWHM_target_LiteralUnlimitedNatural29 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralBoolean31 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow30_LiteralInteger32 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralInteger34 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow33_LiteralBoolean35 = nullptr;
					ActivityParameterNodePtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferID_LiteralInteger36 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralBoolean38 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ObjectFlow37_LiteralInteger39 = nullptr;
					ReadSelfActionPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger40 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralUnlimitedNatural41 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_result_LiteralInteger42 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralInteger43 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_waferID_LiteralUnlimitedNatural44 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralUnlimitedNatural45 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_result_LiteralInteger46 = nullptr;
					ReadSelfActionPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object_LiteralInteger47 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object_LiteralUnlimitedNatural48 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_This_object_LiteralUnlimitedNatural49 = nullptr;
					ActivityParameterNodePtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_FindWaferHeightMapImpl_ActivityParameterNodeWaferHeightMap_LiteralInteger50 = nullptr;
				ActivityPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralBoolean52 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow51_LiteralInteger53 = nullptr;
					ValueSpecificationActionPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger54 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralInteger55 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_result_LiteralUnlimitedNatural56 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_TemporaryResultValueSpecificationAction_LiteralInteger57 = nullptr;
					ActivityParameterNodePtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeCurrentWaferId_LiteralInteger58 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralInteger60 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow59_LiteralBoolean61 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralInteger62 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_currentWaferID_LiteralUnlimitedNatural63 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_result = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralInteger64 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_result_LiteralUnlimitedNatural65 = nullptr;
					ReadSelfActionPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger66 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralInteger67 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_This_object_LiteralUnlimitedNatural68 = nullptr;
					CallOperationActionPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap = nullptr;
						InputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger69 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralInteger70 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_target_LiteralUnlimitedNatural71 = nullptr;
						OutputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger72 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralUnlimitedNatural73 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_result_LiteralInteger74 = nullptr;
						InputPinPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralUnlimitedNatural75 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger76 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_CallOperationActionFindWaferHeightMap_waferID_LiteralInteger77 = nullptr;
					ObjectFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralBoolean79 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ObjectFlow78_LiteralInteger80 = nullptr;
					ActivityParameterNodePtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_ExposeWaferImpl_ActivityParameterNodeResult_LiteralInteger81 = nullptr;
			InstanceSpecificationPtr Expose_Station_Model_emptyWHM = nullptr;
			/*
			 * Package Launch
			 */
			PackagePtr Expose_Station_Model_Launch = nullptr;
				ActivityPtr Expose_Station_Model_Launch_LaunchExposeActivity = nullptr;
					ControlFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow82 = nullptr;
					ActivityFinalNodePtr Expose_Station_Model_Launch_LaunchExposeActivity_ActivityFinalNode14 = nullptr;
					ValueSpecificationActionPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID = nullptr;
						OutputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralUnlimitedNatural83 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger84 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger85 = nullptr;
						LiteralStringPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_A0000001 = nullptr;
					ObjectFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralBoolean87 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow86_LiteralInteger88 = nullptr;
					InitialNodePtr Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4 = nullptr;
					ObjectFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralInteger90 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow89_LiteralBoolean91 = nullptr;
					CreateObjectActionPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation = nullptr;
						OutputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger92 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger93 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralUnlimitedNatural94 = nullptr;
					ObjectFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralBoolean96 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow95_LiteralInteger97 = nullptr;
					CallOperationActionPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer = nullptr;
						InputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralUnlimitedNatural98 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger99 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_currentWaferID_LiteralInteger100 = nullptr;
						InputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralUnlimitedNatural101 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger102 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_target_LiteralInteger103 = nullptr;
						OutputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralUnlimitedNatural104 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger105 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallOperationExposeWafer_result_LiteralInteger106 = nullptr;

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
