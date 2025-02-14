/*
 * Expose_Station_ModelEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef EXPOSE_STATION_MODEL_ENVIRONMENT_H
#define EXPOSE_STATION_MODEL_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Expose_Station_Model
{
	class Expose_Station_ModelEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~Expose_Station_ModelEnvironment();
			static const std::shared_ptr<Expose_Station_ModelEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			Expose_Station_ModelEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* EXPOSE_STATION_MODEL_ENVIRONMENT_H */
