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

#include <aws/iot/model/CreateThingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateThingRequest::CreateThingRequest() : 
    m_thingNameHasBeenSet(false),
    m_thingTypeNameHasBeenSet(false),
    m_attributePayloadHasBeenSet(false),
    m_billingGroupNameHasBeenSet(false)
{
}

Aws::String CreateThingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingTypeNameHasBeenSet)
  {
   payload.WithString("thingTypeName", m_thingTypeName);

  }

  if(m_attributePayloadHasBeenSet)
  {
   payload.WithObject("attributePayload", m_attributePayload.Jsonize());

  }

  if(m_billingGroupNameHasBeenSet)
  {
   payload.WithString("billingGroupName", m_billingGroupName);

  }

  return payload.View().WriteReadable();
}




