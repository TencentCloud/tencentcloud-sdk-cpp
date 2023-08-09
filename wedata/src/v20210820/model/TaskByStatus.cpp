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

#include <tencentcloud/wedata/v20210820/model/TaskByStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskByStatus::TaskByStatus() :
    m_countGroupHasBeenSet(false),
    m_showTimeGroupHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cycleUnitHasBeenSet(false),
    m_reportTimeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome TaskByStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CountGroup") && !value["CountGroup"].IsNull())
    {
        if (!value["CountGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskByStatus.CountGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countGroup = string(value["CountGroup"].GetString());
        m_countGroupHasBeenSet = true;
    }

    if (value.HasMember("ShowTimeGroup") && !value["ShowTimeGroup"].IsNull())
    {
        if (!value["ShowTimeGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskByStatus.ShowTimeGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_showTimeGroup = string(value["ShowTimeGroup"].GetString());
        m_showTimeGroupHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskByStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskByStatus.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("ReportTime") && !value["ReportTime"].IsNull())
    {
        if (!value["ReportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskByStatus.ReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = string(value["ReportTime"].GetString());
        m_reportTimeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskByStatus.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskByStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_showTimeGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowTimeGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_showTimeGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string TaskByStatus::GetCountGroup() const
{
    return m_countGroup;
}

void TaskByStatus::SetCountGroup(const string& _countGroup)
{
    m_countGroup = _countGroup;
    m_countGroupHasBeenSet = true;
}

bool TaskByStatus::CountGroupHasBeenSet() const
{
    return m_countGroupHasBeenSet;
}

string TaskByStatus::GetShowTimeGroup() const
{
    return m_showTimeGroup;
}

void TaskByStatus::SetShowTimeGroup(const string& _showTimeGroup)
{
    m_showTimeGroup = _showTimeGroup;
    m_showTimeGroupHasBeenSet = true;
}

bool TaskByStatus::ShowTimeGroupHasBeenSet() const
{
    return m_showTimeGroupHasBeenSet;
}

string TaskByStatus::GetStatus() const
{
    return m_status;
}

void TaskByStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskByStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskByStatus::GetCycleUnit() const
{
    return m_cycleUnit;
}

void TaskByStatus::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool TaskByStatus::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

string TaskByStatus::GetReportTime() const
{
    return m_reportTime;
}

void TaskByStatus::SetReportTime(const string& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool TaskByStatus::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}

uint64_t TaskByStatus::GetCount() const
{
    return m_count;
}

void TaskByStatus::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool TaskByStatus::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

