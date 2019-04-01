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

#include <aws/mediaconvert/model/Eac3MetadataControl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace Eac3MetadataControlMapper
      {

        static const int FOLLOW_INPUT_HASH = HashingUtils::HashString("FOLLOW_INPUT");
        static const int USE_CONFIGURED_HASH = HashingUtils::HashString("USE_CONFIGURED");


        Eac3MetadataControl GetEac3MetadataControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_INPUT_HASH)
          {
            return Eac3MetadataControl::FOLLOW_INPUT;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return Eac3MetadataControl::USE_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3MetadataControl>(hashCode);
          }

          return Eac3MetadataControl::NOT_SET;
        }

        Aws::String GetNameForEac3MetadataControl(Eac3MetadataControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3MetadataControl::FOLLOW_INPUT:
            return "FOLLOW_INPUT";
          case Eac3MetadataControl::USE_CONFIGURED:
            return "USE_CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3MetadataControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
