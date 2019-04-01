﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/ParameterRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ParameterRange::ParameterRange() : 
    m_integerParameterRangeSpecificationHasBeenSet(false),
    m_continuousParameterRangeSpecificationHasBeenSet(false),
    m_categoricalParameterRangeSpecificationHasBeenSet(false)
{
}

ParameterRange::ParameterRange(JsonView jsonValue) : 
    m_integerParameterRangeSpecificationHasBeenSet(false),
    m_continuousParameterRangeSpecificationHasBeenSet(false),
    m_categoricalParameterRangeSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterRange& ParameterRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IntegerParameterRangeSpecification"))
  {
    m_integerParameterRangeSpecification = jsonValue.GetObject("IntegerParameterRangeSpecification");

    m_integerParameterRangeSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContinuousParameterRangeSpecification"))
  {
    m_continuousParameterRangeSpecification = jsonValue.GetObject("ContinuousParameterRangeSpecification");

    m_continuousParameterRangeSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoricalParameterRangeSpecification"))
  {
    m_categoricalParameterRangeSpecification = jsonValue.GetObject("CategoricalParameterRangeSpecification");

    m_categoricalParameterRangeSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterRange::Jsonize() const
{
  JsonValue payload;

  if(m_integerParameterRangeSpecificationHasBeenSet)
  {
   payload.WithObject("IntegerParameterRangeSpecification", m_integerParameterRangeSpecification.Jsonize());

  }

  if(m_continuousParameterRangeSpecificationHasBeenSet)
  {
   payload.WithObject("ContinuousParameterRangeSpecification", m_continuousParameterRangeSpecification.Jsonize());

  }

  if(m_categoricalParameterRangeSpecificationHasBeenSet)
  {
   payload.WithObject("CategoricalParameterRangeSpecification", m_categoricalParameterRangeSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
