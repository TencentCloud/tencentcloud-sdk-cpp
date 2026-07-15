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

#include <tencentcloud/ess/v20201111/model/SealPolicyAuthorizationFlows.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SealPolicyAuthorizationFlows::SealPolicyAuthorizationFlows() :
    m_flowIdsHasBeenSet(false),
    m_flowGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome SealPolicyAuthorizationFlows::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowIds") && !value["FlowIds"].IsNull())
    {
        if (!value["FlowIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SealPolicyAuthorizationFlows.FlowIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowIds.push_back((*itr).GetString());
        }
        m_flowIdsHasBeenSet = true;
    }

    if (value.HasMember("FlowGroupIds") && !value["FlowGroupIds"].IsNull())
    {
        if (!value["FlowGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SealPolicyAuthorizationFlows.FlowGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowGroupIds.push_back((*itr).GetString());
        }
        m_flowGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SealPolicyAuthorizationFlows::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIds.begin(); itr != m_flowIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowGroupIds.begin(); itr != m_flowGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SealPolicyAuthorizationFlows::GetFlowIds() const
{
    return m_flowIds;
}

void SealPolicyAuthorizationFlows::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool SealPolicyAuthorizationFlows::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

vector<string> SealPolicyAuthorizationFlows::GetFlowGroupIds() const
{
    return m_flowGroupIds;
}

void SealPolicyAuthorizationFlows::SetFlowGroupIds(const vector<string>& _flowGroupIds)
{
    m_flowGroupIds = _flowGroupIds;
    m_flowGroupIdsHasBeenSet = true;
}

bool SealPolicyAuthorizationFlows::FlowGroupIdsHasBeenSet() const
{
    return m_flowGroupIdsHasBeenSet;
}

