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

#include <tencentcloud/cfs/v20190719/model/PGroupRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

PGroupRuleInfo::PGroupRuleInfo() :
    m_ruleIdHasBeenSet(false),
    m_authClientIpHasBeenSet(false),
    m_rWPermissionHasBeenSet(false),
    m_userPermissionHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome PGroupRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupRuleInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("AuthClientIp") && !value["AuthClientIp"].IsNull())
    {
        if (!value["AuthClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupRuleInfo.AuthClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authClientIp = string(value["AuthClientIp"].GetString());
        m_authClientIpHasBeenSet = true;
    }

    if (value.HasMember("RWPermission") && !value["RWPermission"].IsNull())
    {
        if (!value["RWPermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupRuleInfo.RWPermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rWPermission = string(value["RWPermission"].GetString());
        m_rWPermissionHasBeenSet = true;
    }

    if (value.HasMember("UserPermission") && !value["UserPermission"].IsNull())
    {
        if (!value["UserPermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupRuleInfo.UserPermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userPermission = string(value["UserPermission"].GetString());
        m_userPermissionHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupRuleInfo.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PGroupRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

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


string PGroupRuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void PGroupRuleInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool PGroupRuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string PGroupRuleInfo::GetAuthClientIp() const
{
    return m_authClientIp;
}

void PGroupRuleInfo::SetAuthClientIp(const string& _authClientIp)
{
    m_authClientIp = _authClientIp;
    m_authClientIpHasBeenSet = true;
}

bool PGroupRuleInfo::AuthClientIpHasBeenSet() const
{
    return m_authClientIpHasBeenSet;
}

string PGroupRuleInfo::GetRWPermission() const
{
    return m_rWPermission;
}

void PGroupRuleInfo::SetRWPermission(const string& _rWPermission)
{
    m_rWPermission = _rWPermission;
    m_rWPermissionHasBeenSet = true;
}

bool PGroupRuleInfo::RWPermissionHasBeenSet() const
{
    return m_rWPermissionHasBeenSet;
}

string PGroupRuleInfo::GetUserPermission() const
{
    return m_userPermission;
}

void PGroupRuleInfo::SetUserPermission(const string& _userPermission)
{
    m_userPermission = _userPermission;
    m_userPermissionHasBeenSet = true;
}

bool PGroupRuleInfo::UserPermissionHasBeenSet() const
{
    return m_userPermissionHasBeenSet;
}

int64_t PGroupRuleInfo::GetPriority() const
{
    return m_priority;
}

void PGroupRuleInfo::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool PGroupRuleInfo::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

