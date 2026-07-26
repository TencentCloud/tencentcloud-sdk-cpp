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

#include <tencentcloud/adp/v20260520/model/CreateAppTriggerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateAppTriggerRequest::CreateAppTriggerRequest() :
    m_appIdHasBeenSet(false),
    m_executeConfigHasBeenSet(false),
    m_executeTypeHasBeenSet(false),
    m_pushConfigHasBeenSet(false),
    m_triggerConfigHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_triggerTypeHasBeenSet(false)
{
}

string CreateAppTriggerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_executeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_executeConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_executeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executeType, allocator);
    }

    if (m_pushConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pushConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_triggerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_triggerType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAppTriggerRequest::GetAppId() const
{
    return m_appId;
}

void CreateAppTriggerRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CreateAppTriggerRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

ExecuteConfig CreateAppTriggerRequest::GetExecuteConfig() const
{
    return m_executeConfig;
}

void CreateAppTriggerRequest::SetExecuteConfig(const ExecuteConfig& _executeConfig)
{
    m_executeConfig = _executeConfig;
    m_executeConfigHasBeenSet = true;
}

bool CreateAppTriggerRequest::ExecuteConfigHasBeenSet() const
{
    return m_executeConfigHasBeenSet;
}

int64_t CreateAppTriggerRequest::GetExecuteType() const
{
    return m_executeType;
}

void CreateAppTriggerRequest::SetExecuteType(const int64_t& _executeType)
{
    m_executeType = _executeType;
    m_executeTypeHasBeenSet = true;
}

bool CreateAppTriggerRequest::ExecuteTypeHasBeenSet() const
{
    return m_executeTypeHasBeenSet;
}

TimerPushConfig CreateAppTriggerRequest::GetPushConfig() const
{
    return m_pushConfig;
}

void CreateAppTriggerRequest::SetPushConfig(const TimerPushConfig& _pushConfig)
{
    m_pushConfig = _pushConfig;
    m_pushConfigHasBeenSet = true;
}

bool CreateAppTriggerRequest::PushConfigHasBeenSet() const
{
    return m_pushConfigHasBeenSet;
}

TriggerConfig CreateAppTriggerRequest::GetTriggerConfig() const
{
    return m_triggerConfig;
}

void CreateAppTriggerRequest::SetTriggerConfig(const TriggerConfig& _triggerConfig)
{
    m_triggerConfig = _triggerConfig;
    m_triggerConfigHasBeenSet = true;
}

bool CreateAppTriggerRequest::TriggerConfigHasBeenSet() const
{
    return m_triggerConfigHasBeenSet;
}

string CreateAppTriggerRequest::GetTriggerName() const
{
    return m_triggerName;
}

void CreateAppTriggerRequest::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool CreateAppTriggerRequest::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

int64_t CreateAppTriggerRequest::GetTriggerType() const
{
    return m_triggerType;
}

void CreateAppTriggerRequest::SetTriggerType(const int64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool CreateAppTriggerRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}


