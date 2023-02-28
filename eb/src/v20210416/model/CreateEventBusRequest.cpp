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

#include <tencentcloud/eb/v20210416/model/CreateEventBusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

CreateEventBusRequest::CreateEventBusRequest() :
    m_eventBusNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_saveDaysHasBeenSet(false),
    m_enableStoreHasBeenSet(false)
{
}

string CreateEventBusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventBusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBusName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_saveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_saveDays, allocator);
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


string CreateEventBusRequest::GetEventBusName() const
{
    return m_eventBusName;
}

void CreateEventBusRequest::SetEventBusName(const string& _eventBusName)
{
    m_eventBusName = _eventBusName;
    m_eventBusNameHasBeenSet = true;
}

bool CreateEventBusRequest::EventBusNameHasBeenSet() const
{
    return m_eventBusNameHasBeenSet;
}

string CreateEventBusRequest::GetDescription() const
{
    return m_description;
}

void CreateEventBusRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateEventBusRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateEventBusRequest::GetSaveDays() const
{
    return m_saveDays;
}

void CreateEventBusRequest::SetSaveDays(const int64_t& _saveDays)
{
    m_saveDays = _saveDays;
    m_saveDaysHasBeenSet = true;
}

bool CreateEventBusRequest::SaveDaysHasBeenSet() const
{
    return m_saveDaysHasBeenSet;
}

bool CreateEventBusRequest::GetEnableStore() const
{
    return m_enableStore;
}

void CreateEventBusRequest::SetEnableStore(const bool& _enableStore)
{
    m_enableStore = _enableStore;
    m_enableStoreHasBeenSet = true;
}

bool CreateEventBusRequest::EnableStoreHasBeenSet() const
{
    return m_enableStoreHasBeenSet;
}


