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

#include <tencentcloud/es/v20180416/model/ServerlessSpaceUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ServerlessSpaceUser::ServerlessSpaceUser() :
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_indicesScopeHasBeenSet(false),
    m_privilegeTypeHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessSpaceUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpaceUser.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpaceUser.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpaceUser.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpaceUser.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IndicesScope") && !value["IndicesScope"].IsNull())
    {
        if (!value["IndicesScope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerlessSpaceUser.IndicesScope` is not array type"));

        const rapidjson::Value &tmpValue = value["IndicesScope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_indicesScope.push_back((*itr).GetString());
        }
        m_indicesScopeHasBeenSet = true;
    }

    if (value.HasMember("PrivilegeType") && !value["PrivilegeType"].IsNull())
    {
        if (!value["PrivilegeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpaceUser.PrivilegeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeType = value["PrivilegeType"].GetInt64();
        m_privilegeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessSpaceUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_indicesScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicesScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indicesScope.begin(); itr != m_indicesScope.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privilegeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privilegeType, allocator);
    }

}


string ServerlessSpaceUser::GetUsername() const
{
    return m_username;
}

void ServerlessSpaceUser::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ServerlessSpaceUser::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ServerlessSpaceUser::GetPassword() const
{
    return m_password;
}

void ServerlessSpaceUser::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ServerlessSpaceUser::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string ServerlessSpaceUser::GetCreateTime() const
{
    return m_createTime;
}

void ServerlessSpaceUser::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServerlessSpaceUser::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ServerlessSpaceUser::GetStatus() const
{
    return m_status;
}

void ServerlessSpaceUser::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServerlessSpaceUser::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ServerlessSpaceUser::GetIndicesScope() const
{
    return m_indicesScope;
}

void ServerlessSpaceUser::SetIndicesScope(const vector<string>& _indicesScope)
{
    m_indicesScope = _indicesScope;
    m_indicesScopeHasBeenSet = true;
}

bool ServerlessSpaceUser::IndicesScopeHasBeenSet() const
{
    return m_indicesScopeHasBeenSet;
}

int64_t ServerlessSpaceUser::GetPrivilegeType() const
{
    return m_privilegeType;
}

void ServerlessSpaceUser::SetPrivilegeType(const int64_t& _privilegeType)
{
    m_privilegeType = _privilegeType;
    m_privilegeTypeHasBeenSet = true;
}

bool ServerlessSpaceUser::PrivilegeTypeHasBeenSet() const
{
    return m_privilegeTypeHasBeenSet;
}

