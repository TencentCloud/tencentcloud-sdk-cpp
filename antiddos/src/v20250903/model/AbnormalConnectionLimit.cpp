/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/antiddos/v20250903/model/AbnormalConnectionLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

AbnormalConnectionLimit::AbnormalConnectionLimit() :
    m_abnormalConnectThresholdHasBeenSet(false),
    m_abnormalConnectConditionHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalConnectionLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AbnormalConnectThreshold") && !value["AbnormalConnectThreshold"].IsNull())
    {
        if (!value["AbnormalConnectThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalConnectionLimit.AbnormalConnectThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalConnectThreshold = value["AbnormalConnectThreshold"].GetUint64();
        m_abnormalConnectThresholdHasBeenSet = true;
    }

    if (value.HasMember("AbnormalConnectCondition") && !value["AbnormalConnectCondition"].IsNull())
    {
        if (!value["AbnormalConnectCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalConnectionLimit.AbnormalConnectCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_abnormalConnectCondition.Deserialize(value["AbnormalConnectCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_abnormalConnectConditionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalConnectionLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_abnormalConnectThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalConnectThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalConnectThreshold, allocator);
    }

    if (m_abnormalConnectConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalConnectCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_abnormalConnectCondition.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t AbnormalConnectionLimit::GetAbnormalConnectThreshold() const
{
    return m_abnormalConnectThreshold;
}

void AbnormalConnectionLimit::SetAbnormalConnectThreshold(const uint64_t& _abnormalConnectThreshold)
{
    m_abnormalConnectThreshold = _abnormalConnectThreshold;
    m_abnormalConnectThresholdHasBeenSet = true;
}

bool AbnormalConnectionLimit::AbnormalConnectThresholdHasBeenSet() const
{
    return m_abnormalConnectThresholdHasBeenSet;
}

AbnormalConnectCondition AbnormalConnectionLimit::GetAbnormalConnectCondition() const
{
    return m_abnormalConnectCondition;
}

void AbnormalConnectionLimit::SetAbnormalConnectCondition(const AbnormalConnectCondition& _abnormalConnectCondition)
{
    m_abnormalConnectCondition = _abnormalConnectCondition;
    m_abnormalConnectConditionHasBeenSet = true;
}

bool AbnormalConnectionLimit::AbnormalConnectConditionHasBeenSet() const
{
    return m_abnormalConnectConditionHasBeenSet;
}

