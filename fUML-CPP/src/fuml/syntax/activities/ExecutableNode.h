/*
 * ExecutableNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_
#define FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_

#include "ActivityGroup.h"
#include "ExceptionHandlerList.h"

namespace fuml::syntax::activities
{
	class ExecutableNode : public fuml::syntax::activities::ActivityGroup
	{
		public:
			std::shared_ptr<fuml::syntax::activities::ExceptionHandlerList> handler = std::make_shared<fuml::syntax::activities::ExceptionHandlerList>();

		private:
			std::weak_ptr<ExecutableNode> thisExecutableNodePtr;

		public:
			virtual ~ExecutableNode() = 0;
			virtual void setThisPtr(std::weak_ptr<ExecutableNode>);

			void addExceptionHandler(const std::shared_ptr<fuml::syntax::activities::ExceptionHandler>&);
	}; // ExecutableNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_EXECUTABLENODE_H_ */
