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

#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchCreateTaskVersionDsRequest::BatchCreateTaskVersionDsRequest() :
    m_taskVersionDTOsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_autoRunHasBeenSet(false),
    m_alarmWaysHasBeenSet(false),
    m_alarmRecipientTypesHasBeenSet(false),
    m_needCheckParentSubmittedHasBeenSet(false)
{
}

string BatchCreateTaskVersionDsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskVersionDTOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskVersionDTOs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskVersionDTOs.begin(); itr != m_taskVersionDTOs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRun, allocator);
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

    if (m_needCheckParentSubmittedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedCheckParentSubmitted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needCheckParentSubmitted, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<BatchCreateTaskVersionDsDTOLite> BatchCreateTaskVersionDsRequest::GetTaskVersionDTOs() const
{
    return m_taskVersionDTOs;
}

void BatchCreateTaskVersionDsRequest::SetTaskVersionDTOs(const vector<BatchCreateTaskVersionDsDTOLite>& _taskVersionDTOs)
{
    m_taskVersionDTOs = _taskVersionDTOs;
    m_taskVersionDTOsHasBeenSet = true;
}

bool BatchCreateTaskVersionDsRequest::TaskVersionDTOsHasBeenSet() const
{
    return m_taskVersionDTOsHasBeenSet;
}

string BatchCreateTaskVersionDsRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchCreateTaskVersionDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchCreateTaskVersionDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool BatchCreateTaskVersionDsRequest::GetAutoRun() const
{
    return m_autoRun;
}

void BatchCreateTaskVersionDsRequest::SetAutoRun(const bool& _autoRun)
{
    m_autoRun = _autoRun;
    m_autoRunHasBeenSet = true;
}

bool BatchCreateTaskVersionDsRequest::AutoRunHasBeenSet() const
{
    return m_autoRunHasBeenSet;
}

string BatchCreateTaskVersionDsRequest::GetAlarmWays() const
{
    return m_alarmWays;
}

void BatchCreateTaskVersionDsRequest::SetAlarmWays(const string& _alarmWays)
{
    m_alarmWays = _alarmWays;
    m_alarmWaysHasBeenSet = true;
}

bool BatchCreateTaskVersionDsRequest::AlarmWaysHasBeenSet() const
{
    return m_alarmWaysHasBeenSet;
}

string BatchCreateTaskVersionDsRequest::GetAlarmRecipientTypes() const
{
    return m_alarmRecipientTypes;
}

void BatchCreateTaskVersionDsRequest::SetAlarmRecipientTypes(const string& _alarmRecipientTypes)
{
    m_alarmRecipientTypes = _alarmRecipientTypes;
    m_alarmRecipientTypesHasBeenSet = true;
}

bool BatchCreateTaskVersionDsRequest::AlarmRecipientTypesHasBeenSet() const
{
    return m_alarmRecipientTypesHasBeenSet;
}

bool BatchCreateTaskVersionDsRequest::GetNeedCheckParentSubmitted() const
{
    return m_needCheckParentSubmitted;
}

void BatchCreateTaskVersionDsRequest::SetNeedCheckParentSubmitted(const bool& _needCheckParentSubmitted)
{
    m_needCheckParentSubmitted = _needCheckParentSubmitted;
    m_needCheckParentSubmittedHasBeenSet = true;
}

bool BatchCreateTaskVersionDsRequest::NeedCheckParentSubmittedHasBeenSet() const
{
    return m_needCheckParentSubmittedHasBeenSet;
}


