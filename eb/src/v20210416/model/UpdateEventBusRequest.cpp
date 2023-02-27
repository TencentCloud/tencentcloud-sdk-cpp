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

#include <tencentcloud/eb/v20210416/model/UpdateEventBusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

UpdateEventBusRequest::UpdateEventBusRequest() :
    m_eventBusIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventBusNameHasBeenSet(false),
    m_saveDaysHasBeenSet(false),
    m_logTopicIdHasBeenSet(false),
    m_enableStoreHasBeenSet(false)
{
}

string UpdateEventBusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBusName.c_str(), allocator).Move(), allocator);
    }

    if (m_saveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_saveDays, allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableStoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStore";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableStore, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateEventBusRequest::GetEventBusId() const
{
    return m_eventBusId;
}

void UpdateEventBusRequest::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool UpdateEventBusRequest::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string UpdateEventBusRequest::GetDescription() const
{
    return m_description;
}

void UpdateEventBusRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateEventBusRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateEventBusRequest::GetEventBusName() const
{
    return m_eventBusName;
}

void UpdateEventBusRequest::SetEventBusName(const string& _eventBusName)
{
    m_eventBusName = _eventBusName;
    m_eventBusNameHasBeenSet = true;
}

bool UpdateEventBusRequest::EventBusNameHasBeenSet() const
{
    return m_eventBusNameHasBeenSet;
}

int64_t UpdateEventBusRequest::GetSaveDays() const
{
    return m_saveDays;
}

void UpdateEventBusRequest::SetSaveDays(const int64_t& _saveDays)
{
    m_saveDays = _saveDays;
    m_saveDaysHasBeenSet = true;
}

bool UpdateEventBusRequest::SaveDaysHasBeenSet() const
{
    return m_saveDaysHasBeenSet;
}

string UpdateEventBusRequest::GetLogTopicId() const
{
    return m_logTopicId;
}

void UpdateEventBusRequest::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool UpdateEventBusRequest::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

bool UpdateEventBusRequest::GetEnableStore() const
{
    return m_enableStore;
}

void UpdateEventBusRequest::SetEnableStore(const bool& _enableStore)
{
    m_enableStore = _enableStore;
    m_enableStoreHasBeenSet = true;
}

bool UpdateEventBusRequest::EnableStoreHasBeenSet() const
{
    return m_enableStoreHasBeenSet;
}


