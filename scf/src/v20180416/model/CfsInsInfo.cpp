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

#include <tencentcloud/scf/v20180416/model/CfsInsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

CfsInsInfo::CfsInsInfo() :
    m_userIdHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_cfsIdHasBeenSet(false),
    m_mountInsIdHasBeenSet(false),
    m_localMountDirHasBeenSet(false),
    m_remoteMountDirHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_mountVpcIdHasBeenSet(false),
    m_mountSubnetIdHasBeenSet(false)
{
}

CoreInternalOutcome CfsInsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfsInsInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserGroupId") && !value["UserGroupId"].IsNull())
    {
        if (!value["UserGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfsInsInfo.UserGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroupId = string(value["UserGroupId"].GetString());
        m_userGroupIdHasBeenSet = true;
    }

    if (value.HasMember("CfsId") && !value["CfsId"].IsNull())
    {
        if (!value["CfsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfsInsInfo.CfsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cfsId = string(value["CfsId"].GetString());
        m_cfsIdHasBeenSet = true;
    }

    if (value.HasMember("MountInsId") && !value["MountInsId"].IsNull())
    {
        if (!value["MountInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfsInsInfo.MountInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountInsId = string(value["MountInsId"].GetString());
        m_mountInsIdHasBeenSet = true;
    }

    if (value.HasMember("LocalMountDir") && !value["LocalMountDir"].IsNull())
    {
        if (!value["LocalMountDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfsInsInfo.LocalMountDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localMountDir = string(value["LocalMountDir"].GetString());
        m_localMountDirHasBeenSet = true;
    }

    if (value.HasMember("RemoteMountDir") && !value["RemoteMountDir"].IsNull())
    {
        if (!value["RemoteMountDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfsInsInfo.RemoteMountDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteMountDir = string(value["RemoteMountDir"].GetString());
        m_remoteMountDirHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfsInsInfo.IpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddress = string(value["IpAddress"].GetString());
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("MountVpcId") && !value["MountVpcId"].IsNull())
    {
        if (!value["MountVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfsInsInfo.MountVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountVpcId = string(value["MountVpcId"].GetString());
        m_mountVpcIdHasBeenSet = true;
    }

    if (value.HasMember("MountSubnetId") && !value["MountSubnetId"].IsNull())
    {
        if (!value["MountSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfsInsInfo.MountSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountSubnetId = string(value["MountSubnetId"].GetString());
        m_mountSubnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CfsInsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_cfsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cfsId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_localMountDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalMountDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localMountDir.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteMountDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteMountDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteMountDir.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_mountVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountSubnetId.c_str(), allocator).Move(), allocator);
    }

}


string CfsInsInfo::GetUserId() const
{
    return m_userId;
}

void CfsInsInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CfsInsInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CfsInsInfo::GetUserGroupId() const
{
    return m_userGroupId;
}

void CfsInsInfo::SetUserGroupId(const string& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool CfsInsInfo::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

string CfsInsInfo::GetCfsId() const
{
    return m_cfsId;
}

void CfsInsInfo::SetCfsId(const string& _cfsId)
{
    m_cfsId = _cfsId;
    m_cfsIdHasBeenSet = true;
}

bool CfsInsInfo::CfsIdHasBeenSet() const
{
    return m_cfsIdHasBeenSet;
}

string CfsInsInfo::GetMountInsId() const
{
    return m_mountInsId;
}

void CfsInsInfo::SetMountInsId(const string& _mountInsId)
{
    m_mountInsId = _mountInsId;
    m_mountInsIdHasBeenSet = true;
}

bool CfsInsInfo::MountInsIdHasBeenSet() const
{
    return m_mountInsIdHasBeenSet;
}

string CfsInsInfo::GetLocalMountDir() const
{
    return m_localMountDir;
}

void CfsInsInfo::SetLocalMountDir(const string& _localMountDir)
{
    m_localMountDir = _localMountDir;
    m_localMountDirHasBeenSet = true;
}

bool CfsInsInfo::LocalMountDirHasBeenSet() const
{
    return m_localMountDirHasBeenSet;
}

string CfsInsInfo::GetRemoteMountDir() const
{
    return m_remoteMountDir;
}

void CfsInsInfo::SetRemoteMountDir(const string& _remoteMountDir)
{
    m_remoteMountDir = _remoteMountDir;
    m_remoteMountDirHasBeenSet = true;
}

bool CfsInsInfo::RemoteMountDirHasBeenSet() const
{
    return m_remoteMountDirHasBeenSet;
}

string CfsInsInfo::GetIpAddress() const
{
    return m_ipAddress;
}

void CfsInsInfo::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool CfsInsInfo::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

string CfsInsInfo::GetMountVpcId() const
{
    return m_mountVpcId;
}

void CfsInsInfo::SetMountVpcId(const string& _mountVpcId)
{
    m_mountVpcId = _mountVpcId;
    m_mountVpcIdHasBeenSet = true;
}

bool CfsInsInfo::MountVpcIdHasBeenSet() const
{
    return m_mountVpcIdHasBeenSet;
}

string CfsInsInfo::GetMountSubnetId() const
{
    return m_mountSubnetId;
}

void CfsInsInfo::SetMountSubnetId(const string& _mountSubnetId)
{
    m_mountSubnetId = _mountSubnetId;
    m_mountSubnetIdHasBeenSet = true;
}

bool CfsInsInfo::MountSubnetIdHasBeenSet() const
{
    return m_mountSubnetIdHasBeenSet;
}

