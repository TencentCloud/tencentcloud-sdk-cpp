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

#include <tencentcloud/wedata/v20210820/model/TriggerDsEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TriggerDsEventRequest::TriggerDsEventRequest() :
    m_projectIdHasBeenSet(false),
    m_eventCaseListHasBeenSet(false),
    m_eventBatchCaseListHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false)
{
}

string TriggerDsEventRequest::ToJsonString() const
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

    if (m_eventCaseListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCaseList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventCaseList.begin(); itr != m_eventCaseList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_eventBatchCaseListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBatchCaseList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventBatchCaseList.begin(); itr != m_eventBatchCaseList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TriggerDsEventRequest::GetProjectId() const
{
    return m_projectId;
}

void TriggerDsEventRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TriggerDsEventRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<EventCaseDTO> TriggerDsEventRequest::GetEventCaseList() const
{
    return m_eventCaseList;
}

void TriggerDsEventRequest::SetEventCaseList(const vector<EventCaseDTO>& _eventCaseList)
{
    m_eventCaseList = _eventCaseList;
    m_eventCaseListHasBeenSet = true;
}

bool TriggerDsEventRequest::EventCaseListHasBeenSet() const
{
    return m_eventCaseListHasBeenSet;
}

vector<EventBatchCaseDTO> TriggerDsEventRequest::GetEventBatchCaseList() const
{
    return m_eventBatchCaseList;
}

void TriggerDsEventRequest::SetEventBatchCaseList(const vector<EventBatchCaseDTO>& _eventBatchCaseList)
{
    m_eventBatchCaseList = _eventBatchCaseList;
    m_eventBatchCaseListHasBeenSet = true;
}

bool TriggerDsEventRequest::EventBatchCaseListHasBeenSet() const
{
    return m_eventBatchCaseListHasBeenSet;
}

string TriggerDsEventRequest::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void TriggerDsEventRequest::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool TriggerDsEventRequest::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}


