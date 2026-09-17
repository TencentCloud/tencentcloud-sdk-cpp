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

#include <tencentcloud/rce/v20260130/model/ModifyRoleEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

ModifyRoleEvent::ModifyRoleEvent() :
    m_roleNameAfterHasBeenSet(false),
    m_roleSignatureAfterHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_roleInfoHasBeenSet(false)
{
}

CoreInternalOutcome ModifyRoleEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleNameAfter") && !value["RoleNameAfter"].IsNull())
    {
        if (!value["RoleNameAfter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRoleEvent.RoleNameAfter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleNameAfter = string(value["RoleNameAfter"].GetString());
        m_roleNameAfterHasBeenSet = true;
    }

    if (value.HasMember("RoleSignatureAfter") && !value["RoleSignatureAfter"].IsNull())
    {
        if (!value["RoleSignatureAfter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRoleEvent.RoleSignatureAfter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleSignatureAfter = string(value["RoleSignatureAfter"].GetString());
        m_roleSignatureAfterHasBeenSet = true;
    }

    if (value.HasMember("ServerId") && !value["ServerId"].IsNull())
    {
        if (!value["ServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRoleEvent.ServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverId = string(value["ServerId"].GetString());
        m_serverIdHasBeenSet = true;
    }

    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRoleEvent.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("RoleInfo") && !value["RoleInfo"].IsNull())
    {
        if (!value["RoleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRoleEvent.RoleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_roleInfo.Deserialize(value["RoleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_roleInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyRoleEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleNameAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleNameAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleNameAfter.c_str(), allocator).Move(), allocator);
    }

    if (m_roleSignatureAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleSignatureAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleSignatureAfter.c_str(), allocator).Move(), allocator);
    }

    if (m_serverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverId.c_str(), allocator).Move(), allocator);
    }

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_roleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_roleInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModifyRoleEvent::GetRoleNameAfter() const
{
    return m_roleNameAfter;
}

void ModifyRoleEvent::SetRoleNameAfter(const string& _roleNameAfter)
{
    m_roleNameAfter = _roleNameAfter;
    m_roleNameAfterHasBeenSet = true;
}

bool ModifyRoleEvent::RoleNameAfterHasBeenSet() const
{
    return m_roleNameAfterHasBeenSet;
}

string ModifyRoleEvent::GetRoleSignatureAfter() const
{
    return m_roleSignatureAfter;
}

void ModifyRoleEvent::SetRoleSignatureAfter(const string& _roleSignatureAfter)
{
    m_roleSignatureAfter = _roleSignatureAfter;
    m_roleSignatureAfterHasBeenSet = true;
}

bool ModifyRoleEvent::RoleSignatureAfterHasBeenSet() const
{
    return m_roleSignatureAfterHasBeenSet;
}

string ModifyRoleEvent::GetServerId() const
{
    return m_serverId;
}

void ModifyRoleEvent::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool ModifyRoleEvent::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

User ModifyRoleEvent::GetUserInfo() const
{
    return m_userInfo;
}

void ModifyRoleEvent::SetUserInfo(const User& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool ModifyRoleEvent::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

Role ModifyRoleEvent::GetRoleInfo() const
{
    return m_roleInfo;
}

void ModifyRoleEvent::SetRoleInfo(const Role& _roleInfo)
{
    m_roleInfo = _roleInfo;
    m_roleInfoHasBeenSet = true;
}

bool ModifyRoleEvent::RoleInfoHasBeenSet() const
{
    return m_roleInfoHasBeenSet;
}

