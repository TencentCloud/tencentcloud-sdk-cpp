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

#include <tencentcloud/cynosdb/v20190107/model/TaskMaintainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

TaskMaintainInfo::TaskMaintainInfo() :
    m_maintainStartTimeHasBeenSet(false),
    m_maintainDurationHasBeenSet(false),
    m_maintainWeekDaysHasBeenSet(false)
{
}

CoreInternalOutcome TaskMaintainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaintainStartTime") && !value["MaintainStartTime"].IsNull())
    {
        if (!value["MaintainStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMaintainInfo.MaintainStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainStartTime = value["MaintainStartTime"].GetInt64();
        m_maintainStartTimeHasBeenSet = true;
    }

    if (value.HasMember("MaintainDuration") && !value["MaintainDuration"].IsNull())
    {
        if (!value["MaintainDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMaintainInfo.MaintainDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainDuration = value["MaintainDuration"].GetInt64();
        m_maintainDurationHasBeenSet = true;
    }

    if (value.HasMember("MaintainWeekDays") && !value["MaintainWeekDays"].IsNull())
    {
        if (!value["MaintainWeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskMaintainInfo.MaintainWeekDays` is not array type"));

        const rapidjson::Value &tmpValue = value["MaintainWeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_maintainWeekDays.push_back((*itr).GetString());
        }
        m_maintainWeekDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskMaintainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maintainStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maintainStartTime, allocator);
    }

    if (m_maintainDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maintainDuration, allocator);
    }

    if (m_maintainWeekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainWeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_maintainWeekDays.begin(); itr != m_maintainWeekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t TaskMaintainInfo::GetMaintainStartTime() const
{
    return m_maintainStartTime;
}

void TaskMaintainInfo::SetMaintainStartTime(const int64_t& _maintainStartTime)
{
    m_maintainStartTime = _maintainStartTime;
    m_maintainStartTimeHasBeenSet = true;
}

bool TaskMaintainInfo::MaintainStartTimeHasBeenSet() const
{
    return m_maintainStartTimeHasBeenSet;
}

int64_t TaskMaintainInfo::GetMaintainDuration() const
{
    return m_maintainDuration;
}

void TaskMaintainInfo::SetMaintainDuration(const int64_t& _maintainDuration)
{
    m_maintainDuration = _maintainDuration;
    m_maintainDurationHasBeenSet = true;
}

bool TaskMaintainInfo::MaintainDurationHasBeenSet() const
{
    return m_maintainDurationHasBeenSet;
}

vector<string> TaskMaintainInfo::GetMaintainWeekDays() const
{
    return m_maintainWeekDays;
}

void TaskMaintainInfo::SetMaintainWeekDays(const vector<string>& _maintainWeekDays)
{
    m_maintainWeekDays = _maintainWeekDays;
    m_maintainWeekDaysHasBeenSet = true;
}

bool TaskMaintainInfo::MaintainWeekDaysHasBeenSet() const
{
    return m_maintainWeekDaysHasBeenSet;
}

