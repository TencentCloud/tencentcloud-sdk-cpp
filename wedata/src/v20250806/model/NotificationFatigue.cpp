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

#include <tencentcloud/wedata/v20250806/model/NotificationFatigue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

NotificationFatigue::NotificationFatigue() :
    m_notifyCountHasBeenSet(false),
    m_notifyIntervalHasBeenSet(false),
    m_quietIntervalsHasBeenSet(false)
{
}

CoreInternalOutcome NotificationFatigue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotifyCount") && !value["NotifyCount"].IsNull())
    {
        if (!value["NotifyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotificationFatigue.NotifyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notifyCount = value["NotifyCount"].GetUint64();
        m_notifyCountHasBeenSet = true;
    }

    if (value.HasMember("NotifyInterval") && !value["NotifyInterval"].IsNull())
    {
        if (!value["NotifyInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotificationFatigue.NotifyInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notifyInterval = value["NotifyInterval"].GetUint64();
        m_notifyIntervalHasBeenSet = true;
    }

    if (value.HasMember("QuietIntervals") && !value["QuietIntervals"].IsNull())
    {
        if (!value["QuietIntervals"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotificationFatigue.QuietIntervals` is not array type"));

        const rapidjson::Value &tmpValue = value["QuietIntervals"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmQuietInterval item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_quietIntervals.push_back(item);
        }
        m_quietIntervalsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotificationFatigue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notifyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notifyCount, allocator);
    }

    if (m_notifyIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notifyInterval, allocator);
    }

    if (m_quietIntervalsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuietIntervals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quietIntervals.begin(); itr != m_quietIntervals.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t NotificationFatigue::GetNotifyCount() const
{
    return m_notifyCount;
}

void NotificationFatigue::SetNotifyCount(const uint64_t& _notifyCount)
{
    m_notifyCount = _notifyCount;
    m_notifyCountHasBeenSet = true;
}

bool NotificationFatigue::NotifyCountHasBeenSet() const
{
    return m_notifyCountHasBeenSet;
}

uint64_t NotificationFatigue::GetNotifyInterval() const
{
    return m_notifyInterval;
}

void NotificationFatigue::SetNotifyInterval(const uint64_t& _notifyInterval)
{
    m_notifyInterval = _notifyInterval;
    m_notifyIntervalHasBeenSet = true;
}

bool NotificationFatigue::NotifyIntervalHasBeenSet() const
{
    return m_notifyIntervalHasBeenSet;
}

vector<AlarmQuietInterval> NotificationFatigue::GetQuietIntervals() const
{
    return m_quietIntervals;
}

void NotificationFatigue::SetQuietIntervals(const vector<AlarmQuietInterval>& _quietIntervals)
{
    m_quietIntervals = _quietIntervals;
    m_quietIntervalsHasBeenSet = true;
}

bool NotificationFatigue::QuietIntervalsHasBeenSet() const
{
    return m_quietIntervalsHasBeenSet;
}

