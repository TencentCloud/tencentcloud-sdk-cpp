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

#include <tencentcloud/ess/v20201111/model/DisableUserAutoSignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DisableUserAutoSignRequest::DisableUserAutoSignRequest() :
    m_operatorHasBeenSet(false),
    m_sceneKeyHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string DisableUserAutoSignRequest::ToJsonString() const
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

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo DisableUserAutoSignRequest::GetOperator() const
{
    return m_operator;
}

void DisableUserAutoSignRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DisableUserAutoSignRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DisableUserAutoSignRequest::GetSceneKey() const
{
    return m_sceneKey;
}

void DisableUserAutoSignRequest::SetSceneKey(const string& _sceneKey)
{
    m_sceneKey = _sceneKey;
    m_sceneKeyHasBeenSet = true;
}

bool DisableUserAutoSignRequest::SceneKeyHasBeenSet() const
{
    return m_sceneKeyHasBeenSet;
}

UserThreeFactor DisableUserAutoSignRequest::GetUserInfo() const
{
    return m_userInfo;
}

void DisableUserAutoSignRequest::SetUserInfo(const UserThreeFactor& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool DisableUserAutoSignRequest::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

Agent DisableUserAutoSignRequest::GetAgent() const
{
    return m_agent;
}

void DisableUserAutoSignRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DisableUserAutoSignRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


