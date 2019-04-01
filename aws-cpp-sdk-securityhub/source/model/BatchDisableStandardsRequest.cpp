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

#include <aws/securityhub/model/BatchDisableStandardsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDisableStandardsRequest::BatchDisableStandardsRequest() : 
    m_standardsSubscriptionArnsHasBeenSet(false)
{
}

Aws::String BatchDisableStandardsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_standardsSubscriptionArnsHasBeenSet)
  {
   Array<JsonValue> standardsSubscriptionArnsJsonList(m_standardsSubscriptionArns.size());
   for(unsigned standardsSubscriptionArnsIndex = 0; standardsSubscriptionArnsIndex < standardsSubscriptionArnsJsonList.GetLength(); ++standardsSubscriptionArnsIndex)
   {
     standardsSubscriptionArnsJsonList[standardsSubscriptionArnsIndex].AsString(m_standardsSubscriptionArns[standardsSubscriptionArnsIndex]);
   }
   payload.WithArray("StandardsSubscriptionArns", std::move(standardsSubscriptionArnsJsonList));

  }

  return payload.View().WriteReadable();
}




