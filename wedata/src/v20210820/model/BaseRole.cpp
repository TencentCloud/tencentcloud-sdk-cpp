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

#include <tencentcloud/wedata/v20210820/model/BaseRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BaseRole::BaseRole() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_systemDefaultHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_memberCountHasBeenSet(false),
    m_privilegesHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_operateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createTimeStrHasBeenSet(false),
    m_updateTimeStrHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_creatorHasBeenSet(false)
{
}

CoreInternalOutcome BaseRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDefault") && !value["SystemDefault"].IsNull())
    {
        if (!value["SystemDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.SystemDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_systemDefault = value["SystemDefault"].GetBool();
        m_systemDefaultHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.Parameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameters = string(value["Parameters"].GetString());
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("MemberCount") && !value["MemberCount"].IsNull())
    {
        if (!value["MemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.MemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberCount = value["MemberCount"].GetInt64();
        m_memberCountHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaseRole.Privileges` is not array type"));

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

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.Operator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operator.Deserialize(value["Operator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("OperateTime") && !value["OperateTime"].IsNull())
    {
        if (!value["OperateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.OperateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operateTime = value["OperateTime"].GetUint64();
        m_operateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTimeStr") && !value["CreateTimeStr"].IsNull())
    {
        if (!value["CreateTimeStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.CreateTimeStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTimeStr = string(value["CreateTimeStr"].GetString());
        m_createTimeStrHasBeenSet = true;
    }

    if (value.HasMember("UpdateTimeStr") && !value["UpdateTimeStr"].IsNull())
    {
        if (!value["UpdateTimeStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.UpdateTimeStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTimeStr = string(value["UpdateTimeStr"].GetString());
        m_updateTimeStrHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseRole.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaseRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemDefault, allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_memberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberCount, allocator);
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_operateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_createTimeStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTimeStr.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTimeStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTimeStr.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

}


string BaseRole::GetRoleId() const
{
    return m_roleId;
}

void BaseRole::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool BaseRole::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string BaseRole::GetRoleName() const
{
    return m_roleName;
}

void BaseRole::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool BaseRole::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string BaseRole::GetDisplayName() const
{
    return m_displayName;
}

void BaseRole::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool BaseRole::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string BaseRole::GetDescription() const
{
    return m_description;
}

void BaseRole::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BaseRole::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string BaseRole::GetRoleType() const
{
    return m_roleType;
}

void BaseRole::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool BaseRole::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

bool BaseRole::GetSystemDefault() const
{
    return m_systemDefault;
}

void BaseRole::SetSystemDefault(const bool& _systemDefault)
{
    m_systemDefault = _systemDefault;
    m_systemDefaultHasBeenSet = true;
}

bool BaseRole::SystemDefaultHasBeenSet() const
{
    return m_systemDefaultHasBeenSet;
}

string BaseRole::GetParameters() const
{
    return m_parameters;
}

void BaseRole::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool BaseRole::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

int64_t BaseRole::GetMemberCount() const
{
    return m_memberCount;
}

void BaseRole::SetMemberCount(const int64_t& _memberCount)
{
    m_memberCount = _memberCount;
    m_memberCountHasBeenSet = true;
}

bool BaseRole::MemberCountHasBeenSet() const
{
    return m_memberCountHasBeenSet;
}

vector<RolePrivilege> BaseRole::GetPrivileges() const
{
    return m_privileges;
}

void BaseRole::SetPrivileges(const vector<RolePrivilege>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool BaseRole::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

BaseUser BaseRole::GetOperator() const
{
    return m_operator;
}

void BaseRole::SetOperator(const BaseUser& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool BaseRole::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t BaseRole::GetOperateTime() const
{
    return m_operateTime;
}

void BaseRole::SetOperateTime(const uint64_t& _operateTime)
{
    m_operateTime = _operateTime;
    m_operateTimeHasBeenSet = true;
}

bool BaseRole::OperateTimeHasBeenSet() const
{
    return m_operateTimeHasBeenSet;
}

uint64_t BaseRole::GetCreateTime() const
{
    return m_createTime;
}

void BaseRole::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BaseRole::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BaseRole::GetCreateTimeStr() const
{
    return m_createTimeStr;
}

void BaseRole::SetCreateTimeStr(const string& _createTimeStr)
{
    m_createTimeStr = _createTimeStr;
    m_createTimeStrHasBeenSet = true;
}

bool BaseRole::CreateTimeStrHasBeenSet() const
{
    return m_createTimeStrHasBeenSet;
}

string BaseRole::GetUpdateTimeStr() const
{
    return m_updateTimeStr;
}

void BaseRole::SetUpdateTimeStr(const string& _updateTimeStr)
{
    m_updateTimeStr = _updateTimeStr;
    m_updateTimeStrHasBeenSet = true;
}

bool BaseRole::UpdateTimeStrHasBeenSet() const
{
    return m_updateTimeStrHasBeenSet;
}

string BaseRole::GetProjectId() const
{
    return m_projectId;
}

void BaseRole::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BaseRole::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BaseRole::GetUpdateTime() const
{
    return m_updateTime;
}

void BaseRole::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BaseRole::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string BaseRole::GetCreator() const
{
    return m_creator;
}

void BaseRole::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool BaseRole::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

