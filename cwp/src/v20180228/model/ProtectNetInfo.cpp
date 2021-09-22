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

#include <tencentcloud/cwp/v20180228/model/ProtectNetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ProtectNetInfo::ProtectNetInfo() :
    m_taskIdHasBeenSet(false),
    m_protectDaysHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_reportPathHasBeenSet(false)
{
}

CoreInternalOutcome ProtectNetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectNetInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectDays") && !value["ProtectDays"].IsNull())
    {
        if (!value["ProtectDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectNetInfo.ProtectDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectDays = value["ProtectDays"].GetUint64();
        m_protectDaysHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectNetInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectNetInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectNetInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ReportPath") && !value["ReportPath"].IsNull())
    {
        if (!value["ReportPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectNetInfo.ReportPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportPath = string(value["ReportPath"].GetString());
        m_reportPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectNetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_protectDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectDays, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reportPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportPath.c_str(), allocator).Move(), allocator);
    }

}


string ProtectNetInfo::GetTaskId() const
{
    return m_taskId;
}

void ProtectNetInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ProtectNetInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t ProtectNetInfo::GetProtectDays() const
{
    return m_protectDays;
}

void ProtectNetInfo::SetProtectDays(const uint64_t& _protectDays)
{
    m_protectDays = _protectDays;
    m_protectDaysHasBeenSet = true;
}

bool ProtectNetInfo::ProtectDaysHasBeenSet() const
{
    return m_protectDaysHasBeenSet;
}

uint64_t ProtectNetInfo::GetStatus() const
{
    return m_status;
}

void ProtectNetInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProtectNetInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProtectNetInfo::GetStartTime() const
{
    return m_startTime;
}

void ProtectNetInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ProtectNetInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ProtectNetInfo::GetEndTime() const
{
    return m_endTime;
}

void ProtectNetInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ProtectNetInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ProtectNetInfo::GetReportPath() const
{
    return m_reportPath;
}

void ProtectNetInfo::SetReportPath(const string& _reportPath)
{
    m_reportPath = _reportPath;
    m_reportPathHasBeenSet = true;
}

bool ProtectNetInfo::ReportPathHasBeenSet() const
{
    return m_reportPathHasBeenSet;
}

