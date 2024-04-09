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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserAutoSignEnableUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateUserAutoSignEnableUrlRequest::ChannelCreateUserAutoSignEnableUrlRequest() :
    m_agentHasBeenSet(false),
    m_sceneKeyHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_autoSignConfigHasBeenSet(false),
    m_urlTypeHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_notifyAddressHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
}

string ChannelCreateUserAutoSignEnableUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sceneKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneKey.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoSignConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoSignConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_urlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_urlType.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateUserAutoSignEnableUrlRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateUserAutoSignEnableUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateUserAutoSignEnableUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlRequest::GetSceneKey() const
{
    return m_sceneKey;
}

void ChannelCreateUserAutoSignEnableUrlRequest::SetSceneKey(const string& _sceneKey)
{
    m_sceneKey = _sceneKey;
    m_sceneKeyHasBeenSet = true;
}

bool ChannelCreateUserAutoSignEnableUrlRequest::SceneKeyHasBeenSet() const
{
    return m_sceneKeyHasBeenSet;
}

UserInfo ChannelCreateUserAutoSignEnableUrlRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateUserAutoSignEnableUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateUserAutoSignEnableUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

AutoSignConfig ChannelCreateUserAutoSignEnableUrlRequest::GetAutoSignConfig() const
{
    return m_autoSignConfig;
}

void ChannelCreateUserAutoSignEnableUrlRequest::SetAutoSignConfig(const AutoSignConfig& _autoSignConfig)
{
    m_autoSignConfig = _autoSignConfig;
    m_autoSignConfigHasBeenSet = true;
}

bool ChannelCreateUserAutoSignEnableUrlRequest::AutoSignConfigHasBeenSet() const
{
    return m_autoSignConfigHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlRequest::GetUrlType() const
{
    return m_urlType;
}

void ChannelCreateUserAutoSignEnableUrlRequest::SetUrlType(const string& _urlType)
{
    m_urlType = _urlType;
    m_urlTypeHasBeenSet = true;
}

bool ChannelCreateUserAutoSignEnableUrlRequest::UrlTypeHasBeenSet() const
{
    return m_urlTypeHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlRequest::GetNotifyType() const
{
    return m_notifyType;
}

void ChannelCreateUserAutoSignEnableUrlRequest::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool ChannelCreateUserAutoSignEnableUrlRequest::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlRequest::GetNotifyAddress() const
{
    return m_notifyAddress;
}

void ChannelCreateUserAutoSignEnableUrlRequest::SetNotifyAddress(const string& _notifyAddress)
{
    m_notifyAddress = _notifyAddress;
    m_notifyAddressHasBeenSet = true;
}

bool ChannelCreateUserAutoSignEnableUrlRequest::NotifyAddressHasBeenSet() const
{
    return m_notifyAddressHasBeenSet;
}

int64_t ChannelCreateUserAutoSignEnableUrlRequest::GetExpiredTime() const
{
    return m_expiredTime;
}

void ChannelCreateUserAutoSignEnableUrlRequest::SetExpiredTime(const int64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool ChannelCreateUserAutoSignEnableUrlRequest::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string ChannelCreateUserAutoSignEnableUrlRequest::GetUserData() const
{
    return m_userData;
}

void ChannelCreateUserAutoSignEnableUrlRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool ChannelCreateUserAutoSignEnableUrlRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}


