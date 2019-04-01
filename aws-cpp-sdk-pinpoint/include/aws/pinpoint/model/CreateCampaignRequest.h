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

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/WriteCampaignRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API CreateCampaignRequest : public PinpointRequest
  {
  public:
    CreateCampaignRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCampaign"; }

    Aws::String SerializePayload() const override;


    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline CreateCampaignRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline CreateCampaignRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline CreateCampaignRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    
    inline const WriteCampaignRequest& GetWriteCampaignRequest() const{ return m_writeCampaignRequest; }

    
    inline bool WriteCampaignRequestHasBeenSet() const { return m_writeCampaignRequestHasBeenSet; }

    
    inline void SetWriteCampaignRequest(const WriteCampaignRequest& value) { m_writeCampaignRequestHasBeenSet = true; m_writeCampaignRequest = value; }

    
    inline void SetWriteCampaignRequest(WriteCampaignRequest&& value) { m_writeCampaignRequestHasBeenSet = true; m_writeCampaignRequest = std::move(value); }

    
    inline CreateCampaignRequest& WithWriteCampaignRequest(const WriteCampaignRequest& value) { SetWriteCampaignRequest(value); return *this;}

    
    inline CreateCampaignRequest& WithWriteCampaignRequest(WriteCampaignRequest&& value) { SetWriteCampaignRequest(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    WriteCampaignRequest m_writeCampaignRequest;
    bool m_writeCampaignRequestHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
