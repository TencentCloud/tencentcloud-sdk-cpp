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

#include <tencentcloud/organization/v20210331/model/EffectivePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

EffectivePolicy::EffectivePolicy() :
    m_targetIdHasBeenSet(false),
    m_policyContentHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false)
{
}

CoreInternalOutcome EffectivePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetId") && !value["TargetId"].IsNull())
    {
        if (!value["TargetId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EffectivePolicy.TargetId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetId = value["TargetId"].GetUint64();
        m_targetIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyContent") && !value["PolicyContent"].IsNull())
    {
        if (!value["PolicyContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectivePolicy.PolicyContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyContent = string(value["PolicyContent"].GetString());
        m_policyContentHasBeenSet = true;
    }

    if (value.HasMember("LastUpdatedTimestamp") && !value["LastUpdatedTimestamp"].IsNull())
    {
        if (!value["LastUpdatedTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EffectivePolicy.LastUpdatedTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdatedTimestamp = value["LastUpdatedTimestamp"].GetUint64();
        m_lastUpdatedTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EffectivePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetId, allocator);
    }

    if (m_policyContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyContent.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdatedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdatedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdatedTimestamp, allocator);
    }

}


uint64_t EffectivePolicy::GetTargetId() const
{
    return m_targetId;
}

void EffectivePolicy::SetTargetId(const uint64_t& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool EffectivePolicy::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

string EffectivePolicy::GetPolicyContent() const
{
    return m_policyContent;
}

void EffectivePolicy::SetPolicyContent(const string& _policyContent)
{
    m_policyContent = _policyContent;
    m_policyContentHasBeenSet = true;
}

bool EffectivePolicy::PolicyContentHasBeenSet() const
{
    return m_policyContentHasBeenSet;
}

uint64_t EffectivePolicy::GetLastUpdatedTimestamp() const
{
    return m_lastUpdatedTimestamp;
}

void EffectivePolicy::SetLastUpdatedTimestamp(const uint64_t& _lastUpdatedTimestamp)
{
    m_lastUpdatedTimestamp = _lastUpdatedTimestamp;
    m_lastUpdatedTimestampHasBeenSet = true;
}

bool EffectivePolicy::LastUpdatedTimestampHasBeenSet() const
{
    return m_lastUpdatedTimestampHasBeenSet;
}

