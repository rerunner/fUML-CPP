/*
 * RedefinableElement.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_REDEFINABLEELEMENT_H_
#define FUML_SYNTAX_CLASSIFICATION_REDEFINABLEELEMENT_H_

#include "fuml/syntax/commonstructure/NamedElement.h"
#include "ClassifierList.h"
#include "RedefinableElementList.h"

namespace fuml::syntax::classification
{
	class RedefinableElement : virtual public fuml::syntax::commonstructure::NamedElement
	{
		public:
			bool isLeaf = false;
			std::shared_ptr<fuml::syntax::classification::RedefinableElementList> redefinedElement = std::make_shared<fuml::syntax::classification::RedefinableElementList>();
			std::shared_ptr<fuml::syntax::classification::ClassifierList> redefinitionContext = std::make_shared<fuml::syntax::classification::ClassifierList>();

		public:
			~RedefinableElement() = 0;

			void setIsLeaf(bool);

		protected:
			void addRedefinedElement(
					const std::shared_ptr<fuml::syntax::classification::RedefinableElement>&);
			void addRedefinitionContext(
					const std::shared_ptr<fuml::syntax::classification::Classifier>&);
	}; // RedefinableElement
}

using RedefinableElement = fuml::syntax::classification::RedefinableElement;
using RedefinableElementPtr = std::shared_ptr<RedefinableElement>;

#endif /* FUML_SYNTAX_CLASSIFICATION_REDEFINABLEELEMENT_H_ */
