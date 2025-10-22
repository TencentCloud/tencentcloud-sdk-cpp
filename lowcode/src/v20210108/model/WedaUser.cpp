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

#include <tencentcloud/lowcode/v20210108/model/WedaUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

WedaUser::WedaUser() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_envHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_relatedRolesHasBeenSet(false),
    m_wechatUserIdHasBeenSet(false),
    m_internalUserTypeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_orgNameHasBeenSet(false),
    m_userSchemaHasBeenSet(false),
    m_userExtendHasBeenSet(false),
    m_isLicensedHasBeenSet(false),
    m_relatedRoleGroupsHasBeenSet(false),
    m_orgsHasBeenSet(false),
    m_mainOrgHasBeenSet(false),
    m_parentUserIdHasBeenSet(false),
    m_primaryColumnHasBeenSet(false),
    m_avatarUrlHasBeenSet(false),
    m_lastLoginTimeHasBeenSet(false)
{
}

CoreInternalOutcome WedaUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.Env` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_env = value["Env"].GetInt64();
        m_envHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("RelatedRoles") && !value["RelatedRoles"].IsNull())
    {
        if (!value["RelatedRoles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WedaUser.RelatedRoles` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedRoles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WedaRole item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedRoles.push_back(item);
        }
        m_relatedRolesHasBeenSet = true;
    }

    if (value.HasMember("WechatUserId") && !value["WechatUserId"].IsNull())
    {
        if (!value["WechatUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.WechatUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatUserId = string(value["WechatUserId"].GetString());
        m_wechatUserIdHasBeenSet = true;
    }

    if (value.HasMember("InternalUserType") && !value["InternalUserType"].IsNull())
    {
        if (!value["InternalUserType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.InternalUserType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internalUserType = value["InternalUserType"].GetInt64();
        m_internalUserTypeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.UserId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetInt64();
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("OrgName") && !value["OrgName"].IsNull())
    {
        if (!value["OrgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.OrgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgName = string(value["OrgName"].GetString());
        m_orgNameHasBeenSet = true;
    }

    if (value.HasMember("UserSchema") && !value["UserSchema"].IsNull())
    {
        if (!value["UserSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.UserSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSchema = string(value["UserSchema"].GetString());
        m_userSchemaHasBeenSet = true;
    }

    if (value.HasMember("UserExtend") && !value["UserExtend"].IsNull())
    {
        if (!value["UserExtend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.UserExtend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userExtend = string(value["UserExtend"].GetString());
        m_userExtendHasBeenSet = true;
    }

    if (value.HasMember("IsLicensed") && !value["IsLicensed"].IsNull())
    {
        if (!value["IsLicensed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.IsLicensed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLicensed = value["IsLicensed"].GetBool();
        m_isLicensedHasBeenSet = true;
    }

    if (value.HasMember("RelatedRoleGroups") && !value["RelatedRoleGroups"].IsNull())
    {
        if (!value["RelatedRoleGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WedaUser.RelatedRoleGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedRoleGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoleGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedRoleGroups.push_back(item);
        }
        m_relatedRoleGroupsHasBeenSet = true;
    }

    if (value.HasMember("Orgs") && !value["Orgs"].IsNull())
    {
        if (!value["Orgs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WedaUser.Orgs` is not array type"));

        const rapidjson::Value &tmpValue = value["Orgs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrgResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_orgs.push_back(item);
        }
        m_orgsHasBeenSet = true;
    }

    if (value.HasMember("MainOrg") && !value["MainOrg"].IsNull())
    {
        if (!value["MainOrg"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WedaUser.MainOrg` is not array type"));

        const rapidjson::Value &tmpValue = value["MainOrg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrgResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mainOrg.push_back(item);
        }
        m_mainOrgHasBeenSet = true;
    }

    if (value.HasMember("ParentUserId") && !value["ParentUserId"].IsNull())
    {
        if (!value["ParentUserId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.ParentUserId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentUserId = value["ParentUserId"].GetInt64();
        m_parentUserIdHasBeenSet = true;
    }

    if (value.HasMember("PrimaryColumn") && !value["PrimaryColumn"].IsNull())
    {
        if (!value["PrimaryColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.PrimaryColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryColumn = string(value["PrimaryColumn"].GetString());
        m_primaryColumnHasBeenSet = true;
    }

    if (value.HasMember("AvatarUrl") && !value["AvatarUrl"].IsNull())
    {
        if (!value["AvatarUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.AvatarUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatarUrl = string(value["AvatarUrl"].GetString());
        m_avatarUrlHasBeenSet = true;
    }

    if (value.HasMember("LastLoginTime") && !value["LastLoginTime"].IsNull())
    {
        if (!value["LastLoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WedaUser.LastLoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginTime = string(value["LastLoginTime"].GetString());
        m_lastLoginTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WedaUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_env, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedRolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedRoles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedRoles.begin(); itr != m_relatedRoles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_wechatUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_internalUserTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalUserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internalUserType, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

    if (m_orgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgName.c_str(), allocator).Move(), allocator);
    }

    if (m_userSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_userExtendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserExtend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userExtend.c_str(), allocator).Move(), allocator);
    }

    if (m_isLicensedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLicensed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLicensed, allocator);
    }

    if (m_relatedRoleGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedRoleGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedRoleGroups.begin(); itr != m_relatedRoleGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_orgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Orgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orgs.begin(); itr != m_orgs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mainOrgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainOrg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mainOrg.begin(); itr != m_mainOrg.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_parentUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentUserId, allocator);
    }

    if (m_primaryColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryColumn.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatarUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t WedaUser::GetUin() const
{
    return m_uin;
}

void WedaUser::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool WedaUser::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string WedaUser::GetName() const
{
    return m_name;
}

void WedaUser::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WedaUser::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t WedaUser::GetEnv() const
{
    return m_env;
}

void WedaUser::SetEnv(const int64_t& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool WedaUser::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

int64_t WedaUser::GetType() const
{
    return m_type;
}

void WedaUser::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WedaUser::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string WedaUser::GetNickName() const
{
    return m_nickName;
}

void WedaUser::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool WedaUser::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string WedaUser::GetEmail() const
{
    return m_email;
}

void WedaUser::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool WedaUser::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string WedaUser::GetPhone() const
{
    return m_phone;
}

void WedaUser::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool WedaUser::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

int64_t WedaUser::GetProjectId() const
{
    return m_projectId;
}

void WedaUser::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool WedaUser::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string WedaUser::GetUuid() const
{
    return m_uuid;
}

void WedaUser::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool WedaUser::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

int64_t WedaUser::GetSource() const
{
    return m_source;
}

void WedaUser::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool WedaUser::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string WedaUser::GetOpenId() const
{
    return m_openId;
}

void WedaUser::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool WedaUser::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

vector<WedaRole> WedaUser::GetRelatedRoles() const
{
    return m_relatedRoles;
}

void WedaUser::SetRelatedRoles(const vector<WedaRole>& _relatedRoles)
{
    m_relatedRoles = _relatedRoles;
    m_relatedRolesHasBeenSet = true;
}

bool WedaUser::RelatedRolesHasBeenSet() const
{
    return m_relatedRolesHasBeenSet;
}

string WedaUser::GetWechatUserId() const
{
    return m_wechatUserId;
}

void WedaUser::SetWechatUserId(const string& _wechatUserId)
{
    m_wechatUserId = _wechatUserId;
    m_wechatUserIdHasBeenSet = true;
}

bool WedaUser::WechatUserIdHasBeenSet() const
{
    return m_wechatUserIdHasBeenSet;
}

int64_t WedaUser::GetInternalUserType() const
{
    return m_internalUserType;
}

void WedaUser::SetInternalUserType(const int64_t& _internalUserType)
{
    m_internalUserType = _internalUserType;
    m_internalUserTypeHasBeenSet = true;
}

bool WedaUser::InternalUserTypeHasBeenSet() const
{
    return m_internalUserTypeHasBeenSet;
}

int64_t WedaUser::GetUserId() const
{
    return m_userId;
}

void WedaUser::SetUserId(const int64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool WedaUser::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string WedaUser::GetOrgName() const
{
    return m_orgName;
}

void WedaUser::SetOrgName(const string& _orgName)
{
    m_orgName = _orgName;
    m_orgNameHasBeenSet = true;
}

bool WedaUser::OrgNameHasBeenSet() const
{
    return m_orgNameHasBeenSet;
}

string WedaUser::GetUserSchema() const
{
    return m_userSchema;
}

void WedaUser::SetUserSchema(const string& _userSchema)
{
    m_userSchema = _userSchema;
    m_userSchemaHasBeenSet = true;
}

bool WedaUser::UserSchemaHasBeenSet() const
{
    return m_userSchemaHasBeenSet;
}

string WedaUser::GetUserExtend() const
{
    return m_userExtend;
}

void WedaUser::SetUserExtend(const string& _userExtend)
{
    m_userExtend = _userExtend;
    m_userExtendHasBeenSet = true;
}

bool WedaUser::UserExtendHasBeenSet() const
{
    return m_userExtendHasBeenSet;
}

bool WedaUser::GetIsLicensed() const
{
    return m_isLicensed;
}

void WedaUser::SetIsLicensed(const bool& _isLicensed)
{
    m_isLicensed = _isLicensed;
    m_isLicensedHasBeenSet = true;
}

bool WedaUser::IsLicensedHasBeenSet() const
{
    return m_isLicensedHasBeenSet;
}

vector<RoleGroup> WedaUser::GetRelatedRoleGroups() const
{
    return m_relatedRoleGroups;
}

void WedaUser::SetRelatedRoleGroups(const vector<RoleGroup>& _relatedRoleGroups)
{
    m_relatedRoleGroups = _relatedRoleGroups;
    m_relatedRoleGroupsHasBeenSet = true;
}

bool WedaUser::RelatedRoleGroupsHasBeenSet() const
{
    return m_relatedRoleGroupsHasBeenSet;
}

vector<OrgResp> WedaUser::GetOrgs() const
{
    return m_orgs;
}

void WedaUser::SetOrgs(const vector<OrgResp>& _orgs)
{
    m_orgs = _orgs;
    m_orgsHasBeenSet = true;
}

bool WedaUser::OrgsHasBeenSet() const
{
    return m_orgsHasBeenSet;
}

vector<OrgResp> WedaUser::GetMainOrg() const
{
    return m_mainOrg;
}

void WedaUser::SetMainOrg(const vector<OrgResp>& _mainOrg)
{
    m_mainOrg = _mainOrg;
    m_mainOrgHasBeenSet = true;
}

bool WedaUser::MainOrgHasBeenSet() const
{
    return m_mainOrgHasBeenSet;
}

int64_t WedaUser::GetParentUserId() const
{
    return m_parentUserId;
}

void WedaUser::SetParentUserId(const int64_t& _parentUserId)
{
    m_parentUserId = _parentUserId;
    m_parentUserIdHasBeenSet = true;
}

bool WedaUser::ParentUserIdHasBeenSet() const
{
    return m_parentUserIdHasBeenSet;
}

string WedaUser::GetPrimaryColumn() const
{
    return m_primaryColumn;
}

void WedaUser::SetPrimaryColumn(const string& _primaryColumn)
{
    m_primaryColumn = _primaryColumn;
    m_primaryColumnHasBeenSet = true;
}

bool WedaUser::PrimaryColumnHasBeenSet() const
{
    return m_primaryColumnHasBeenSet;
}

string WedaUser::GetAvatarUrl() const
{
    return m_avatarUrl;
}

void WedaUser::SetAvatarUrl(const string& _avatarUrl)
{
    m_avatarUrl = _avatarUrl;
    m_avatarUrlHasBeenSet = true;
}

bool WedaUser::AvatarUrlHasBeenSet() const
{
    return m_avatarUrlHasBeenSet;
}

string WedaUser::GetLastLoginTime() const
{
    return m_lastLoginTime;
}

void WedaUser::SetLastLoginTime(const string& _lastLoginTime)
{
    m_lastLoginTime = _lastLoginTime;
    m_lastLoginTimeHasBeenSet = true;
}

bool WedaUser::LastLoginTimeHasBeenSet() const
{
    return m_lastLoginTimeHasBeenSet;
}

