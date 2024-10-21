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

#include <tencentcloud/wedata/v20210820/model/RolePrivilege.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RolePrivilege::RolePrivilege() :
    m_privilegeIdHasBeenSet(false),
    m_privilegeNameHasBeenSet(false),
    m_restPathHasBeenSet(false),
    m_restMethodHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_moduleIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome RolePrivilege::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivilegeId") && !value["PrivilegeId"].IsNull())
    {
        if (!value["PrivilegeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePrivilege.PrivilegeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeId = string(value["PrivilegeId"].GetString());
        m_privilegeIdHasBeenSet = true;
    }

    if (value.HasMember("PrivilegeName") && !value["PrivilegeName"].IsNull())
    {
        if (!value["PrivilegeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePrivilege.PrivilegeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeName = string(value["PrivilegeName"].GetString());
        m_privilegeNameHasBeenSet = true;
    }

    if (value.HasMember("RestPath") && !value["RestPath"].IsNull())
    {
        if (!value["RestPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePrivilege.RestPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restPath = string(value["RestPath"].GetString());
        m_restPathHasBeenSet = true;
    }

    if (value.HasMember("RestMethod") && !value["RestMethod"].IsNull())
    {
        if (!value["RestMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePrivilege.RestMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restMethod = string(value["RestMethod"].GetString());
        m_restMethodHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePrivilege.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ModuleId") && !value["ModuleId"].IsNull())
    {
        if (!value["ModuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePrivilege.ModuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleId = string(value["ModuleId"].GetString());
        m_moduleIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePrivilege.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RolePrivilege::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privilegeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privilegeId.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privilegeName.c_str(), allocator).Move(), allocator);
    }

    if (m_restPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restPath.c_str(), allocator).Move(), allocator);
    }

    if (m_restMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string RolePrivilege::GetPrivilegeId() const
{
    return m_privilegeId;
}

void RolePrivilege::SetPrivilegeId(const string& _privilegeId)
{
    m_privilegeId = _privilegeId;
    m_privilegeIdHasBeenSet = true;
}

bool RolePrivilege::PrivilegeIdHasBeenSet() const
{
    return m_privilegeIdHasBeenSet;
}

string RolePrivilege::GetPrivilegeName() const
{
    return m_privilegeName;
}

void RolePrivilege::SetPrivilegeName(const string& _privilegeName)
{
    m_privilegeName = _privilegeName;
    m_privilegeNameHasBeenSet = true;
}

bool RolePrivilege::PrivilegeNameHasBeenSet() const
{
    return m_privilegeNameHasBeenSet;
}

string RolePrivilege::GetRestPath() const
{
    return m_restPath;
}

void RolePrivilege::SetRestPath(const string& _restPath)
{
    m_restPath = _restPath;
    m_restPathHasBeenSet = true;
}

bool RolePrivilege::RestPathHasBeenSet() const
{
    return m_restPathHasBeenSet;
}

string RolePrivilege::GetRestMethod() const
{
    return m_restMethod;
}

void RolePrivilege::SetRestMethod(const string& _restMethod)
{
    m_restMethod = _restMethod;
    m_restMethodHasBeenSet = true;
}

bool RolePrivilege::RestMethodHasBeenSet() const
{
    return m_restMethodHasBeenSet;
}

string RolePrivilege::GetDescription() const
{
    return m_description;
}

void RolePrivilege::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RolePrivilege::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RolePrivilege::GetModuleId() const
{
    return m_moduleId;
}

void RolePrivilege::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool RolePrivilege::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string RolePrivilege::GetType() const
{
    return m_type;
}

void RolePrivilege::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RolePrivilege::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

