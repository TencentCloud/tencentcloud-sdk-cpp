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

#include <tencentcloud/teo/v20220901/model/InferenceAutoScalingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceAutoScalingConfig::InferenceAutoScalingConfig() :
    m_minInstanceCountHasBeenSet(false),
    m_scalingPoliciesHasBeenSet(false)
{
}

CoreInternalOutcome InferenceAutoScalingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinInstanceCount") && !value["MinInstanceCount"].IsNull())
    {
        if (!value["MinInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceAutoScalingConfig.MinInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minInstanceCount = value["MinInstanceCount"].GetInt64();
        m_minInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("ScalingPolicies") && !value["ScalingPolicies"].IsNull())
    {
        if (!value["ScalingPolicies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceAutoScalingConfig.ScalingPolicies` is not array type"));

        const rapidjson::Value &tmpValue = value["ScalingPolicies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InferenceScalingPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scalingPolicies.push_back(item);
        }
        m_scalingPoliciesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceAutoScalingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minInstanceCount, allocator);
    }

    if (m_scalingPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingPolicies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scalingPolicies.begin(); itr != m_scalingPolicies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t InferenceAutoScalingConfig::GetMinInstanceCount() const
{
    return m_minInstanceCount;
}

void InferenceAutoScalingConfig::SetMinInstanceCount(const int64_t& _minInstanceCount)
{
    m_minInstanceCount = _minInstanceCount;
    m_minInstanceCountHasBeenSet = true;
}

bool InferenceAutoScalingConfig::MinInstanceCountHasBeenSet() const
{
    return m_minInstanceCountHasBeenSet;
}

vector<InferenceScalingPolicy> InferenceAutoScalingConfig::GetScalingPolicies() const
{
    return m_scalingPolicies;
}

void InferenceAutoScalingConfig::SetScalingPolicies(const vector<InferenceScalingPolicy>& _scalingPolicies)
{
    m_scalingPolicies = _scalingPolicies;
    m_scalingPoliciesHasBeenSet = true;
}

bool InferenceAutoScalingConfig::ScalingPoliciesHasBeenSet() const
{
    return m_scalingPoliciesHasBeenSet;
}

