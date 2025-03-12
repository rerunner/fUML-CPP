/*
 * MeasureStation_ModelEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef MEASURESTATION_MODEL_ENVIRONMENT_H
#define MEASURESTATION_MODEL_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace MeasureStation_Model
{
	class MeasureStation_ModelEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~MeasureStation_ModelEnvironment();
			static const std::shared_ptr<MeasureStation_ModelEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			MeasureStation_ModelEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* MEASURESTATION_MODEL_ENVIRONMENT_H */
