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

#include <aws/email/model/DimensionValueSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace DimensionValueSourceMapper
      {

        static const int messageTag_HASH = HashingUtils::HashString("messageTag");
        static const int emailHeader_HASH = HashingUtils::HashString("emailHeader");
        static const int linkTag_HASH = HashingUtils::HashString("linkTag");


        DimensionValueSource GetDimensionValueSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == messageTag_HASH)
          {
            return DimensionValueSource::messageTag;
          }
          else if (hashCode == emailHeader_HASH)
          {
            return DimensionValueSource::emailHeader;
          }
          else if (hashCode == linkTag_HASH)
          {
            return DimensionValueSource::linkTag;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionValueSource>(hashCode);
          }

          return DimensionValueSource::NOT_SET;
        }

        Aws::String GetNameForDimensionValueSource(DimensionValueSource enumValue)
        {
          switch(enumValue)
          {
          case DimensionValueSource::messageTag:
            return "messageTag";
          case DimensionValueSource::emailHeader:
            return "emailHeader";
          case DimensionValueSource::linkTag:
            return "linkTag";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionValueSourceMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
