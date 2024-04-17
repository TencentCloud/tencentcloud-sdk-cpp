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

#include <tencentcloud/wedata/v20210820/model/CreateTaskVersionDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateTaskVersionDsRequest::CreateTaskVersionDsRequest() :
    m_taskHasBeenSet(false),
    m_needCheckParentSubmittedHasBeenSet(false),
    m_autoRunHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_alarmWaysHasBeenSet(false),
    m_alarmRecipientTypesHasBeenSet(false),
    m_enableCheckTaskCycleLinkHasBeenSet(false)
{
}

string CreateTaskVersionDsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Task";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_task.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_needCheckParentSubmittedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedCheckParentSubmitted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needCheckParentSubmitted, allocator);
    }

    if (m_autoRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRun, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestFromSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFromSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestFromSource.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmWaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmWays.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmRecipientTypes.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCheckTaskCycleLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCheckTaskCycleLink";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCheckTaskCycleLink, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


BatchCreateTaskVersionDTO CreateTaskVersionDsRequest::GetTask() const
{
    return m_task;
}

void CreateTaskVersionDsRequest::SetTask(const BatchCreateTaskVersionDTO& _task)
{
    m_task = _task;
    m_taskHasBeenSet = true;
}

bool CreateTaskVersionDsRequest::TaskHasBeenSet() const
{
    return m_taskHasBeenSet;
}

bool CreateTaskVersionDsRequest::GetNeedCheckParentSubmitted() const
{
    return m_needCheckParentSubmitted;
}

void CreateTaskVersionDsRequest::SetNeedCheckParentSubmitted(const bool& _needCheckParentSubmitted)
{
    m_needCheckParentSubmitted = _needCheckParentSubmitted;
    m_needCheckParentSubmittedHasBeenSet = true;
}

bool CreateTaskVersionDsRequest::NeedCheckParentSubmittedHasBeenSet() const
{
    return m_needCheckParentSubmittedHasBeenSet;
}

bool CreateTaskVersionDsRequest::GetAutoRun() const
{
    return m_autoRun;
}

void CreateTaskVersionDsRequest::SetAutoRun(const bool& _autoRun)
{
    m_autoRun = _autoRun;
    m_autoRunHasBeenSet = true;
}

bool CreateTaskVersionDsRequest::AutoRunHasBeenSet() const
{
    return m_autoRunHasBeenSet;
}

string CreateTaskVersionDsRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTaskVersionDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTaskVersionDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTaskVersionDsRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void CreateTaskVersionDsRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool CreateTaskVersionDsRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

string CreateTaskVersionDsRequest::GetAlarmWays() const
{
    return m_alarmWays;
}

void CreateTaskVersionDsRequest::SetAlarmWays(const string& _alarmWays)
{
    m_alarmWays = _alarmWays;
    m_alarmWaysHasBeenSet = true;
}

bool CreateTaskVersionDsRequest::AlarmWaysHasBeenSet() const
{
    return m_alarmWaysHasBeenSet;
}

string CreateTaskVersionDsRequest::GetAlarmRecipientTypes() const
{
    return m_alarmRecipientTypes;
}

void CreateTaskVersionDsRequest::SetAlarmRecipientTypes(const string& _alarmRecipientTypes)
{
    m_alarmRecipientTypes = _alarmRecipientTypes;
    m_alarmRecipientTypesHasBeenSet = true;
}

bool CreateTaskVersionDsRequest::AlarmRecipientTypesHasBeenSet() const
{
    return m_alarmRecipientTypesHasBeenSet;
}

bool CreateTaskVersionDsRequest::GetEnableCheckTaskCycleLink() const
{
    return m_enableCheckTaskCycleLink;
}

void CreateTaskVersionDsRequest::SetEnableCheckTaskCycleLink(const bool& _enableCheckTaskCycleLink)
{
    m_enableCheckTaskCycleLink = _enableCheckTaskCycleLink;
    m_enableCheckTaskCycleLinkHasBeenSet = true;
}

bool CreateTaskVersionDsRequest::EnableCheckTaskCycleLinkHasBeenSet() const
{
    return m_enableCheckTaskCycleLinkHasBeenSet;
}


