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

#include <tencentcloud/tcr/v20190924/model/RetentionExecution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

RetentionExecution::RetentionExecution() :
    m_executionIdHasBeenSet(false),
    m_retentionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome RetentionExecution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutionId") && !value["ExecutionId"].IsNull())
    {
        if (!value["ExecutionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionExecution.ExecutionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionId = value["ExecutionId"].GetInt64();
        m_executionIdHasBeenSet = true;
    }

    if (value.HasMember("RetentionId") && !value["RetentionId"].IsNull())
    {
        if (!value["RetentionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionExecution.RetentionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionId = value["RetentionId"].GetInt64();
        m_retentionIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionExecution.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionExecution.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionExecution.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetentionExecution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionId, allocator);
    }

    if (m_retentionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionId, allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


int64_t RetentionExecution::GetExecutionId() const
{
    return m_executionId;
}

void RetentionExecution::SetExecutionId(const int64_t& _executionId)
{
    m_executionId = _executionId;
    m_executionIdHasBeenSet = true;
}

bool RetentionExecution::ExecutionIdHasBeenSet() const
{
    return m_executionIdHasBeenSet;
}

int64_t RetentionExecution::GetRetentionId() const
{
    return m_retentionId;
}

void RetentionExecution::SetRetentionId(const int64_t& _retentionId)
{
    m_retentionId = _retentionId;
    m_retentionIdHasBeenSet = true;
}

bool RetentionExecution::RetentionIdHasBeenSet() const
{
    return m_retentionIdHasBeenSet;
}

string RetentionExecution::GetStartTime() const
{
    return m_startTime;
}

void RetentionExecution::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RetentionExecution::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RetentionExecution::GetEndTime() const
{
    return m_endTime;
}

void RetentionExecution::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RetentionExecution::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RetentionExecution::GetStatus() const
{
    return m_status;
}

void RetentionExecution::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RetentionExecution::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

