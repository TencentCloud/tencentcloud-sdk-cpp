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

#include <tencentcloud/gse/v20191112/model/PlayerLatencyPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

PlayerLatencyPolicy::PlayerLatencyPolicy() :
    m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet(false),
    m_policyDurationSecondsHasBeenSet(false)
{
}

CoreInternalOutcome PlayerLatencyPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaximumIndividualPlayerLatencyMilliseconds") && !value["MaximumIndividualPlayerLatencyMilliseconds"].IsNull())
    {
        if (!value["MaximumIndividualPlayerLatencyMilliseconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerLatencyPolicy.MaximumIndividualPlayerLatencyMilliseconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumIndividualPlayerLatencyMilliseconds = value["MaximumIndividualPlayerLatencyMilliseconds"].GetUint64();
        m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet = true;
    }

    if (value.HasMember("PolicyDurationSeconds") && !value["PolicyDurationSeconds"].IsNull())
    {
        if (!value["PolicyDurationSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerLatencyPolicy.PolicyDurationSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyDurationSeconds = value["PolicyDurationSeconds"].GetUint64();
        m_policyDurationSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlayerLatencyPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumIndividualPlayerLatencyMilliseconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumIndividualPlayerLatencyMilliseconds, allocator);
    }

    if (m_policyDurationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyDurationSeconds, allocator);
    }

}


uint64_t PlayerLatencyPolicy::GetMaximumIndividualPlayerLatencyMilliseconds() const
{
    return m_maximumIndividualPlayerLatencyMilliseconds;
}

void PlayerLatencyPolicy::SetMaximumIndividualPlayerLatencyMilliseconds(const uint64_t& _maximumIndividualPlayerLatencyMilliseconds)
{
    m_maximumIndividualPlayerLatencyMilliseconds = _maximumIndividualPlayerLatencyMilliseconds;
    m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet = true;
}

bool PlayerLatencyPolicy::MaximumIndividualPlayerLatencyMillisecondsHasBeenSet() const
{
    return m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet;
}

uint64_t PlayerLatencyPolicy::GetPolicyDurationSeconds() const
{
    return m_policyDurationSeconds;
}

void PlayerLatencyPolicy::SetPolicyDurationSeconds(const uint64_t& _policyDurationSeconds)
{
    m_policyDurationSeconds = _policyDurationSeconds;
    m_policyDurationSecondsHasBeenSet = true;
}

bool PlayerLatencyPolicy::PolicyDurationSecondsHasBeenSet() const
{
    return m_policyDurationSecondsHasBeenSet;
}

