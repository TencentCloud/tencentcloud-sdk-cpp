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

#include <tencentcloud/wedata/v20210820/model/DescribeAlarmReceiverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeAlarmReceiverRequest::DescribeAlarmReceiverRequest() :
    m_alarmIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_alarmRecipientHasBeenSet(false),
    m_alarmRecipientNameHasBeenSet(false),
    m_alarmTimeHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_monitorTypeHasBeenSet(false)
{
}

string DescribeAlarmReceiverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_alarmRecipientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipient";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmRecipient.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmRecipientName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmTime.c_str(), allocator).Move(), allocator);
    }

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordId, allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmReceiverRequest::GetAlarmId() const
{
    return m_alarmId;
}

void DescribeAlarmReceiverRequest::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

uint64_t DescribeAlarmReceiverRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeAlarmReceiverRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeAlarmReceiverRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAlarmReceiverRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeAlarmReceiverRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeAlarmReceiverRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t DescribeAlarmReceiverRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeAlarmReceiverRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeAlarmReceiverRequest::GetAlarmRecipient() const
{
    return m_alarmRecipient;
}

void DescribeAlarmReceiverRequest::SetAlarmRecipient(const string& _alarmRecipient)
{
    m_alarmRecipient = _alarmRecipient;
    m_alarmRecipientHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::AlarmRecipientHasBeenSet() const
{
    return m_alarmRecipientHasBeenSet;
}

string DescribeAlarmReceiverRequest::GetAlarmRecipientName() const
{
    return m_alarmRecipientName;
}

void DescribeAlarmReceiverRequest::SetAlarmRecipientName(const string& _alarmRecipientName)
{
    m_alarmRecipientName = _alarmRecipientName;
    m_alarmRecipientNameHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::AlarmRecipientNameHasBeenSet() const
{
    return m_alarmRecipientNameHasBeenSet;
}

string DescribeAlarmReceiverRequest::GetAlarmTime() const
{
    return m_alarmTime;
}

void DescribeAlarmReceiverRequest::SetAlarmTime(const string& _alarmTime)
{
    m_alarmTime = _alarmTime;
    m_alarmTimeHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::AlarmTimeHasBeenSet() const
{
    return m_alarmTimeHasBeenSet;
}

string DescribeAlarmReceiverRequest::GetMessageId() const
{
    return m_messageId;
}

void DescribeAlarmReceiverRequest::SetMessageId(const string& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

uint64_t DescribeAlarmReceiverRequest::GetRecordId() const
{
    return m_recordId;
}

void DescribeAlarmReceiverRequest::SetRecordId(const uint64_t& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

uint64_t DescribeAlarmReceiverRequest::GetMonitorType() const
{
    return m_monitorType;
}

void DescribeAlarmReceiverRequest::SetMonitorType(const uint64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool DescribeAlarmReceiverRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}


