/*
 * ClearAssociationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CLEARASSOCIATIONACTION_H_
#define FUML_SYNTAX_ACTIONS_CLEARASSOCIATIONACTION_H_

#include <fuml/syntax/fwd.h>
#include <fuml/syntax/actions/Action.h>

namespace fuml::syntax::actions
{
	class ClearAssociationAction : public Action
	{
		public:
			AssociationPtr association = nullptr;
			InputPinPtr object = nullptr;

		public:
			void setObject(const InputPinPtr&);
			void setAssociation(const AssociationPtr&);
	}; // ClearAssociationAction
}

#endif /* FUML_SYNTAX_ACTIONS_CLEARASSOCIATIONACTION_H_ */
