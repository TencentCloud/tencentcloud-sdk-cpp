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

#include <tencentcloud/tsf/v20180326/model/TrySchedule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TrySchedule::TrySchedule() :
    m_affinityListHasBeenSet(false),
    m_antiAffinityListHasBeenSet(false)
{
}

CoreInternalOutcome TrySchedule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffinityList") && !value["AffinityList"].IsNull())
    {
        if (!value["AffinityList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrySchedule.AffinityList` is not array type"));

        const rapidjson::Value &tmpValue = value["AffinityList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Affinity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_affinityList.push_back(item);
        }
        m_affinityListHasBeenSet = true;
    }

    if (value.HasMember("AntiAffinityList") && !value["AntiAffinityList"].IsNull())
    {
        if (!value["AntiAffinityList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrySchedule.AntiAffinityList` is not array type"));

        const rapidjson::Value &tmpValue = value["AntiAffinityList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Affinity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_antiAffinityList.push_back(item);
        }
        m_antiAffinityListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrySchedule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_affinityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffinityList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_affinityList.begin(); itr != m_affinityList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_antiAffinityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiAffinityList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_antiAffinityList.begin(); itr != m_antiAffinityList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Affinity> TrySchedule::GetAffinityList() const
{
    return m_affinityList;
}

void TrySchedule::SetAffinityList(const vector<Affinity>& _affinityList)
{
    m_affinityList = _affinityList;
    m_affinityListHasBeenSet = true;
}

bool TrySchedule::AffinityListHasBeenSet() const
{
    return m_affinityListHasBeenSet;
}

vector<Affinity> TrySchedule::GetAntiAffinityList() const
{
    return m_antiAffinityList;
}

void TrySchedule::SetAntiAffinityList(const vector<Affinity>& _antiAffinityList)
{
    m_antiAffinityList = _antiAffinityList;
    m_antiAffinityListHasBeenSet = true;
}

bool TrySchedule::AntiAffinityListHasBeenSet() const
{
    return m_antiAffinityListHasBeenSet;
}

