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

#include <tencentcloud/cls/v20201016/model/ModifyDlcDeliverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyDlcDeliverRequest::ModifyDlcDeliverRequest() :
    m_topicIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_deliverTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_dlcInfoHasBeenSet(false),
    m_hasServicesLogHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyDlcDeliverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deliverType, allocator);
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

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_dlcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dlcInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hasServicesLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasServicesLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasServicesLog, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDlcDeliverRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyDlcDeliverRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyDlcDeliverRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyDlcDeliverRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyDlcDeliverRequest::GetName() const
{
    return m_name;
}

void ModifyDlcDeliverRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyDlcDeliverRequest::GetDeliverType() const
{
    return m_deliverType;
}

void ModifyDlcDeliverRequest::SetDeliverType(const uint64_t& _deliverType)
{
    m_deliverType = _deliverType;
    m_deliverTypeHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::DeliverTypeHasBeenSet() const
{
    return m_deliverTypeHasBeenSet;
}

uint64_t ModifyDlcDeliverRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyDlcDeliverRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t ModifyDlcDeliverRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyDlcDeliverRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t ModifyDlcDeliverRequest::GetMaxSize() const
{
    return m_maxSize;
}

void ModifyDlcDeliverRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t ModifyDlcDeliverRequest::GetInterval() const
{
    return m_interval;
}

void ModifyDlcDeliverRequest::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

DlcInfo ModifyDlcDeliverRequest::GetDlcInfo() const
{
    return m_dlcInfo;
}

void ModifyDlcDeliverRequest::SetDlcInfo(const DlcInfo& _dlcInfo)
{
    m_dlcInfo = _dlcInfo;
    m_dlcInfoHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::DlcInfoHasBeenSet() const
{
    return m_dlcInfoHasBeenSet;
}

uint64_t ModifyDlcDeliverRequest::GetHasServicesLog() const
{
    return m_hasServicesLog;
}

void ModifyDlcDeliverRequest::SetHasServicesLog(const uint64_t& _hasServicesLog)
{
    m_hasServicesLog = _hasServicesLog;
    m_hasServicesLogHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::HasServicesLogHasBeenSet() const
{
    return m_hasServicesLogHasBeenSet;
}

uint64_t ModifyDlcDeliverRequest::GetStatus() const
{
    return m_status;
}

void ModifyDlcDeliverRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDlcDeliverRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


