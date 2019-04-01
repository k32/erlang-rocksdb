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

#include <aws/medialive/model/DvbSdtSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

DvbSdtSettings::DvbSdtSettings() : 
    m_outputSdt(DvbSdtOutputSdt::NOT_SET),
    m_outputSdtHasBeenSet(false),
    m_repInterval(0),
    m_repIntervalHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceProviderNameHasBeenSet(false)
{
}

DvbSdtSettings::DvbSdtSettings(JsonView jsonValue) : 
    m_outputSdt(DvbSdtOutputSdt::NOT_SET),
    m_outputSdtHasBeenSet(false),
    m_repInterval(0),
    m_repIntervalHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceProviderNameHasBeenSet(false)
{
  *this = jsonValue;
}

DvbSdtSettings& DvbSdtSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputSdt"))
  {
    m_outputSdt = DvbSdtOutputSdtMapper::GetDvbSdtOutputSdtForName(jsonValue.GetString("outputSdt"));

    m_outputSdtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repInterval"))
  {
    m_repInterval = jsonValue.GetInteger("repInterval");

    m_repIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceProviderName"))
  {
    m_serviceProviderName = jsonValue.GetString("serviceProviderName");

    m_serviceProviderNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DvbSdtSettings::Jsonize() const
{
  JsonValue payload;

  if(m_outputSdtHasBeenSet)
  {
   payload.WithString("outputSdt", DvbSdtOutputSdtMapper::GetNameForDvbSdtOutputSdt(m_outputSdt));
  }

  if(m_repIntervalHasBeenSet)
  {
   payload.WithInteger("repInterval", m_repInterval);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_serviceProviderNameHasBeenSet)
  {
   payload.WithString("serviceProviderName", m_serviceProviderName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
