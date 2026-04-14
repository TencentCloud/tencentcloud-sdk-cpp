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

#include <tencentcloud/tdmq/v20200217/model/RocketMQRoleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQRoleConfig::RocketMQRoleConfig() :
    m_roleNameHasBeenSet(false),
    m_roleTokenHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_permTypeHasBeenSet(false),
    m_detailedRolePermsHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQRoleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRoleConfig.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("RoleToken") && !value["RoleToken"].IsNull())
    {
        if (!value["RoleToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRoleConfig.RoleToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleToken = string(value["RoleToken"].GetString());
        m_roleTokenHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRoleConfig.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RocketMQRoleConfig.Permissions` is not array type"));

        const rapidjson::Value &tmpValue = value["Permissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissions.push_back((*itr).GetString());
        }
        m_permissionsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRoleConfig.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PermType") && !value["PermType"].IsNull())
    {
        if (!value["PermType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRoleConfig.PermType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permType = string(value["PermType"].GetString());
        m_permTypeHasBeenSet = true;
    }

    if (value.HasMember("DetailedRolePerms") && !value["DetailedRolePerms"].IsNull())
    {
        if (!value["DetailedRolePerms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RocketMQRoleConfig.DetailedRolePerms` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailedRolePerms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailedRolePerm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailedRolePerms.push_back(item);
        }
        m_detailedRolePermsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQRoleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleToken.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_permTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permType.c_str(), allocator).Move(), allocator);
    }

    if (m_detailedRolePermsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailedRolePerms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailedRolePerms.begin(); itr != m_detailedRolePerms.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RocketMQRoleConfig::GetRoleName() const
{
    return m_roleName;
}

void RocketMQRoleConfig::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RocketMQRoleConfig::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string RocketMQRoleConfig::GetRoleToken() const
{
    return m_roleToken;
}

void RocketMQRoleConfig::SetRoleToken(const string& _roleToken)
{
    m_roleToken = _roleToken;
    m_roleTokenHasBeenSet = true;
}

bool RocketMQRoleConfig::RoleTokenHasBeenSet() const
{
    return m_roleTokenHasBeenSet;
}

string RocketMQRoleConfig::GetEnvironmentId() const
{
    return m_environmentId;
}

void RocketMQRoleConfig::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool RocketMQRoleConfig::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

vector<string> RocketMQRoleConfig::GetPermissions() const
{
    return m_permissions;
}

void RocketMQRoleConfig::SetPermissions(const vector<string>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool RocketMQRoleConfig::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

string RocketMQRoleConfig::GetRemark() const
{
    return m_remark;
}

void RocketMQRoleConfig::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQRoleConfig::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RocketMQRoleConfig::GetPermType() const
{
    return m_permType;
}

void RocketMQRoleConfig::SetPermType(const string& _permType)
{
    m_permType = _permType;
    m_permTypeHasBeenSet = true;
}

bool RocketMQRoleConfig::PermTypeHasBeenSet() const
{
    return m_permTypeHasBeenSet;
}

vector<DetailedRolePerm> RocketMQRoleConfig::GetDetailedRolePerms() const
{
    return m_detailedRolePerms;
}

void RocketMQRoleConfig::SetDetailedRolePerms(const vector<DetailedRolePerm>& _detailedRolePerms)
{
    m_detailedRolePerms = _detailedRolePerms;
    m_detailedRolePermsHasBeenSet = true;
}

bool RocketMQRoleConfig::DetailedRolePermsHasBeenSet() const
{
    return m_detailedRolePermsHasBeenSet;
}

