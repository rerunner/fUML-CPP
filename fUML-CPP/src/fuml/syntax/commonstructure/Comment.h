/*
 * Comment.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_COMMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_COMMENT_H_

#include <memory>
#include <vector>
#include "other/FumlObject.h"

namespace fuml::syntax::commonstructure
{
	class Element;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::Element>> ElementList;
}

namespace fuml::syntax::commonstructure
{
	class Comment : public fuml_cpp::FumlObject {

		public:
			std::shared_ptr<fuml::syntax::commonstructure::ElementList> annotatedElement = nullptr;
			std::string body = "";

		public:
			void setAnnotatedElement(
				const std::shared_ptr<fuml::syntax::commonstructure::Element>&);
			void setBody(std::string);
	}; // Comment
}



#endif /* FUML_SYNTAX_COMMONSTRUCTURE_COMMENT_H_ */
