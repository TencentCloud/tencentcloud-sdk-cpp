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

#include <tencentcloud/ess/v20201111/model/CreateUserAutoSignEnableUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateUserAutoSignEnableUrlRequest::CreateUserAutoSignEnableUrlRequest() :
    m_operatorHasBeenSet(false),
    m_sceneKeyHasBeenSet(false),
    m_autoSignConfigHasBeenSet(false),
    m_urlTypeHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_notifyAddressHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
}

string CreateUserAutoSignEnableUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sceneKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneKey.c_str(), allocator).Move(), allocator);
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

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
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


UserInfo CreateUserAutoSignEnableUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateUserAutoSignEnableUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateUserAutoSignEnableUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateUserAutoSignEnableUrlRequest::GetSceneKey() const
{
    return m_sceneKey;
}

void CreateUserAutoSignEnableUrlRequest::SetSceneKey(const string& _sceneKey)
{
    m_sceneKey = _sceneKey;
    m_sceneKeyHasBeenSet = true;
}

bool CreateUserAutoSignEnableUrlRequest::SceneKeyHasBeenSet() const
{
    return m_sceneKeyHasBeenSet;
}

AutoSignConfig CreateUserAutoSignEnableUrlRequest::GetAutoSignConfig() const
{
    return m_autoSignConfig;
}

void CreateUserAutoSignEnableUrlRequest::SetAutoSignConfig(const AutoSignConfig& _autoSignConfig)
{
    m_autoSignConfig = _autoSignConfig;
    m_autoSignConfigHasBeenSet = true;
}

bool CreateUserAutoSignEnableUrlRequest::AutoSignConfigHasBeenSet() const
{
    return m_autoSignConfigHasBeenSet;
}

string CreateUserAutoSignEnableUrlRequest::GetUrlType() const
{
    return m_urlType;
}

void CreateUserAutoSignEnableUrlRequest::SetUrlType(const string& _urlType)
{
    m_urlType = _urlType;
    m_urlTypeHasBeenSet = true;
}

bool CreateUserAutoSignEnableUrlRequest::UrlTypeHasBeenSet() const
{
    return m_urlTypeHasBeenSet;
}

string CreateUserAutoSignEnableUrlRequest::GetNotifyType() const
{
    return m_notifyType;
}

void CreateUserAutoSignEnableUrlRequest::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool CreateUserAutoSignEnableUrlRequest::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

string CreateUserAutoSignEnableUrlRequest::GetNotifyAddress() const
{
    return m_notifyAddress;
}

void CreateUserAutoSignEnableUrlRequest::SetNotifyAddress(const string& _notifyAddress)
{
    m_notifyAddress = _notifyAddress;
    m_notifyAddressHasBeenSet = true;
}

bool CreateUserAutoSignEnableUrlRequest::NotifyAddressHasBeenSet() const
{
    return m_notifyAddressHasBeenSet;
}

int64_t CreateUserAutoSignEnableUrlRequest::GetExpiredTime() const
{
    return m_expiredTime;
}

void CreateUserAutoSignEnableUrlRequest::SetExpiredTime(const int64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool CreateUserAutoSignEnableUrlRequest::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

Agent CreateUserAutoSignEnableUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateUserAutoSignEnableUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateUserAutoSignEnableUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateUserAutoSignEnableUrlRequest::GetUserData() const
{
    return m_userData;
}

void CreateUserAutoSignEnableUrlRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateUserAutoSignEnableUrlRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}


