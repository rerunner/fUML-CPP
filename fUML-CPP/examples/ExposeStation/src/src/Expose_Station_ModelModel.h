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
			AssociationPtr Expose_Station_Model_Association0 = nullptr;
				PropertyPtr Expose_Station_Model_Association0_exposestation = nullptr;
					LiteralIntegerPtr Expose_Station_Model_Association0_exposestation_LiteralInteger1 = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_Association0_exposestation_LiteralUnlimitedNatural2 = nullptr;
				PropertyPtr Expose_Station_Model_Association0_waferheightmap = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_Association0_waferheightmap_LiteralUnlimitedNatural3 = nullptr;
					LiteralIntegerPtr Expose_Station_Model_Association0_waferheightmap_LiteralInteger4 = nullptr;
			Class_Ptr Expose_Station_Model_ExposeStation = nullptr;
				PropertyPtr Expose_Station_Model_ExposeStation_WaferID = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_WaferID_LiteralUnlimitedNatural5 = nullptr;
					LiteralIntegerPtr Expose_Station_Model_ExposeStation_WaferID_LiteralInteger6 = nullptr;
				OperationPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger7 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralUnlimitedNatural8 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_result_LiteralInteger9 = nullptr;
					ParameterPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger10 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralInteger11 = nullptr;
						LiteralUnlimitedNaturalPtr Expose_Station_Model_ExposeStation_Integer_ExposeWafer_String_currentWaferID_LiteralUnlimitedNatural12 = nullptr;
				ActivityPtr Expose_Station_Model_ExposeStation_ExposeWaferActivity = nullptr;
					OpaqueBehaviorPtr Expose_Station_Model_ExposeStation_ExposeWaferActivity_ExposeStepOpaqueBehavior = nullptr;
					ControlFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow13 = nullptr;
					CallBehaviorActionPtr Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionFindWaferHeightMap = nullptr;
					OpaqueBehaviorPtr Expose_Station_Model_ExposeStation_ExposeWaferActivity_FindWaferHeightMapOpaqueBehavior = nullptr;
					ActivityFinalNodePtr Expose_Station_Model_ExposeStation_ExposeWaferActivity_End_Activity = nullptr;
					InitialNodePtr Expose_Station_Model_ExposeStation_ExposeWaferActivity_Start_Activity = nullptr;
					ControlFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow14 = nullptr;
					ControlFlowPtr Expose_Station_Model_ExposeStation_ExposeWaferActivity_ControlFlow15 = nullptr;
					CallBehaviorActionPtr Expose_Station_Model_ExposeStation_ExposeWaferActivity_CallBehaviorActionExposeStep = nullptr;
			/*
			 * Package Launch
			 */
			PackagePtr Expose_Station_Model_Launch = nullptr;
				ActivityPtr Expose_Station_Model_Launch_LaunchExposeActivity = nullptr;
					ObjectFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralInteger17 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow16_LiteralBoolean18 = nullptr;
					CreateObjectActionPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation = nullptr;
						OutputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger19 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralUnlimitedNatural20 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CreateExposeStation_result_LiteralInteger21 = nullptr;
					InitialNodePtr Expose_Station_Model_Launch_LaunchExposeActivity_InitialNode4 = nullptr;
					ValueSpecificationActionPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID = nullptr;
						LiteralStringPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_LiteralString22 = nullptr;
						OutputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger23 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralUnlimitedNatural24 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_waferID_result_LiteralInteger25 = nullptr;
					ControlFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ControlFlow26 = nullptr;
					ObjectFlowPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27 = nullptr;
						LiteralBooleanPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralBoolean28 = nullptr;
						LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_ObjectFlow27_LiteralInteger29 = nullptr;
					CallOperationActionPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer = nullptr;
						InputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target_LiteralInteger30 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target_LiteralInteger31 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_target_LiteralUnlimitedNatural32 = nullptr;
						InputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument_LiteralInteger33 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument_LiteralInteger34 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_argument_LiteralUnlimitedNatural35 = nullptr;
						OutputPinPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result_LiteralInteger36 = nullptr;
							LiteralIntegerPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result_LiteralInteger37 = nullptr;
							LiteralUnlimitedNaturalPtr Expose_Station_Model_Launch_LaunchExposeActivity_CallExposeWafer_result_LiteralUnlimitedNatural38 = nullptr;
			Class_Ptr Expose_Station_Model_WaferHeightMap = nullptr;
				PropertyPtr Expose_Station_Model_WaferHeightMap_measurements = nullptr;
					LiteralIntegerPtr Expose_Station_Model_WaferHeightMap_measurements_LiteralInteger39 = nullptr;
					LiteralUnlimitedNaturalPtr Expose_Station_Model_WaferHeightMap_measurements_LiteralUnlimitedNatural40 = nullptr;

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
