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

#include <tencentcloud/essbasic/v20210526/model/ChannelRenewAutoSignLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelRenewAutoSignLicenseRequest::ChannelRenewAutoSignLicenseRequest() :
    m_agentHasBeenSet(false),
    m_sceneKeyHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ChannelRenewAutoSignLicenseRequest::ToJsonString() const
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

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelRenewAutoSignLicenseRequest::GetAgent() const
{
    return m_agent;
}

void ChannelRenewAutoSignLicenseRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelRenewAutoSignLicenseRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelRenewAutoSignLicenseRequest::GetSceneKey() const
{
    return m_sceneKey;
}

void ChannelRenewAutoSignLicenseRequest::SetSceneKey(const string& _sceneKey)
{
    m_sceneKey = _sceneKey;
    m_sceneKeyHasBeenSet = true;
}

bool ChannelRenewAutoSignLicenseRequest::SceneKeyHasBeenSet() const
{
    return m_sceneKeyHasBeenSet;
}

UserThreeFactor ChannelRenewAutoSignLicenseRequest::GetUserInfo() const
{
    return m_userInfo;
}

void ChannelRenewAutoSignLicenseRequest::SetUserInfo(const UserThreeFactor& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool ChannelRenewAutoSignLicenseRequest::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

UserInfo ChannelRenewAutoSignLicenseRequest::GetOperator() const
{
    return m_operator;
}

void ChannelRenewAutoSignLicenseRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelRenewAutoSignLicenseRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


