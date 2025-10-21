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

#include <tencentcloud/wedata/v20250806/model/ListOpsAlarmRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListOpsAlarmRulesRequest::ListOpsAlarmRulesRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_monitorObjectTypeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_alarmRecipientIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_createTimeFromHasBeenSet(false),
    m_createTimeToHasBeenSet(false),
    m_updateTimeFromHasBeenSet(false),
    m_updateTimeToHasBeenSet(false)
{
}

string ListOpsAlarmRulesRequest::ToJsonString() const
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

    if (m_monitorObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorObjectType, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_alarmRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeTo.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateTimeTo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListOpsAlarmRulesRequest::GetProjectId() const
{
    return m_projectId;
}

void ListOpsAlarmRulesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ListOpsAlarmRulesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListOpsAlarmRulesRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListOpsAlarmRulesRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListOpsAlarmRulesRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t ListOpsAlarmRulesRequest::GetMonitorObjectType() const
{
    return m_monitorObjectType;
}

void ListOpsAlarmRulesRequest::SetMonitorObjectType(const int64_t& _monitorObjectType)
{
    m_monitorObjectType = _monitorObjectType;
    m_monitorObjectTypeHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::MonitorObjectTypeHasBeenSet() const
{
    return m_monitorObjectTypeHasBeenSet;
}

string ListOpsAlarmRulesRequest::GetTaskId() const
{
    return m_taskId;
}

void ListOpsAlarmRulesRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ListOpsAlarmRulesRequest::GetAlarmType() const
{
    return m_alarmType;
}

void ListOpsAlarmRulesRequest::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

int64_t ListOpsAlarmRulesRequest::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void ListOpsAlarmRulesRequest::SetAlarmLevel(const int64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string ListOpsAlarmRulesRequest::GetAlarmRecipientId() const
{
    return m_alarmRecipientId;
}

void ListOpsAlarmRulesRequest::SetAlarmRecipientId(const string& _alarmRecipientId)
{
    m_alarmRecipientId = _alarmRecipientId;
    m_alarmRecipientIdHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::AlarmRecipientIdHasBeenSet() const
{
    return m_alarmRecipientIdHasBeenSet;
}

string ListOpsAlarmRulesRequest::GetKeyword() const
{
    return m_keyword;
}

void ListOpsAlarmRulesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string ListOpsAlarmRulesRequest::GetCreateUserUin() const
{
    return m_createUserUin;
}

void ListOpsAlarmRulesRequest::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string ListOpsAlarmRulesRequest::GetCreateTimeFrom() const
{
    return m_createTimeFrom;
}

void ListOpsAlarmRulesRequest::SetCreateTimeFrom(const string& _createTimeFrom)
{
    m_createTimeFrom = _createTimeFrom;
    m_createTimeFromHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::CreateTimeFromHasBeenSet() const
{
    return m_createTimeFromHasBeenSet;
}

string ListOpsAlarmRulesRequest::GetCreateTimeTo() const
{
    return m_createTimeTo;
}

void ListOpsAlarmRulesRequest::SetCreateTimeTo(const string& _createTimeTo)
{
    m_createTimeTo = _createTimeTo;
    m_createTimeToHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::CreateTimeToHasBeenSet() const
{
    return m_createTimeToHasBeenSet;
}

string ListOpsAlarmRulesRequest::GetUpdateTimeFrom() const
{
    return m_updateTimeFrom;
}

void ListOpsAlarmRulesRequest::SetUpdateTimeFrom(const string& _updateTimeFrom)
{
    m_updateTimeFrom = _updateTimeFrom;
    m_updateTimeFromHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::UpdateTimeFromHasBeenSet() const
{
    return m_updateTimeFromHasBeenSet;
}

string ListOpsAlarmRulesRequest::GetUpdateTimeTo() const
{
    return m_updateTimeTo;
}

void ListOpsAlarmRulesRequest::SetUpdateTimeTo(const string& _updateTimeTo)
{
    m_updateTimeTo = _updateTimeTo;
    m_updateTimeToHasBeenSet = true;
}

bool ListOpsAlarmRulesRequest::UpdateTimeToHasBeenSet() const
{
    return m_updateTimeToHasBeenSet;
}


