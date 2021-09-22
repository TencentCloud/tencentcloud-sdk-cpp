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

#include <tencentcloud/cwp/v20180228/model/EmergencyResponseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

EmergencyResponseInfo::EmergencyResponseInfo() :
    m_taskIdHasBeenSet(false),
    m_hostNumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_reportPathHasBeenSet(false)
{
}

CoreInternalOutcome EmergencyResponseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyResponseInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("HostNum") && !value["HostNum"].IsNull())
    {
        if (!value["HostNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyResponseInfo.HostNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostNum = value["HostNum"].GetUint64();
        m_hostNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyResponseInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyResponseInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyResponseInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ReportPath") && !value["ReportPath"].IsNull())
    {
        if (!value["ReportPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmergencyResponseInfo.ReportPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportPath = string(value["ReportPath"].GetString());
        m_reportPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmergencyResponseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostNum, allocator);
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


string EmergencyResponseInfo::GetTaskId() const
{
    return m_taskId;
}

void EmergencyResponseInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool EmergencyResponseInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t EmergencyResponseInfo::GetHostNum() const
{
    return m_hostNum;
}

void EmergencyResponseInfo::SetHostNum(const uint64_t& _hostNum)
{
    m_hostNum = _hostNum;
    m_hostNumHasBeenSet = true;
}

bool EmergencyResponseInfo::HostNumHasBeenSet() const
{
    return m_hostNumHasBeenSet;
}

uint64_t EmergencyResponseInfo::GetStatus() const
{
    return m_status;
}

void EmergencyResponseInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EmergencyResponseInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EmergencyResponseInfo::GetStartTime() const
{
    return m_startTime;
}

void EmergencyResponseInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool EmergencyResponseInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string EmergencyResponseInfo::GetEndTime() const
{
    return m_endTime;
}

void EmergencyResponseInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool EmergencyResponseInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string EmergencyResponseInfo::GetReportPath() const
{
    return m_reportPath;
}

void EmergencyResponseInfo::SetReportPath(const string& _reportPath)
{
    m_reportPath = _reportPath;
    m_reportPathHasBeenSet = true;
}

bool EmergencyResponseInfo::ReportPathHasBeenSet() const
{
    return m_reportPathHasBeenSet;
}

