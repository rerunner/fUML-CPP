/*
 * FeatureList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_FEATURELIST_H_
#define FUML_SYNTAX_CLASSIFICATION_FEATURELIST_H_

#include <memory>
#include <vector>
#include "Feature.h"

namespace fuml::syntax::classification
{
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Feature>> FeatureList;
}

#endif /* FUML_SYNTAX_CLASSIFICATION_FEATURELIST_H_ */
