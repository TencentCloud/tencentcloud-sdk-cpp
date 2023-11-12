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

#include <tencentcloud/dlc/v20210125/model/HouseEventsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

HouseEventsInfo::HouseEventsInfo() :
    m_timeHasBeenSet(false),
    m_eventsActionHasBeenSet(false),
    m_clusterInfoHasBeenSet(false)
{
}

CoreInternalOutcome HouseEventsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HouseEventsInfo.Time` is not array type"));

        const rapidjson::Value &tmpValue = value["Time"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_time.push_back((*itr).GetString());
        }
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("EventsAction") && !value["EventsAction"].IsNull())
    {
        if (!value["EventsAction"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HouseEventsInfo.EventsAction` is not array type"));

        const rapidjson::Value &tmpValue = value["EventsAction"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eventsAction.push_back((*itr).GetString());
        }
        m_eventsActionHasBeenSet = true;
    }

    if (value.HasMember("ClusterInfo") && !value["ClusterInfo"].IsNull())
    {
        if (!value["ClusterInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HouseEventsInfo.ClusterInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clusterInfo.push_back((*itr).GetString());
        }
        m_clusterInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HouseEventsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_time.begin(); itr != m_time.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventsActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventsAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventsAction.begin(); itr != m_eventsAction.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterInfo.begin(); itr != m_clusterInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> HouseEventsInfo::GetTime() const
{
    return m_time;
}

void HouseEventsInfo::SetTime(const vector<string>& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool HouseEventsInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

vector<string> HouseEventsInfo::GetEventsAction() const
{
    return m_eventsAction;
}

void HouseEventsInfo::SetEventsAction(const vector<string>& _eventsAction)
{
    m_eventsAction = _eventsAction;
    m_eventsActionHasBeenSet = true;
}

bool HouseEventsInfo::EventsActionHasBeenSet() const
{
    return m_eventsActionHasBeenSet;
}

vector<string> HouseEventsInfo::GetClusterInfo() const
{
    return m_clusterInfo;
}

void HouseEventsInfo::SetClusterInfo(const vector<string>& _clusterInfo)
{
    m_clusterInfo = _clusterInfo;
    m_clusterInfoHasBeenSet = true;
}

bool HouseEventsInfo::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

