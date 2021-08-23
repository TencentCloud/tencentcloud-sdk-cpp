/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/zj/v20190121/model/SmsCreateCampaignResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

SmsCreateCampaignResponse::SmsCreateCampaignResponse() :
    m_campaignIdHasBeenSet(false)
{
}

CoreInternalOutcome SmsCreateCampaignResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CampaignId") && !value["CampaignId"].IsNull())
    {
        if (!value["CampaignId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmsCreateCampaignResponse.CampaignId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_campaignId = value["CampaignId"].GetInt64();
        m_campaignIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsCreateCampaignResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_campaignIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampaignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_campaignId, allocator);
    }

}


int64_t SmsCreateCampaignResponse::GetCampaignId() const
{
    return m_campaignId;
}

void SmsCreateCampaignResponse::SetCampaignId(const int64_t& _campaignId)
{
    m_campaignId = _campaignId;
    m_campaignIdHasBeenSet = true;
}

bool SmsCreateCampaignResponse::CampaignIdHasBeenSet() const
{
    return m_campaignIdHasBeenSet;
}

