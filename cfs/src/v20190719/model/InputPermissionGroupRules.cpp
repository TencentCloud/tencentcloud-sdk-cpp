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

#include <tencentcloud/cfs/v20190719/model/InputPermissionGroupRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

InputPermissionGroupRules::InputPermissionGroupRules() :
    m_authClientIpHasBeenSet(false),
    m_rWPermissionHasBeenSet(false),
    m_userPermissionHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome InputPermissionGroupRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthClientIp") && !value["AuthClientIp"].IsNull())
    {
        if (!value["AuthClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputPermissionGroupRules.AuthClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authClientIp = string(value["AuthClientIp"].GetString());
        m_authClientIpHasBeenSet = true;
    }

    if (value.HasMember("RWPermission") && !value["RWPermission"].IsNull())
    {
        if (!value["RWPermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputPermissionGroupRules.RWPermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rWPermission = string(value["RWPermission"].GetString());
        m_rWPermissionHasBeenSet = true;
    }

    if (value.HasMember("UserPermission") && !value["UserPermission"].IsNull())
    {
        if (!value["UserPermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputPermissionGroupRules.UserPermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userPermission = string(value["UserPermission"].GetString());
        m_userPermissionHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputPermissionGroupRules.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputPermissionGroupRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_rWPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RWPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rWPermission.c_str(), allocator).Move(), allocator);
    }

    if (m_userPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userPermission.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

}


string InputPermissionGroupRules::GetAuthClientIp() const
{
    return m_authClientIp;
}

void InputPermissionGroupRules::SetAuthClientIp(const string& _authClientIp)
{
    m_authClientIp = _authClientIp;
    m_authClientIpHasBeenSet = true;
}

bool InputPermissionGroupRules::AuthClientIpHasBeenSet() const
{
    return m_authClientIpHasBeenSet;
}

string InputPermissionGroupRules::GetRWPermission() const
{
    return m_rWPermission;
}

void InputPermissionGroupRules::SetRWPermission(const string& _rWPermission)
{
    m_rWPermission = _rWPermission;
    m_rWPermissionHasBeenSet = true;
}

bool InputPermissionGroupRules::RWPermissionHasBeenSet() const
{
    return m_rWPermissionHasBeenSet;
}

string InputPermissionGroupRules::GetUserPermission() const
{
    return m_userPermission;
}

void InputPermissionGroupRules::SetUserPermission(const string& _userPermission)
{
    m_userPermission = _userPermission;
    m_userPermissionHasBeenSet = true;
}

bool InputPermissionGroupRules::UserPermissionHasBeenSet() const
{
    return m_userPermissionHasBeenSet;
}

uint64_t InputPermissionGroupRules::GetPriority() const
{
    return m_priority;
}

void InputPermissionGroupRules::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool InputPermissionGroupRules::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

