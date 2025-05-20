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

#include <tencentcloud/lke/v20231130/model/GetMsgRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetMsgRecordRequest::GetMsgRecordRequest() :
    m_typeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_botAppKeyHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_lastRecordIdHasBeenSet(false),
    m_midRecordIdHasBeenSet(false)
{
}

string GetMsgRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_botAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotAppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scene, allocator);
    }

    if (m_lastRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_midRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midRecordId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetMsgRecordRequest::GetType() const
{
    return m_type;
}

void GetMsgRecordRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GetMsgRecordRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t GetMsgRecordRequest::GetCount() const
{
    return m_count;
}

void GetMsgRecordRequest::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool GetMsgRecordRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string GetMsgRecordRequest::GetSessionId() const
{
    return m_sessionId;
}

void GetMsgRecordRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool GetMsgRecordRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string GetMsgRecordRequest::GetBotAppKey() const
{
    return m_botAppKey;
}

void GetMsgRecordRequest::SetBotAppKey(const string& _botAppKey)
{
    m_botAppKey = _botAppKey;
    m_botAppKeyHasBeenSet = true;
}

bool GetMsgRecordRequest::BotAppKeyHasBeenSet() const
{
    return m_botAppKeyHasBeenSet;
}

uint64_t GetMsgRecordRequest::GetScene() const
{
    return m_scene;
}

void GetMsgRecordRequest::SetScene(const uint64_t& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool GetMsgRecordRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string GetMsgRecordRequest::GetLastRecordId() const
{
    return m_lastRecordId;
}

void GetMsgRecordRequest::SetLastRecordId(const string& _lastRecordId)
{
    m_lastRecordId = _lastRecordId;
    m_lastRecordIdHasBeenSet = true;
}

bool GetMsgRecordRequest::LastRecordIdHasBeenSet() const
{
    return m_lastRecordIdHasBeenSet;
}

string GetMsgRecordRequest::GetMidRecordId() const
{
    return m_midRecordId;
}

void GetMsgRecordRequest::SetMidRecordId(const string& _midRecordId)
{
    m_midRecordId = _midRecordId;
    m_midRecordIdHasBeenSet = true;
}

bool GetMsgRecordRequest::MidRecordIdHasBeenSet() const
{
    return m_midRecordIdHasBeenSet;
}


