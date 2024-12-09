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

#include <tencentcloud/emr/v20190103/model/PreferredSchedulingTerm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PreferredSchedulingTerm::PreferredSchedulingTerm() :
    m_weightHasBeenSet(false),
    m_preferenceHasBeenSet(false)
{
}

CoreInternalOutcome PreferredSchedulingTerm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreferredSchedulingTerm.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Preference") && !value["Preference"].IsNull())
    {
        if (!value["Preference"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PreferredSchedulingTerm.Preference` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_preference.Deserialize(value["Preference"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_preferenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreferredSchedulingTerm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_preferenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Preference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_preference.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t PreferredSchedulingTerm::GetWeight() const
{
    return m_weight;
}

void PreferredSchedulingTerm::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool PreferredSchedulingTerm::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

NodeSelectorTerm PreferredSchedulingTerm::GetPreference() const
{
    return m_preference;
}

void PreferredSchedulingTerm::SetPreference(const NodeSelectorTerm& _preference)
{
    m_preference = _preference;
    m_preferenceHasBeenSet = true;
}

bool PreferredSchedulingTerm::PreferenceHasBeenSet() const
{
    return m_preferenceHasBeenSet;
}

