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

#include <tencentcloud/tione/v20211111/model/BatchTaskInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

BatchTaskInstance::BatchTaskInstance() :
    m_batchTaskInstanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runtimeInSecondsHasBeenSet(false)
{
}

CoreInternalOutcome BatchTaskInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchTaskInstanceId") && !value["BatchTaskInstanceId"].IsNull())
    {
        if (!value["BatchTaskInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskInstance.BatchTaskInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchTaskInstanceId = string(value["BatchTaskInstanceId"].GetString());
        m_batchTaskInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskInstance.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskInstance.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuntimeInSeconds") && !value["RuntimeInSeconds"].IsNull())
    {
        if (!value["RuntimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskInstance.RuntimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeInSeconds = value["RuntimeInSeconds"].GetUint64();
        m_runtimeInSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchTaskInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchTaskInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchTaskInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchTaskInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_runtimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeInSeconds, allocator);
    }

}


string BatchTaskInstance::GetBatchTaskInstanceId() const
{
    return m_batchTaskInstanceId;
}

void BatchTaskInstance::SetBatchTaskInstanceId(const string& _batchTaskInstanceId)
{
    m_batchTaskInstanceId = _batchTaskInstanceId;
    m_batchTaskInstanceIdHasBeenSet = true;
}

bool BatchTaskInstance::BatchTaskInstanceIdHasBeenSet() const
{
    return m_batchTaskInstanceIdHasBeenSet;
}

string BatchTaskInstance::GetStartTime() const
{
    return m_startTime;
}

void BatchTaskInstance::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BatchTaskInstance::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BatchTaskInstance::GetEndTime() const
{
    return m_endTime;
}

void BatchTaskInstance::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BatchTaskInstance::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string BatchTaskInstance::GetStatus() const
{
    return m_status;
}

void BatchTaskInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchTaskInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BatchTaskInstance::GetRuntimeInSeconds() const
{
    return m_runtimeInSeconds;
}

void BatchTaskInstance::SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds)
{
    m_runtimeInSeconds = _runtimeInSeconds;
    m_runtimeInSecondsHasBeenSet = true;
}

bool BatchTaskInstance::RuntimeInSecondsHasBeenSet() const
{
    return m_runtimeInSecondsHasBeenSet;
}

