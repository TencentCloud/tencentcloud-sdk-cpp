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

#include <tencentcloud/emr/v20190103/model/PodAffinitySpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PodAffinitySpec::PodAffinitySpec() :
    m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet(false),
    m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet(false)
{
}

CoreInternalOutcome PodAffinitySpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequiredDuringSchedulingIgnoredDuringExecution") && !value["RequiredDuringSchedulingIgnoredDuringExecution"].IsNull())
    {
        if (!value["RequiredDuringSchedulingIgnoredDuringExecution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PodAffinitySpec.RequiredDuringSchedulingIgnoredDuringExecution` is not array type"));

        const rapidjson::Value &tmpValue = value["RequiredDuringSchedulingIgnoredDuringExecution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PodAffinityTerm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requiredDuringSchedulingIgnoredDuringExecution.push_back(item);
        }
        m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet = true;
    }

    if (value.HasMember("PreferredDuringSchedulingIgnoredDuringExecution") && !value["PreferredDuringSchedulingIgnoredDuringExecution"].IsNull())
    {
        if (!value["PreferredDuringSchedulingIgnoredDuringExecution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PodAffinitySpec.PreferredDuringSchedulingIgnoredDuringExecution` is not array type"));

        const rapidjson::Value &tmpValue = value["PreferredDuringSchedulingIgnoredDuringExecution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WeightedPodAffinityTerm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_preferredDuringSchedulingIgnoredDuringExecution.push_back(item);
        }
        m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodAffinitySpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequiredDuringSchedulingIgnoredDuringExecution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requiredDuringSchedulingIgnoredDuringExecution.begin(); itr != m_requiredDuringSchedulingIgnoredDuringExecution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreferredDuringSchedulingIgnoredDuringExecution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_preferredDuringSchedulingIgnoredDuringExecution.begin(); itr != m_preferredDuringSchedulingIgnoredDuringExecution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<PodAffinityTerm> PodAffinitySpec::GetRequiredDuringSchedulingIgnoredDuringExecution() const
{
    return m_requiredDuringSchedulingIgnoredDuringExecution;
}

void PodAffinitySpec::SetRequiredDuringSchedulingIgnoredDuringExecution(const vector<PodAffinityTerm>& _requiredDuringSchedulingIgnoredDuringExecution)
{
    m_requiredDuringSchedulingIgnoredDuringExecution = _requiredDuringSchedulingIgnoredDuringExecution;
    m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet = true;
}

bool PodAffinitySpec::RequiredDuringSchedulingIgnoredDuringExecutionHasBeenSet() const
{
    return m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet;
}

vector<WeightedPodAffinityTerm> PodAffinitySpec::GetPreferredDuringSchedulingIgnoredDuringExecution() const
{
    return m_preferredDuringSchedulingIgnoredDuringExecution;
}

void PodAffinitySpec::SetPreferredDuringSchedulingIgnoredDuringExecution(const vector<WeightedPodAffinityTerm>& _preferredDuringSchedulingIgnoredDuringExecution)
{
    m_preferredDuringSchedulingIgnoredDuringExecution = _preferredDuringSchedulingIgnoredDuringExecution;
    m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet = true;
}

bool PodAffinitySpec::PreferredDuringSchedulingIgnoredDuringExecutionHasBeenSet() const
{
    return m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet;
}

