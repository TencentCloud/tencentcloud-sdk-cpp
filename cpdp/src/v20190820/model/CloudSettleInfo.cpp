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

#include <tencentcloud/cpdp/v20190820/model/CloudSettleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudSettleInfo::CloudSettleInfo() :
    m_needToBeConfirmedHasBeenSet(false),
    m_profitSharingHasBeenSet(false)
{
}

CoreInternalOutcome CloudSettleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NeedToBeConfirmed") && !value["NeedToBeConfirmed"].IsNull())
    {
        if (!value["NeedToBeConfirmed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSettleInfo.NeedToBeConfirmed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needToBeConfirmed = value["NeedToBeConfirmed"].GetInt64();
        m_needToBeConfirmedHasBeenSet = true;
    }

    if (value.HasMember("ProfitSharing") && !value["ProfitSharing"].IsNull())
    {
        if (!value["ProfitSharing"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSettleInfo.ProfitSharing` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_profitSharing = value["ProfitSharing"].GetInt64();
        m_profitSharingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudSettleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_needToBeConfirmedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedToBeConfirmed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needToBeConfirmed, allocator);
    }

    if (m_profitSharingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitSharing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_profitSharing, allocator);
    }

}


int64_t CloudSettleInfo::GetNeedToBeConfirmed() const
{
    return m_needToBeConfirmed;
}

void CloudSettleInfo::SetNeedToBeConfirmed(const int64_t& _needToBeConfirmed)
{
    m_needToBeConfirmed = _needToBeConfirmed;
    m_needToBeConfirmedHasBeenSet = true;
}

bool CloudSettleInfo::NeedToBeConfirmedHasBeenSet() const
{
    return m_needToBeConfirmedHasBeenSet;
}

int64_t CloudSettleInfo::GetProfitSharing() const
{
    return m_profitSharing;
}

void CloudSettleInfo::SetProfitSharing(const int64_t& _profitSharing)
{
    m_profitSharing = _profitSharing;
    m_profitSharingHasBeenSet = true;
}

bool CloudSettleInfo::ProfitSharingHasBeenSet() const
{
    return m_profitSharingHasBeenSet;
}

