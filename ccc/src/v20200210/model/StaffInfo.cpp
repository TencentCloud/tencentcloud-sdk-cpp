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

#include <tencentcloud/ccc/v20200210/model/StaffInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

StaffInfo::StaffInfo() :
    m_nameHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_staffNumberHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_roleIdListHasBeenSet(false),
    m_roleListHasBeenSet(false),
    m_skillGroupListHasBeenSet(false),
    m_lastModifyTimestampHasBeenSet(false),
    m_extensionNumberHasBeenSet(false),
    m_forwardingConfigHasBeenSet(false)
{
}

CoreInternalOutcome StaffInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mail") && !value["Mail"].IsNull())
    {
        if (!value["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(value["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("StaffNumber") && !value["StaffNumber"].IsNull())
    {
        if (!value["StaffNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.StaffNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffNumber = string(value["StaffNumber"].GetString());
        m_staffNumberHasBeenSet = true;
    }

    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.RoleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = value["RoleId"].GetUint64();
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleIdList") && !value["RoleIdList"].IsNull())
    {
        if (!value["RoleIdList"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.RoleIdList` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roleIdList = value["RoleIdList"].GetUint64();
        m_roleIdListHasBeenSet = true;
    }

    if (value.HasMember("RoleList") && !value["RoleList"].IsNull())
    {
        if (!value["RoleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StaffInfo.RoleList` is not array type"));

        const rapidjson::Value &tmpValue = value["RoleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_roleList.push_back((*itr).GetUint64());
        }
        m_roleListHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupList") && !value["SkillGroupList"].IsNull())
    {
        if (!value["SkillGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StaffInfo.SkillGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["SkillGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillGroupItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_skillGroupList.push_back(item);
        }
        m_skillGroupListHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTimestamp") && !value["LastModifyTimestamp"].IsNull())
    {
        if (!value["LastModifyTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.LastModifyTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTimestamp = value["LastModifyTimestamp"].GetInt64();
        m_lastModifyTimestampHasBeenSet = true;
    }

    if (value.HasMember("ExtensionNumber") && !value["ExtensionNumber"].IsNull())
    {
        if (!value["ExtensionNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.ExtensionNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionNumber = string(value["ExtensionNumber"].GetString());
        m_extensionNumberHasBeenSet = true;
    }

    if (value.HasMember("ForwardingConfig") && !value["ForwardingConfig"].IsNull())
    {
        if (!value["ForwardingConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StaffInfo.ForwardingConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forwardingConfig.Deserialize(value["ForwardingConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forwardingConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaffInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_staffNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleId, allocator);
    }

    if (m_roleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleIdList, allocator);
    }

    if (m_roleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleList.begin(); itr != m_roleList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_skillGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_skillGroupList.begin(); itr != m_skillGroupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lastModifyTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyTimestamp, allocator);
    }

    if (m_extensionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardingConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forwardingConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StaffInfo::GetName() const
{
    return m_name;
}

void StaffInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StaffInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string StaffInfo::GetMail() const
{
    return m_mail;
}

void StaffInfo::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool StaffInfo::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

string StaffInfo::GetPhone() const
{
    return m_phone;
}

void StaffInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool StaffInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string StaffInfo::GetNick() const
{
    return m_nick;
}

void StaffInfo::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool StaffInfo::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string StaffInfo::GetStaffNumber() const
{
    return m_staffNumber;
}

void StaffInfo::SetStaffNumber(const string& _staffNumber)
{
    m_staffNumber = _staffNumber;
    m_staffNumberHasBeenSet = true;
}

bool StaffInfo::StaffNumberHasBeenSet() const
{
    return m_staffNumberHasBeenSet;
}

uint64_t StaffInfo::GetRoleId() const
{
    return m_roleId;
}

void StaffInfo::SetRoleId(const uint64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool StaffInfo::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

uint64_t StaffInfo::GetRoleIdList() const
{
    return m_roleIdList;
}

void StaffInfo::SetRoleIdList(const uint64_t& _roleIdList)
{
    m_roleIdList = _roleIdList;
    m_roleIdListHasBeenSet = true;
}

bool StaffInfo::RoleIdListHasBeenSet() const
{
    return m_roleIdListHasBeenSet;
}

vector<uint64_t> StaffInfo::GetRoleList() const
{
    return m_roleList;
}

void StaffInfo::SetRoleList(const vector<uint64_t>& _roleList)
{
    m_roleList = _roleList;
    m_roleListHasBeenSet = true;
}

bool StaffInfo::RoleListHasBeenSet() const
{
    return m_roleListHasBeenSet;
}

vector<SkillGroupItem> StaffInfo::GetSkillGroupList() const
{
    return m_skillGroupList;
}

void StaffInfo::SetSkillGroupList(const vector<SkillGroupItem>& _skillGroupList)
{
    m_skillGroupList = _skillGroupList;
    m_skillGroupListHasBeenSet = true;
}

bool StaffInfo::SkillGroupListHasBeenSet() const
{
    return m_skillGroupListHasBeenSet;
}

int64_t StaffInfo::GetLastModifyTimestamp() const
{
    return m_lastModifyTimestamp;
}

void StaffInfo::SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp)
{
    m_lastModifyTimestamp = _lastModifyTimestamp;
    m_lastModifyTimestampHasBeenSet = true;
}

bool StaffInfo::LastModifyTimestampHasBeenSet() const
{
    return m_lastModifyTimestampHasBeenSet;
}

string StaffInfo::GetExtensionNumber() const
{
    return m_extensionNumber;
}

void StaffInfo::SetExtensionNumber(const string& _extensionNumber)
{
    m_extensionNumber = _extensionNumber;
    m_extensionNumberHasBeenSet = true;
}

bool StaffInfo::ExtensionNumberHasBeenSet() const
{
    return m_extensionNumberHasBeenSet;
}

ForwardingConfig StaffInfo::GetForwardingConfig() const
{
    return m_forwardingConfig;
}

void StaffInfo::SetForwardingConfig(const ForwardingConfig& _forwardingConfig)
{
    m_forwardingConfig = _forwardingConfig;
    m_forwardingConfigHasBeenSet = true;
}

bool StaffInfo::ForwardingConfigHasBeenSet() const
{
    return m_forwardingConfigHasBeenSet;
}

