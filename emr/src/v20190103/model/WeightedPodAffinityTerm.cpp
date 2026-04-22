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

#include <tencentcloud/emr/v20190103/model/WeightedPodAffinityTerm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

WeightedPodAffinityTerm::WeightedPodAffinityTerm() :
    m_weightHasBeenSet(false),
    m_podAffinityTermHasBeenSet(false)
{
}

CoreInternalOutcome WeightedPodAffinityTerm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WeightedPodAffinityTerm.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("PodAffinityTerm") && !value["PodAffinityTerm"].IsNull())
    {
        if (!value["PodAffinityTerm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WeightedPodAffinityTerm.PodAffinityTerm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_podAffinityTerm.Deserialize(value["PodAffinityTerm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_podAffinityTermHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeightedPodAffinityTerm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_podAffinityTermHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodAffinityTerm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_podAffinityTerm.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t WeightedPodAffinityTerm::GetWeight() const
{
    return m_weight;
}

void WeightedPodAffinityTerm::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool WeightedPodAffinityTerm::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

PodAffinityTerm WeightedPodAffinityTerm::GetPodAffinityTerm() const
{
    return m_podAffinityTerm;
}

void WeightedPodAffinityTerm::SetPodAffinityTerm(const PodAffinityTerm& _podAffinityTerm)
{
    m_podAffinityTerm = _podAffinityTerm;
    m_podAffinityTermHasBeenSet = true;
}

bool WeightedPodAffinityTerm::PodAffinityTermHasBeenSet() const
{
    return m_podAffinityTermHasBeenSet;
}

