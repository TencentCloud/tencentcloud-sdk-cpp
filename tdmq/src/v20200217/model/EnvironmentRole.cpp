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

#include <tencentcloud/tdmq/v20200217/model/EnvironmentRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

EnvironmentRole::EnvironmentRole() :
    m_environmentIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_roleDescribeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome EnvironmentRole::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvironmentRole.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvironmentRole.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsArray())
            return CoreInternalOutcome(Error("response `EnvironmentRole.Permissions` is not array type"));

        const Value &tmpValue = value["Permissions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissions.push_back((*itr).GetString());
        }
        m_permissionsHasBeenSet = true;
    }

    if (value.HasMember("RoleDescribe") && !value["RoleDescribe"].IsNull())
    {
        if (!value["RoleDescribe"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvironmentRole.RoleDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleDescribe = string(value["RoleDescribe"].GetString());
        m_roleDescribeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvironmentRole.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvironmentRole.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvironmentRole::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_environmentIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roleDescribeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoleDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roleDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string EnvironmentRole::GetEnvironmentId() const
{
    return m_environmentId;
}

void EnvironmentRole::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool EnvironmentRole::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string EnvironmentRole::GetRoleName() const
{
    return m_roleName;
}

void EnvironmentRole::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool EnvironmentRole::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

vector<string> EnvironmentRole::GetPermissions() const
{
    return m_permissions;
}

void EnvironmentRole::SetPermissions(const vector<string>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool EnvironmentRole::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

string EnvironmentRole::GetRoleDescribe() const
{
    return m_roleDescribe;
}

void EnvironmentRole::SetRoleDescribe(const string& _roleDescribe)
{
    m_roleDescribe = _roleDescribe;
    m_roleDescribeHasBeenSet = true;
}

bool EnvironmentRole::RoleDescribeHasBeenSet() const
{
    return m_roleDescribeHasBeenSet;
}

string EnvironmentRole::GetCreateTime() const
{
    return m_createTime;
}

void EnvironmentRole::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EnvironmentRole::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EnvironmentRole::GetUpdateTime() const
{
    return m_updateTime;
}

void EnvironmentRole::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool EnvironmentRole::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

