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

#include <tencentcloud/organization/v20181225/model/OrgInvitation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20181225::Model;
using namespace std;

OrgInvitation::OrgInvitation() :
    m_idHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_hostUinHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostMailHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_orgTypeHasBeenSet(false),
    m_inviteTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome OrgInvitation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("HostUin") && !value["HostUin"].IsNull())
    {
        if (!value["HostUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.HostUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostUin = value["HostUin"].GetUint64();
        m_hostUinHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostMail") && !value["HostMail"].IsNull())
    {
        if (!value["HostMail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.HostMail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostMail = string(value["HostMail"].GetString());
        m_hostMailHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("OrgType") && !value["OrgType"].IsNull())
    {
        if (!value["OrgType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.OrgType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orgType = value["OrgType"].GetUint64();
        m_orgTypeHasBeenSet = true;
    }

    if (value.HasMember("InviteTime") && !value["InviteTime"].IsNull())
    {
        if (!value["InviteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.InviteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inviteTime = string(value["InviteTime"].GetString());
        m_inviteTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgInvitation.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgInvitation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_hostUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostUin, allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostMailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostMail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostMail.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_orgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgType, allocator);
    }

    if (m_inviteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inviteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t OrgInvitation::GetId() const
{
    return m_id;
}

void OrgInvitation::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool OrgInvitation::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t OrgInvitation::GetUin() const
{
    return m_uin;
}

void OrgInvitation::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool OrgInvitation::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t OrgInvitation::GetHostUin() const
{
    return m_hostUin;
}

void OrgInvitation::SetHostUin(const uint64_t& _hostUin)
{
    m_hostUin = _hostUin;
    m_hostUinHasBeenSet = true;
}

bool OrgInvitation::HostUinHasBeenSet() const
{
    return m_hostUinHasBeenSet;
}

string OrgInvitation::GetHostName() const
{
    return m_hostName;
}

void OrgInvitation::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool OrgInvitation::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string OrgInvitation::GetHostMail() const
{
    return m_hostMail;
}

void OrgInvitation::SetHostMail(const string& _hostMail)
{
    m_hostMail = _hostMail;
    m_hostMailHasBeenSet = true;
}

bool OrgInvitation::HostMailHasBeenSet() const
{
    return m_hostMailHasBeenSet;
}

uint64_t OrgInvitation::GetStatus() const
{
    return m_status;
}

void OrgInvitation::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OrgInvitation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OrgInvitation::GetName() const
{
    return m_name;
}

void OrgInvitation::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OrgInvitation::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OrgInvitation::GetRemark() const
{
    return m_remark;
}

void OrgInvitation::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool OrgInvitation::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t OrgInvitation::GetOrgType() const
{
    return m_orgType;
}

void OrgInvitation::SetOrgType(const uint64_t& _orgType)
{
    m_orgType = _orgType;
    m_orgTypeHasBeenSet = true;
}

bool OrgInvitation::OrgTypeHasBeenSet() const
{
    return m_orgTypeHasBeenSet;
}

string OrgInvitation::GetInviteTime() const
{
    return m_inviteTime;
}

void OrgInvitation::SetInviteTime(const string& _inviteTime)
{
    m_inviteTime = _inviteTime;
    m_inviteTimeHasBeenSet = true;
}

bool OrgInvitation::InviteTimeHasBeenSet() const
{
    return m_inviteTimeHasBeenSet;
}

string OrgInvitation::GetExpireTime() const
{
    return m_expireTime;
}

void OrgInvitation::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool OrgInvitation::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

