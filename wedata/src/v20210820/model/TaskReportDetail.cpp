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

#include <tencentcloud/wedata/v20210820/model/TaskReportDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskReportDetail::TaskReportDetail() :
    m_taskIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_taskStateHasBeenSet(false),
    m_totalReadRecordsHasBeenSet(false),
    m_totalReadBytesHasBeenSet(false),
    m_totalWriteRecordsHasBeenSet(false),
    m_totalWriteBytesHasBeenSet(false),
    m_recordSpeedHasBeenSet(false),
    m_byteSpeedHasBeenSet(false),
    m_totalErrorRecordsHasBeenSet(false)
{
}

CoreInternalOutcome TaskReportDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("IssueDate") && !value["IssueDate"].IsNull())
    {
        if (!value["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(value["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (value.HasMember("TaskState") && !value["TaskState"].IsNull())
    {
        if (!value["TaskState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.TaskState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskState = string(value["TaskState"].GetString());
        m_taskStateHasBeenSet = true;
    }

    if (value.HasMember("TotalReadRecords") && !value["TotalReadRecords"].IsNull())
    {
        if (!value["TotalReadRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.TotalReadRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReadRecords = value["TotalReadRecords"].GetUint64();
        m_totalReadRecordsHasBeenSet = true;
    }

    if (value.HasMember("TotalReadBytes") && !value["TotalReadBytes"].IsNull())
    {
        if (!value["TotalReadBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.TotalReadBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReadBytes = value["TotalReadBytes"].GetUint64();
        m_totalReadBytesHasBeenSet = true;
    }

    if (value.HasMember("TotalWriteRecords") && !value["TotalWriteRecords"].IsNull())
    {
        if (!value["TotalWriteRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.TotalWriteRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalWriteRecords = value["TotalWriteRecords"].GetUint64();
        m_totalWriteRecordsHasBeenSet = true;
    }

    if (value.HasMember("TotalWriteBytes") && !value["TotalWriteBytes"].IsNull())
    {
        if (!value["TotalWriteBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.TotalWriteBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalWriteBytes = value["TotalWriteBytes"].GetUint64();
        m_totalWriteBytesHasBeenSet = true;
    }

    if (value.HasMember("RecordSpeed") && !value["RecordSpeed"].IsNull())
    {
        if (!value["RecordSpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.RecordSpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordSpeed = value["RecordSpeed"].GetUint64();
        m_recordSpeedHasBeenSet = true;
    }

    if (value.HasMember("ByteSpeed") && !value["ByteSpeed"].IsNull())
    {
        if (!value["ByteSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.ByteSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_byteSpeed = value["ByteSpeed"].GetDouble();
        m_byteSpeedHasBeenSet = true;
    }

    if (value.HasMember("TotalErrorRecords") && !value["TotalErrorRecords"].IsNull())
    {
        if (!value["TotalErrorRecords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskReportDetail.TotalErrorRecords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalErrorRecords = value["TotalErrorRecords"].GetUint64();
        m_totalErrorRecordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskReportDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskState.c_str(), allocator).Move(), allocator);
    }

    if (m_totalReadRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalReadRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalReadRecords, allocator);
    }

    if (m_totalReadBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalReadBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalReadBytes, allocator);
    }

    if (m_totalWriteRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalWriteRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalWriteRecords, allocator);
    }

    if (m_totalWriteBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalWriteBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalWriteBytes, allocator);
    }

    if (m_recordSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordSpeed, allocator);
    }

    if (m_byteSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByteSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_byteSpeed, allocator);
    }

    if (m_totalErrorRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalErrorRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalErrorRecords, allocator);
    }

}


string TaskReportDetail::GetTaskId() const
{
    return m_taskId;
}

void TaskReportDetail::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskReportDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskReportDetail::GetInstanceId() const
{
    return m_instanceId;
}

void TaskReportDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TaskReportDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TaskReportDetail::GetCurRunDate() const
{
    return m_curRunDate;
}

void TaskReportDetail::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool TaskReportDetail::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string TaskReportDetail::GetIssueDate() const
{
    return m_issueDate;
}

void TaskReportDetail::SetIssueDate(const string& _issueDate)
{
    m_issueDate = _issueDate;
    m_issueDateHasBeenSet = true;
}

bool TaskReportDetail::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string TaskReportDetail::GetTaskState() const
{
    return m_taskState;
}

void TaskReportDetail::SetTaskState(const string& _taskState)
{
    m_taskState = _taskState;
    m_taskStateHasBeenSet = true;
}

bool TaskReportDetail::TaskStateHasBeenSet() const
{
    return m_taskStateHasBeenSet;
}

uint64_t TaskReportDetail::GetTotalReadRecords() const
{
    return m_totalReadRecords;
}

void TaskReportDetail::SetTotalReadRecords(const uint64_t& _totalReadRecords)
{
    m_totalReadRecords = _totalReadRecords;
    m_totalReadRecordsHasBeenSet = true;
}

bool TaskReportDetail::TotalReadRecordsHasBeenSet() const
{
    return m_totalReadRecordsHasBeenSet;
}

uint64_t TaskReportDetail::GetTotalReadBytes() const
{
    return m_totalReadBytes;
}

void TaskReportDetail::SetTotalReadBytes(const uint64_t& _totalReadBytes)
{
    m_totalReadBytes = _totalReadBytes;
    m_totalReadBytesHasBeenSet = true;
}

bool TaskReportDetail::TotalReadBytesHasBeenSet() const
{
    return m_totalReadBytesHasBeenSet;
}

uint64_t TaskReportDetail::GetTotalWriteRecords() const
{
    return m_totalWriteRecords;
}

void TaskReportDetail::SetTotalWriteRecords(const uint64_t& _totalWriteRecords)
{
    m_totalWriteRecords = _totalWriteRecords;
    m_totalWriteRecordsHasBeenSet = true;
}

bool TaskReportDetail::TotalWriteRecordsHasBeenSet() const
{
    return m_totalWriteRecordsHasBeenSet;
}

uint64_t TaskReportDetail::GetTotalWriteBytes() const
{
    return m_totalWriteBytes;
}

void TaskReportDetail::SetTotalWriteBytes(const uint64_t& _totalWriteBytes)
{
    m_totalWriteBytes = _totalWriteBytes;
    m_totalWriteBytesHasBeenSet = true;
}

bool TaskReportDetail::TotalWriteBytesHasBeenSet() const
{
    return m_totalWriteBytesHasBeenSet;
}

uint64_t TaskReportDetail::GetRecordSpeed() const
{
    return m_recordSpeed;
}

void TaskReportDetail::SetRecordSpeed(const uint64_t& _recordSpeed)
{
    m_recordSpeed = _recordSpeed;
    m_recordSpeedHasBeenSet = true;
}

bool TaskReportDetail::RecordSpeedHasBeenSet() const
{
    return m_recordSpeedHasBeenSet;
}

double TaskReportDetail::GetByteSpeed() const
{
    return m_byteSpeed;
}

void TaskReportDetail::SetByteSpeed(const double& _byteSpeed)
{
    m_byteSpeed = _byteSpeed;
    m_byteSpeedHasBeenSet = true;
}

bool TaskReportDetail::ByteSpeedHasBeenSet() const
{
    return m_byteSpeedHasBeenSet;
}

uint64_t TaskReportDetail::GetTotalErrorRecords() const
{
    return m_totalErrorRecords;
}

void TaskReportDetail::SetTotalErrorRecords(const uint64_t& _totalErrorRecords)
{
    m_totalErrorRecords = _totalErrorRecords;
    m_totalErrorRecordsHasBeenSet = true;
}

bool TaskReportDetail::TotalErrorRecordsHasBeenSet() const
{
    return m_totalErrorRecordsHasBeenSet;
}

