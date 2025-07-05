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

#include <tencentcloud/gpm/v20200820/model/CreateMatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

CreateMatchRequest::CreateMatchRequest() :
    m_matchNameHasBeenSet(false),
    m_ruleCodeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_matchDescHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_serverRegionHasBeenSet(false),
    m_serverQueueHasBeenSet(false),
    m_customPushDataHasBeenSet(false),
    m_serverSessionDataHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_logSwitchHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateMatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_matchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_matchName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleCode.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serverType, allocator);
    }

    if (m_matchDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_matchDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_serverRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_serverQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_customPushDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPushData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customPushData.c_str(), allocator).Move(), allocator);
    }

    if (m_serverSessionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerSessionData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverSessionData.c_str(), allocator).Move(), allocator);
    }

    if (m_gamePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gameProperties.begin(); itr != m_gameProperties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_logSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logSwitch, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMatchRequest::GetMatchName() const
{
    return m_matchName;
}

void CreateMatchRequest::SetMatchName(const string& _matchName)
{
    m_matchName = _matchName;
    m_matchNameHasBeenSet = true;
}

bool CreateMatchRequest::MatchNameHasBeenSet() const
{
    return m_matchNameHasBeenSet;
}

string CreateMatchRequest::GetRuleCode() const
{
    return m_ruleCode;
}

void CreateMatchRequest::SetRuleCode(const string& _ruleCode)
{
    m_ruleCode = _ruleCode;
    m_ruleCodeHasBeenSet = true;
}

bool CreateMatchRequest::RuleCodeHasBeenSet() const
{
    return m_ruleCodeHasBeenSet;
}

int64_t CreateMatchRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateMatchRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateMatchRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t CreateMatchRequest::GetServerType() const
{
    return m_serverType;
}

void CreateMatchRequest::SetServerType(const int64_t& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool CreateMatchRequest::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

string CreateMatchRequest::GetMatchDesc() const
{
    return m_matchDesc;
}

void CreateMatchRequest::SetMatchDesc(const string& _matchDesc)
{
    m_matchDesc = _matchDesc;
    m_matchDescHasBeenSet = true;
}

bool CreateMatchRequest::MatchDescHasBeenSet() const
{
    return m_matchDescHasBeenSet;
}

string CreateMatchRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void CreateMatchRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool CreateMatchRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string CreateMatchRequest::GetServerRegion() const
{
    return m_serverRegion;
}

void CreateMatchRequest::SetServerRegion(const string& _serverRegion)
{
    m_serverRegion = _serverRegion;
    m_serverRegionHasBeenSet = true;
}

bool CreateMatchRequest::ServerRegionHasBeenSet() const
{
    return m_serverRegionHasBeenSet;
}

string CreateMatchRequest::GetServerQueue() const
{
    return m_serverQueue;
}

void CreateMatchRequest::SetServerQueue(const string& _serverQueue)
{
    m_serverQueue = _serverQueue;
    m_serverQueueHasBeenSet = true;
}

bool CreateMatchRequest::ServerQueueHasBeenSet() const
{
    return m_serverQueueHasBeenSet;
}

string CreateMatchRequest::GetCustomPushData() const
{
    return m_customPushData;
}

void CreateMatchRequest::SetCustomPushData(const string& _customPushData)
{
    m_customPushData = _customPushData;
    m_customPushDataHasBeenSet = true;
}

bool CreateMatchRequest::CustomPushDataHasBeenSet() const
{
    return m_customPushDataHasBeenSet;
}

string CreateMatchRequest::GetServerSessionData() const
{
    return m_serverSessionData;
}

void CreateMatchRequest::SetServerSessionData(const string& _serverSessionData)
{
    m_serverSessionData = _serverSessionData;
    m_serverSessionDataHasBeenSet = true;
}

bool CreateMatchRequest::ServerSessionDataHasBeenSet() const
{
    return m_serverSessionDataHasBeenSet;
}

vector<StringKV> CreateMatchRequest::GetGameProperties() const
{
    return m_gameProperties;
}

void CreateMatchRequest::SetGameProperties(const vector<StringKV>& _gameProperties)
{
    m_gameProperties = _gameProperties;
    m_gamePropertiesHasBeenSet = true;
}

bool CreateMatchRequest::GamePropertiesHasBeenSet() const
{
    return m_gamePropertiesHasBeenSet;
}

int64_t CreateMatchRequest::GetLogSwitch() const
{
    return m_logSwitch;
}

void CreateMatchRequest::SetLogSwitch(const int64_t& _logSwitch)
{
    m_logSwitch = _logSwitch;
    m_logSwitchHasBeenSet = true;
}

bool CreateMatchRequest::LogSwitchHasBeenSet() const
{
    return m_logSwitchHasBeenSet;
}

vector<StringKV> CreateMatchRequest::GetTags() const
{
    return m_tags;
}

void CreateMatchRequest::SetTags(const vector<StringKV>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateMatchRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


