/*
 * ElementImportList.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORTLIST_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORTLIST_H_

#include <memory>
#include <vector>
#include "ElementImport.h"

namespace fuml::syntax::commonstructure
{
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::ElementImport>> ElementImportList;
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORTLIST_H_ */
