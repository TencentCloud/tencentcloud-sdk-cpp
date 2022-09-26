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

#include <tencentcloud/monitor/v20180724/model/LogAlarmReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

LogAlarmReq::LogAlarmReq() :
    m_instanceIdHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_alarmMergeHasBeenSet(false),
    m_alarmMergeTimeHasBeenSet(false)
{
}

CoreInternalOutcome LogAlarmReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogAlarmReq.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogAlarmReq.Filter` is not array type"));

        const rapidjson::Value &tmpValue = value["Filter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogFilterInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filter.push_back(item);
        }
        m_filterHasBeenSet = true;
    }

    if (value.HasMember("AlarmMerge") && !value["AlarmMerge"].IsNull())
    {
        if (!value["AlarmMerge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogAlarmReq.AlarmMerge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMerge = string(value["AlarmMerge"].GetString());
        m_alarmMergeHasBeenSet = true;
    }

    if (value.HasMember("AlarmMergeTime") && !value["AlarmMergeTime"].IsNull())
    {
        if (!value["AlarmMergeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogAlarmReq.AlarmMergeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMergeTime = string(value["AlarmMergeTime"].GetString());
        m_alarmMergeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogAlarmReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filter.begin(); itr != m_filter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmMergeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMerge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmMerge.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmMergeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMergeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmMergeTime.c_str(), allocator).Move(), allocator);
    }

}


string LogAlarmReq::GetInstanceId() const
{
    return m_instanceId;
}

void LogAlarmReq::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool LogAlarmReq::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<LogFilterInfo> LogAlarmReq::GetFilter() const
{
    return m_filter;
}

void LogAlarmReq::SetFilter(const vector<LogFilterInfo>& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool LogAlarmReq::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string LogAlarmReq::GetAlarmMerge() const
{
    return m_alarmMerge;
}

void LogAlarmReq::SetAlarmMerge(const string& _alarmMerge)
{
    m_alarmMerge = _alarmMerge;
    m_alarmMergeHasBeenSet = true;
}

bool LogAlarmReq::AlarmMergeHasBeenSet() const
{
    return m_alarmMergeHasBeenSet;
}

string LogAlarmReq::GetAlarmMergeTime() const
{
    return m_alarmMergeTime;
}

void LogAlarmReq::SetAlarmMergeTime(const string& _alarmMergeTime)
{
    m_alarmMergeTime = _alarmMergeTime;
    m_alarmMergeTimeHasBeenSet = true;
}

bool LogAlarmReq::AlarmMergeTimeHasBeenSet() const
{
    return m_alarmMergeTimeHasBeenSet;
}

