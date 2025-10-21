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

#include <tencentcloud/ioa/v20220601/model/DescribeDeviceDetailListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDeviceDetailListData::DescribeDeviceDetailListData() :
    m_userNameHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accountGroupIdPathHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_groupNamePathHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_accountGroupNameHasBeenSet(false),
    m_groupIdPathHasBeenSet(false),
    m_midHasBeenSet(false),
    m_ioaUserNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_macHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_accountGroupNamePathHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceDetailListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("ComputerName") && !value["ComputerName"].IsNull())
    {
        if (!value["ComputerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.ComputerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computerName = string(value["ComputerName"].GetString());
        m_computerNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupIdPath") && !value["AccountGroupIdPath"].IsNull())
    {
        if (!value["AccountGroupIdPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.AccountGroupIdPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupIdPath = string(value["AccountGroupIdPath"].GetString());
        m_accountGroupIdPathHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.AccountGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = value["AccountGroupId"].GetInt64();
        m_accountGroupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupNamePath") && !value["GroupNamePath"].IsNull())
    {
        if (!value["GroupNamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.GroupNamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupNamePath = string(value["GroupNamePath"].GetString());
        m_groupNamePathHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupName") && !value["AccountGroupName"].IsNull())
    {
        if (!value["AccountGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.AccountGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupName = string(value["AccountGroupName"].GetString());
        m_accountGroupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupIdPath") && !value["GroupIdPath"].IsNull())
    {
        if (!value["GroupIdPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.GroupIdPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupIdPath = string(value["GroupIdPath"].GetString());
        m_groupIdPathHasBeenSet = true;
    }

    if (value.HasMember("Mid") && !value["Mid"].IsNull())
    {
        if (!value["Mid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.Mid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mid = string(value["Mid"].GetString());
        m_midHasBeenSet = true;
    }

    if (value.HasMember("IoaUserName") && !value["IoaUserName"].IsNull())
    {
        if (!value["IoaUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.IoaUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ioaUserName = string(value["IoaUserName"].GetString());
        m_ioaUserNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupNamePath") && !value["AccountGroupNamePath"].IsNull())
    {
        if (!value["AccountGroupNamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.AccountGroupNamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupNamePath = string(value["AccountGroupNamePath"].GetString());
        m_accountGroupNamePathHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceDetailListData.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDeviceDetailListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_computerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computerName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupIdPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountGroupIdPath.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountGroupId, allocator);
    }

    if (m_groupNamePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupNamePath.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIdPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupIdPath.c_str(), allocator).Move(), allocator);
    }

    if (m_midHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mid.c_str(), allocator).Move(), allocator);
    }

    if (m_ioaUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IoaUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ioaUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_macHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mac.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupNamePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupNamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountGroupNamePath.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string DescribeDeviceDetailListData::GetUserName() const
{
    return m_userName;
}

void DescribeDeviceDetailListData::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeDeviceDetailListData::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeDeviceDetailListData::GetComputerName() const
{
    return m_computerName;
}

void DescribeDeviceDetailListData::SetComputerName(const string& _computerName)
{
    m_computerName = _computerName;
    m_computerNameHasBeenSet = true;
}

bool DescribeDeviceDetailListData::ComputerNameHasBeenSet() const
{
    return m_computerNameHasBeenSet;
}

string DescribeDeviceDetailListData::GetName() const
{
    return m_name;
}

void DescribeDeviceDetailListData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDeviceDetailListData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDeviceDetailListData::GetAccountGroupIdPath() const
{
    return m_accountGroupIdPath;
}

void DescribeDeviceDetailListData::SetAccountGroupIdPath(const string& _accountGroupIdPath)
{
    m_accountGroupIdPath = _accountGroupIdPath;
    m_accountGroupIdPathHasBeenSet = true;
}

bool DescribeDeviceDetailListData::AccountGroupIdPathHasBeenSet() const
{
    return m_accountGroupIdPathHasBeenSet;
}

int64_t DescribeDeviceDetailListData::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void DescribeDeviceDetailListData::SetAccountGroupId(const int64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool DescribeDeviceDetailListData::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string DescribeDeviceDetailListData::GetGroupNamePath() const
{
    return m_groupNamePath;
}

void DescribeDeviceDetailListData::SetGroupNamePath(const string& _groupNamePath)
{
    m_groupNamePath = _groupNamePath;
    m_groupNamePathHasBeenSet = true;
}

bool DescribeDeviceDetailListData::GroupNamePathHasBeenSet() const
{
    return m_groupNamePathHasBeenSet;
}

string DescribeDeviceDetailListData::GetIp() const
{
    return m_ip;
}

void DescribeDeviceDetailListData::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeDeviceDetailListData::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeDeviceDetailListData::GetAccountGroupName() const
{
    return m_accountGroupName;
}

void DescribeDeviceDetailListData::SetAccountGroupName(const string& _accountGroupName)
{
    m_accountGroupName = _accountGroupName;
    m_accountGroupNameHasBeenSet = true;
}

bool DescribeDeviceDetailListData::AccountGroupNameHasBeenSet() const
{
    return m_accountGroupNameHasBeenSet;
}

string DescribeDeviceDetailListData::GetGroupIdPath() const
{
    return m_groupIdPath;
}

void DescribeDeviceDetailListData::SetGroupIdPath(const string& _groupIdPath)
{
    m_groupIdPath = _groupIdPath;
    m_groupIdPathHasBeenSet = true;
}

bool DescribeDeviceDetailListData::GroupIdPathHasBeenSet() const
{
    return m_groupIdPathHasBeenSet;
}

string DescribeDeviceDetailListData::GetMid() const
{
    return m_mid;
}

void DescribeDeviceDetailListData::SetMid(const string& _mid)
{
    m_mid = _mid;
    m_midHasBeenSet = true;
}

bool DescribeDeviceDetailListData::MidHasBeenSet() const
{
    return m_midHasBeenSet;
}

string DescribeDeviceDetailListData::GetIoaUserName() const
{
    return m_ioaUserName;
}

void DescribeDeviceDetailListData::SetIoaUserName(const string& _ioaUserName)
{
    m_ioaUserName = _ioaUserName;
    m_ioaUserNameHasBeenSet = true;
}

bool DescribeDeviceDetailListData::IoaUserNameHasBeenSet() const
{
    return m_ioaUserNameHasBeenSet;
}

int64_t DescribeDeviceDetailListData::GetGroupId() const
{
    return m_groupId;
}

void DescribeDeviceDetailListData::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeDeviceDetailListData::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeDeviceDetailListData::GetGroupName() const
{
    return m_groupName;
}

void DescribeDeviceDetailListData::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeDeviceDetailListData::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribeDeviceDetailListData::GetMac() const
{
    return m_mac;
}

void DescribeDeviceDetailListData::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool DescribeDeviceDetailListData::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string DescribeDeviceDetailListData::GetVersion() const
{
    return m_version;
}

void DescribeDeviceDetailListData::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DescribeDeviceDetailListData::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DescribeDeviceDetailListData::GetAccountGroupNamePath() const
{
    return m_accountGroupNamePath;
}

void DescribeDeviceDetailListData::SetAccountGroupNamePath(const string& _accountGroupNamePath)
{
    m_accountGroupNamePath = _accountGroupNamePath;
    m_accountGroupNamePathHasBeenSet = true;
}

bool DescribeDeviceDetailListData::AccountGroupNamePathHasBeenSet() const
{
    return m_accountGroupNamePathHasBeenSet;
}

int64_t DescribeDeviceDetailListData::GetId() const
{
    return m_id;
}

void DescribeDeviceDetailListData::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeDeviceDetailListData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

