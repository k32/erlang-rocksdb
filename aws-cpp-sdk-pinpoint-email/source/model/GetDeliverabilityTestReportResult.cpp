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

#include <aws/pinpoint-email/model/GetDeliverabilityTestReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeliverabilityTestReportResult::GetDeliverabilityTestReportResult()
{
}

GetDeliverabilityTestReportResult::GetDeliverabilityTestReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeliverabilityTestReportResult& GetDeliverabilityTestReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeliverabilityTestReport"))
  {
    m_deliverabilityTestReport = jsonValue.GetObject("DeliverabilityTestReport");

  }

  if(jsonValue.ValueExists("OverallPlacement"))
  {
    m_overallPlacement = jsonValue.GetObject("OverallPlacement");

  }

  if(jsonValue.ValueExists("IspPlacements"))
  {
    Array<JsonView> ispPlacementsJsonList = jsonValue.GetArray("IspPlacements");
    for(unsigned ispPlacementsIndex = 0; ispPlacementsIndex < ispPlacementsJsonList.GetLength(); ++ispPlacementsIndex)
    {
      m_ispPlacements.push_back(ispPlacementsJsonList[ispPlacementsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }



  return *this;
}
