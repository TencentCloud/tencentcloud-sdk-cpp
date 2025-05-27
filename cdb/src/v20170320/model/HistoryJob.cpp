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

#include <tencentcloud/cdb/v20170320/model/HistoryJob.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

HistoryJob::HistoryJob() :
    m_operationTypeHasBeenSet(false),
    m_expandTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_oldCpuHasBeenSet(false),
    m_newCpuHasBeenSet(false),
    m_extendCPUNumHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome HistoryJob::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryJob.OperationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = string(value["OperationType"].GetString());
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpandType") && !value["ExpandType"].IsNull())
    {
        if (!value["ExpandType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryJob.ExpandType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expandType = string(value["ExpandType"].GetString());
        m_expandTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryJob.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryJob.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("OldCpu") && !value["OldCpu"].IsNull())
    {
        if (!value["OldCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryJob.OldCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldCpu = value["OldCpu"].GetInt64();
        m_oldCpuHasBeenSet = true;
    }

    if (value.HasMember("NewCpu") && !value["NewCpu"].IsNull())
    {
        if (!value["NewCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryJob.NewCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newCpu = value["NewCpu"].GetInt64();
        m_newCpuHasBeenSet = true;
    }

    if (value.HasMember("ExtendCPUNum") && !value["ExtendCPUNum"].IsNull())
    {
        if (!value["ExtendCPUNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryJob.ExtendCPUNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_extendCPUNum = value["ExtendCPUNum"].GetInt64();
        m_extendCPUNumHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryJob.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HistoryJob::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_expandTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expandType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_oldCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldCpu, allocator);
    }

    if (m_newCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newCpu, allocator);
    }

    if (m_extendCPUNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendCPUNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_extendCPUNum, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string HistoryJob::GetOperationType() const
{
    return m_operationType;
}

void HistoryJob::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool HistoryJob::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string HistoryJob::GetExpandType() const
{
    return m_expandType;
}

void HistoryJob::SetExpandType(const string& _expandType)
{
    m_expandType = _expandType;
    m_expandTypeHasBeenSet = true;
}

bool HistoryJob::ExpandTypeHasBeenSet() const
{
    return m_expandTypeHasBeenSet;
}

int64_t HistoryJob::GetStartTime() const
{
    return m_startTime;
}

void HistoryJob::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool HistoryJob::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t HistoryJob::GetEndTime() const
{
    return m_endTime;
}

void HistoryJob::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool HistoryJob::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t HistoryJob::GetOldCpu() const
{
    return m_oldCpu;
}

void HistoryJob::SetOldCpu(const int64_t& _oldCpu)
{
    m_oldCpu = _oldCpu;
    m_oldCpuHasBeenSet = true;
}

bool HistoryJob::OldCpuHasBeenSet() const
{
    return m_oldCpuHasBeenSet;
}

int64_t HistoryJob::GetNewCpu() const
{
    return m_newCpu;
}

void HistoryJob::SetNewCpu(const int64_t& _newCpu)
{
    m_newCpu = _newCpu;
    m_newCpuHasBeenSet = true;
}

bool HistoryJob::NewCpuHasBeenSet() const
{
    return m_newCpuHasBeenSet;
}

int64_t HistoryJob::GetExtendCPUNum() const
{
    return m_extendCPUNum;
}

void HistoryJob::SetExtendCPUNum(const int64_t& _extendCPUNum)
{
    m_extendCPUNum = _extendCPUNum;
    m_extendCPUNumHasBeenSet = true;
}

bool HistoryJob::ExtendCPUNumHasBeenSet() const
{
    return m_extendCPUNumHasBeenSet;
}

string HistoryJob::GetError() const
{
    return m_error;
}

void HistoryJob::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool HistoryJob::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

