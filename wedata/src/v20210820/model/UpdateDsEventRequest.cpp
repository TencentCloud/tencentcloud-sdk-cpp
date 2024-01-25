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

#include <tencentcloud/wedata/v20210820/model/UpdateDsEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UpdateDsEventRequest::UpdateDsEventRequest() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeToLiveHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string UpdateDsEventRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_timeToLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeToLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeToLive.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDsEventRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateDsEventRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateDsEventRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UpdateDsEventRequest::GetName() const
{
    return m_name;
}

void UpdateDsEventRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateDsEventRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateDsEventRequest::GetTimeToLive() const
{
    return m_timeToLive;
}

void UpdateDsEventRequest::SetTimeToLive(const string& _timeToLive)
{
    m_timeToLive = _timeToLive;
    m_timeToLiveHasBeenSet = true;
}

bool UpdateDsEventRequest::TimeToLiveHasBeenSet() const
{
    return m_timeToLiveHasBeenSet;
}

string UpdateDsEventRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void UpdateDsEventRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool UpdateDsEventRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string UpdateDsEventRequest::GetDescription() const
{
    return m_description;
}

void UpdateDsEventRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateDsEventRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


