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

#include <tencentcloud/mongodb/v20190725/model/CreateSlowLogPatternDownloadTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CreateSlowLogPatternDownloadTaskRequest::CreateSlowLogPatternDownloadTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_thresholdMsHasBeenSet(false),
    m_commandsHasBeenSet(false)
{
}

string CreateSlowLogPatternDownloadTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_thresholdMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThresholdMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_thresholdMs, allocator);
    }

    if (m_commandsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commands";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_commands.begin(); itr != m_commands.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSlowLogPatternDownloadTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateSlowLogPatternDownloadTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateSlowLogPatternDownloadTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateSlowLogPatternDownloadTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateSlowLogPatternDownloadTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateSlowLogPatternDownloadTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateSlowLogPatternDownloadTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateSlowLogPatternDownloadTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateSlowLogPatternDownloadTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CreateSlowLogPatternDownloadTaskRequest::GetThresholdMs() const
{
    return m_thresholdMs;
}

void CreateSlowLogPatternDownloadTaskRequest::SetThresholdMs(const int64_t& _thresholdMs)
{
    m_thresholdMs = _thresholdMs;
    m_thresholdMsHasBeenSet = true;
}

bool CreateSlowLogPatternDownloadTaskRequest::ThresholdMsHasBeenSet() const
{
    return m_thresholdMsHasBeenSet;
}

vector<string> CreateSlowLogPatternDownloadTaskRequest::GetCommands() const
{
    return m_commands;
}

void CreateSlowLogPatternDownloadTaskRequest::SetCommands(const vector<string>& _commands)
{
    m_commands = _commands;
    m_commandsHasBeenSet = true;
}

bool CreateSlowLogPatternDownloadTaskRequest::CommandsHasBeenSet() const
{
    return m_commandsHasBeenSet;
}


