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

#include <tencentcloud/iss/v20230517/model/AddRecordRetrieveTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddRecordRetrieveTaskRequest::AddRecordRetrieveTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_expirationHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_describeHasBeenSet(false)
{
}

string AddRecordRetrieveTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_expirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expiration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expiration, allocator);
    }

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_channels.begin(); itr != m_channels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddRecordRetrieveTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void AddRecordRetrieveTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool AddRecordRetrieveTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t AddRecordRetrieveTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void AddRecordRetrieveTaskRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AddRecordRetrieveTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t AddRecordRetrieveTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void AddRecordRetrieveTaskRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AddRecordRetrieveTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AddRecordRetrieveTaskRequest::GetMode() const
{
    return m_mode;
}

void AddRecordRetrieveTaskRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool AddRecordRetrieveTaskRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t AddRecordRetrieveTaskRequest::GetExpiration() const
{
    return m_expiration;
}

void AddRecordRetrieveTaskRequest::SetExpiration(const int64_t& _expiration)
{
    m_expiration = _expiration;
    m_expirationHasBeenSet = true;
}

bool AddRecordRetrieveTaskRequest::ExpirationHasBeenSet() const
{
    return m_expirationHasBeenSet;
}

vector<ChannelInfo> AddRecordRetrieveTaskRequest::GetChannels() const
{
    return m_channels;
}

void AddRecordRetrieveTaskRequest::SetChannels(const vector<ChannelInfo>& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool AddRecordRetrieveTaskRequest::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}

string AddRecordRetrieveTaskRequest::GetDescribe() const
{
    return m_describe;
}

void AddRecordRetrieveTaskRequest::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool AddRecordRetrieveTaskRequest::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}


