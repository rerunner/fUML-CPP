/*
 * PrimitiveTypeList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_PRIMITIVETYPELIST_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_PRIMITIVETYPELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::simpleclassifiers
{
	class PrimitiveType;
	typedef std::vector<std::shared_ptr<fuml::syntax::simpleclassifiers::PrimitiveType>> PrimitiveTypeList;
}

using PrimitiveTypeList = fuml::syntax::simpleclassifiers::PrimitiveTypeList;
using PrimitiveTypeListPtr = std::shared_ptr<PrimitiveTypeList>;

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_PRIMITIVETYPELIST_H_ */
