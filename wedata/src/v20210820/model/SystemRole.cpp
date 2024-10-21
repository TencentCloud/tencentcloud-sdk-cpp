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

#include <tencentcloud/wedata/v20210820/model/SystemRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SystemRole::SystemRole() :
    m_roleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nameCnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_privilegesHasBeenSet(false),
    m_methodPathsHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_systemInitHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

CoreInternalOutcome SystemRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemRole.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemRole.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NameCn") && !value["NameCn"].IsNull())
    {
        if (!value["NameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemRole.NameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameCn = string(value["NameCn"].GetString());
        m_nameCnHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemRole.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemRole.Privileges` is not array type"));

        const rapidjson::Value &tmpValue = value["Privileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RolePrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privileges.push_back(item);
        }
        m_privilegesHasBeenSet = true;
    }

    if (value.HasMember("MethodPaths") && !value["MethodPaths"].IsNull())
    {
        if (!value["MethodPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemRole.MethodPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["MethodPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_methodPaths.push_back((*itr).GetString());
        }
        m_methodPathsHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemRole.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemInit") && !value["SystemInit"].IsNull())
    {
        if (!value["SystemInit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SystemRole.SystemInit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_systemInit = value["SystemInit"].GetBool();
        m_systemInitHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemRole.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SystemRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privileges.begin(); itr != m_privileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_methodPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MethodPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_methodPaths.begin(); itr != m_methodPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemInitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemInit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemInit, allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

}


string SystemRole::GetRoleId() const
{
    return m_roleId;
}

void SystemRole::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool SystemRole::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string SystemRole::GetName() const
{
    return m_name;
}

void SystemRole::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SystemRole::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SystemRole::GetNameCn() const
{
    return m_nameCn;
}

void SystemRole::SetNameCn(const string& _nameCn)
{
    m_nameCn = _nameCn;
    m_nameCnHasBeenSet = true;
}

bool SystemRole::NameCnHasBeenSet() const
{
    return m_nameCnHasBeenSet;
}

string SystemRole::GetDescription() const
{
    return m_description;
}

void SystemRole::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SystemRole::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<RolePrivilege> SystemRole::GetPrivileges() const
{
    return m_privileges;
}

void SystemRole::SetPrivileges(const vector<RolePrivilege>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool SystemRole::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

vector<string> SystemRole::GetMethodPaths() const
{
    return m_methodPaths;
}

void SystemRole::SetMethodPaths(const vector<string>& _methodPaths)
{
    m_methodPaths = _methodPaths;
    m_methodPathsHasBeenSet = true;
}

bool SystemRole::MethodPathsHasBeenSet() const
{
    return m_methodPathsHasBeenSet;
}

string SystemRole::GetRoleType() const
{
    return m_roleType;
}

void SystemRole::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool SystemRole::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

bool SystemRole::GetSystemInit() const
{
    return m_systemInit;
}

void SystemRole::SetSystemInit(const bool& _systemInit)
{
    m_systemInit = _systemInit;
    m_systemInitHasBeenSet = true;
}

bool SystemRole::SystemInitHasBeenSet() const
{
    return m_systemInitHasBeenSet;
}

string SystemRole::GetParams() const
{
    return m_params;
}

void SystemRole::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool SystemRole::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

