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

#include <tencentcloud/organization/v20210331/model/OrgMemberAuthIdentity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

OrgMemberAuthIdentity::OrgMemberAuthIdentity() :
    m_identityIdHasBeenSet(false),
    m_identityRoleNameHasBeenSet(false),
    m_identityRoleAliasNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome OrgMemberAuthIdentity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdentityId") && !value["IdentityId"].IsNull())
    {
        if (!value["IdentityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthIdentity.IdentityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identityId = value["IdentityId"].GetInt64();
        m_identityIdHasBeenSet = true;
    }

    if (value.HasMember("IdentityRoleName") && !value["IdentityRoleName"].IsNull())
    {
        if (!value["IdentityRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthIdentity.IdentityRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityRoleName = string(value["IdentityRoleName"].GetString());
        m_identityRoleNameHasBeenSet = true;
    }

    if (value.HasMember("IdentityRoleAliasName") && !value["IdentityRoleAliasName"].IsNull())
    {
        if (!value["IdentityRoleAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthIdentity.IdentityRoleAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityRoleAliasName = string(value["IdentityRoleAliasName"].GetString());
        m_identityRoleAliasNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthIdentity.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthIdentity.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthIdentity.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgMemberAuthIdentity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identityId, allocator);
    }

    if (m_identityRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_identityRoleAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityRoleAliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityRoleAliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t OrgMemberAuthIdentity::GetIdentityId() const
{
    return m_identityId;
}

void OrgMemberAuthIdentity::SetIdentityId(const int64_t& _identityId)
{
    m_identityId = _identityId;
    m_identityIdHasBeenSet = true;
}

bool OrgMemberAuthIdentity::IdentityIdHasBeenSet() const
{
    return m_identityIdHasBeenSet;
}

string OrgMemberAuthIdentity::GetIdentityRoleName() const
{
    return m_identityRoleName;
}

void OrgMemberAuthIdentity::SetIdentityRoleName(const string& _identityRoleName)
{
    m_identityRoleName = _identityRoleName;
    m_identityRoleNameHasBeenSet = true;
}

bool OrgMemberAuthIdentity::IdentityRoleNameHasBeenSet() const
{
    return m_identityRoleNameHasBeenSet;
}

string OrgMemberAuthIdentity::GetIdentityRoleAliasName() const
{
    return m_identityRoleAliasName;
}

void OrgMemberAuthIdentity::SetIdentityRoleAliasName(const string& _identityRoleAliasName)
{
    m_identityRoleAliasName = _identityRoleAliasName;
    m_identityRoleAliasNameHasBeenSet = true;
}

bool OrgMemberAuthIdentity::IdentityRoleAliasNameHasBeenSet() const
{
    return m_identityRoleAliasNameHasBeenSet;
}

string OrgMemberAuthIdentity::GetDescription() const
{
    return m_description;
}

void OrgMemberAuthIdentity::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool OrgMemberAuthIdentity::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string OrgMemberAuthIdentity::GetCreateTime() const
{
    return m_createTime;
}

void OrgMemberAuthIdentity::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OrgMemberAuthIdentity::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OrgMemberAuthIdentity::GetUpdateTime() const
{
    return m_updateTime;
}

void OrgMemberAuthIdentity::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OrgMemberAuthIdentity::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

