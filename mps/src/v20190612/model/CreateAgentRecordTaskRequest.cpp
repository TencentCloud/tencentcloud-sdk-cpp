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

#include <tencentcloud/mps/v20190612/model/CreateAgentRecordTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateAgentRecordTaskRequest::CreateAgentRecordTaskRequest() :
    m_liveRoomUrlHasBeenSet(false),
    m_maxDurationMinutesHasBeenSet(false),
    m_storeCosParamHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_interruptPolicyHasBeenSet(false)
{
}

string CreateAgentRecordTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_liveRoomUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveRoomUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveRoomUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDurationMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDurationMinutes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDurationMinutes, allocator);
    }

    if (m_storeCosParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreCosParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storeCosParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_interruptPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interruptPolicy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAgentRecordTaskRequest::GetLiveRoomUrl() const
{
    return m_liveRoomUrl;
}

void CreateAgentRecordTaskRequest::SetLiveRoomUrl(const string& _liveRoomUrl)
{
    m_liveRoomUrl = _liveRoomUrl;
    m_liveRoomUrlHasBeenSet = true;
}

bool CreateAgentRecordTaskRequest::LiveRoomUrlHasBeenSet() const
{
    return m_liveRoomUrlHasBeenSet;
}

int64_t CreateAgentRecordTaskRequest::GetMaxDurationMinutes() const
{
    return m_maxDurationMinutes;
}

void CreateAgentRecordTaskRequest::SetMaxDurationMinutes(const int64_t& _maxDurationMinutes)
{
    m_maxDurationMinutes = _maxDurationMinutes;
    m_maxDurationMinutesHasBeenSet = true;
}

bool CreateAgentRecordTaskRequest::MaxDurationMinutesHasBeenSet() const
{
    return m_maxDurationMinutesHasBeenSet;
}

AgentStoreCosParam CreateAgentRecordTaskRequest::GetStoreCosParam() const
{
    return m_storeCosParam;
}

void CreateAgentRecordTaskRequest::SetStoreCosParam(const AgentStoreCosParam& _storeCosParam)
{
    m_storeCosParam = _storeCosParam;
    m_storeCosParamHasBeenSet = true;
}

bool CreateAgentRecordTaskRequest::StoreCosParamHasBeenSet() const
{
    return m_storeCosParamHasBeenSet;
}

string CreateAgentRecordTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateAgentRecordTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateAgentRecordTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateAgentRecordTaskRequest::GetInterruptPolicy() const
{
    return m_interruptPolicy;
}

void CreateAgentRecordTaskRequest::SetInterruptPolicy(const string& _interruptPolicy)
{
    m_interruptPolicy = _interruptPolicy;
    m_interruptPolicyHasBeenSet = true;
}

bool CreateAgentRecordTaskRequest::InterruptPolicyHasBeenSet() const
{
    return m_interruptPolicyHasBeenSet;
}


