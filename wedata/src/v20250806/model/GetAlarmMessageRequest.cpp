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

#include <tencentcloud/wedata/v20250806/model/GetAlarmMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

GetAlarmMessageRequest::GetAlarmMessageRequest() :
    m_projectIdHasBeenSet(false),
    m_alarmMessageIdHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

string GetAlarmMessageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmMessageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMessageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmMessageId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetAlarmMessageRequest::GetProjectId() const
{
    return m_projectId;
}

void GetAlarmMessageRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetAlarmMessageRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetAlarmMessageRequest::GetAlarmMessageId() const
{
    return m_alarmMessageId;
}

void GetAlarmMessageRequest::SetAlarmMessageId(const string& _alarmMessageId)
{
    m_alarmMessageId = _alarmMessageId;
    m_alarmMessageIdHasBeenSet = true;
}

bool GetAlarmMessageRequest::AlarmMessageIdHasBeenSet() const
{
    return m_alarmMessageIdHasBeenSet;
}

string GetAlarmMessageRequest::GetTimeZone() const
{
    return m_timeZone;
}

void GetAlarmMessageRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool GetAlarmMessageRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}


