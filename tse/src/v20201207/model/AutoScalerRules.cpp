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

#include <tencentcloud/tse/v20201207/model/AutoScalerRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AutoScalerRules::AutoScalerRules() :
    m_stabilizationWindowSecondsHasBeenSet(false),
    m_selectPolicyHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalerRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StabilizationWindowSeconds") && !value["StabilizationWindowSeconds"].IsNull())
    {
        if (!value["StabilizationWindowSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalerRules.StabilizationWindowSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stabilizationWindowSeconds = value["StabilizationWindowSeconds"].GetInt64();
        m_stabilizationWindowSecondsHasBeenSet = true;
    }

    if (value.HasMember("SelectPolicy") && !value["SelectPolicy"].IsNull())
    {
        if (!value["SelectPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalerRules.SelectPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectPolicy = string(value["SelectPolicy"].GetString());
        m_selectPolicyHasBeenSet = true;
    }

    if (value.HasMember("Policies") && !value["Policies"].IsNull())
    {
        if (!value["Policies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoScalerRules.Policies` is not array type"));

        const rapidjson::Value &tmpValue = value["Policies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AutoScalerPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policies.push_back(item);
        }
        m_policiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalerRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stabilizationWindowSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StabilizationWindowSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stabilizationWindowSeconds, allocator);
    }

    if (m_selectPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_policiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policies.begin(); itr != m_policies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t AutoScalerRules::GetStabilizationWindowSeconds() const
{
    return m_stabilizationWindowSeconds;
}

void AutoScalerRules::SetStabilizationWindowSeconds(const int64_t& _stabilizationWindowSeconds)
{
    m_stabilizationWindowSeconds = _stabilizationWindowSeconds;
    m_stabilizationWindowSecondsHasBeenSet = true;
}

bool AutoScalerRules::StabilizationWindowSecondsHasBeenSet() const
{
    return m_stabilizationWindowSecondsHasBeenSet;
}

string AutoScalerRules::GetSelectPolicy() const
{
    return m_selectPolicy;
}

void AutoScalerRules::SetSelectPolicy(const string& _selectPolicy)
{
    m_selectPolicy = _selectPolicy;
    m_selectPolicyHasBeenSet = true;
}

bool AutoScalerRules::SelectPolicyHasBeenSet() const
{
    return m_selectPolicyHasBeenSet;
}

vector<AutoScalerPolicy> AutoScalerRules::GetPolicies() const
{
    return m_policies;
}

void AutoScalerRules::SetPolicies(const vector<AutoScalerPolicy>& _policies)
{
    m_policies = _policies;
    m_policiesHasBeenSet = true;
}

bool AutoScalerRules::PoliciesHasBeenSet() const
{
    return m_policiesHasBeenSet;
}

