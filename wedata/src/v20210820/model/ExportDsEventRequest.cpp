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

#include <tencentcloud/wedata/v20210820/model/ExportDsEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExportDsEventRequest::ExportDsEventRequest() :
    m_projectIdHasBeenSet(false),
    m_originDomainHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_eventNamesHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

string ExportDsEventRequest::ToJsonString() const
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

    if (m_originDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_range.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventNames.begin(); itr != m_eventNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Events";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_events.begin(); itr != m_events.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportDsEventRequest::GetProjectId() const
{
    return m_projectId;
}

void ExportDsEventRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ExportDsEventRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ExportDsEventRequest::GetOriginDomain() const
{
    return m_originDomain;
}

void ExportDsEventRequest::SetOriginDomain(const string& _originDomain)
{
    m_originDomain = _originDomain;
    m_originDomainHasBeenSet = true;
}

bool ExportDsEventRequest::OriginDomainHasBeenSet() const
{
    return m_originDomainHasBeenSet;
}

string ExportDsEventRequest::GetRange() const
{
    return m_range;
}

void ExportDsEventRequest::SetRange(const string& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool ExportDsEventRequest::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

vector<string> ExportDsEventRequest::GetEventNames() const
{
    return m_eventNames;
}

void ExportDsEventRequest::SetEventNames(const vector<string>& _eventNames)
{
    m_eventNames = _eventNames;
    m_eventNamesHasBeenSet = true;
}

bool ExportDsEventRequest::EventNamesHasBeenSet() const
{
    return m_eventNamesHasBeenSet;
}

vector<EventDsDto> ExportDsEventRequest::GetEvents() const
{
    return m_events;
}

void ExportDsEventRequest::SetEvents(const vector<EventDsDto>& _events)
{
    m_events = _events;
    m_eventsHasBeenSet = true;
}

bool ExportDsEventRequest::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

string ExportDsEventRequest::GetPublishTime() const
{
    return m_publishTime;
}

void ExportDsEventRequest::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool ExportDsEventRequest::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string ExportDsEventRequest::GetTitle() const
{
    return m_title;
}

void ExportDsEventRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ExportDsEventRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}


