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

#include <tencentcloud/cam/v20190116/model/SubAccountUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

SubAccountUser::SubAccountUser() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_lastLoginIpHasBeenSet(false),
    m_lastLoginTimeHasBeenSet(false)
{
}

CoreInternalOutcome SubAccountUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUser.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUser.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUser.Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUser.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUser.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUser.UserType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userType = value["UserType"].GetUint64();
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("LastLoginIp") && !value["LastLoginIp"].IsNull())
    {
        if (!value["LastLoginIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUser.LastLoginIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginIp = string(value["LastLoginIp"].GetString());
        m_lastLoginIpHasBeenSet = true;
    }

    if (value.HasMember("LastLoginTime") && !value["LastLoginTime"].IsNull())
    {
        if (!value["LastLoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUser.LastLoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginTime = string(value["LastLoginTime"].GetString());
        m_lastLoginTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubAccountUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uid, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userType, allocator);
    }

    if (m_lastLoginIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginIp.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SubAccountUser::GetUin() const
{
    return m_uin;
}

void SubAccountUser::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SubAccountUser::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SubAccountUser::GetName() const
{
    return m_name;
}

void SubAccountUser::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SubAccountUser::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t SubAccountUser::GetUid() const
{
    return m_uid;
}

void SubAccountUser::SetUid(const uint64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool SubAccountUser::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string SubAccountUser::GetRemark() const
{
    return m_remark;
}

void SubAccountUser::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SubAccountUser::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string SubAccountUser::GetCreateTime() const
{
    return m_createTime;
}

void SubAccountUser::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SubAccountUser::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t SubAccountUser::GetUserType() const
{
    return m_userType;
}

void SubAccountUser::SetUserType(const uint64_t& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool SubAccountUser::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string SubAccountUser::GetLastLoginIp() const
{
    return m_lastLoginIp;
}

void SubAccountUser::SetLastLoginIp(const string& _lastLoginIp)
{
    m_lastLoginIp = _lastLoginIp;
    m_lastLoginIpHasBeenSet = true;
}

bool SubAccountUser::LastLoginIpHasBeenSet() const
{
    return m_lastLoginIpHasBeenSet;
}

string SubAccountUser::GetLastLoginTime() const
{
    return m_lastLoginTime;
}

void SubAccountUser::SetLastLoginTime(const string& _lastLoginTime)
{
    m_lastLoginTime = _lastLoginTime;
    m_lastLoginTimeHasBeenSet = true;
}

bool SubAccountUser::LastLoginTimeHasBeenSet() const
{
    return m_lastLoginTimeHasBeenSet;
}

