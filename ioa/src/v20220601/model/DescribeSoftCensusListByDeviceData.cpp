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

#include <tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDeviceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeSoftCensusListByDeviceData::DescribeSoftCensusListByDeviceData() :
    m_userNameHasBeenSet(false),
    m_macAddrHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_groupNamePathHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_midHasBeenSet(false),
    m_ioaUserNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_softNumHasBeenSet(false),
    m_piracyRiskHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSoftCensusListByDeviceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("MacAddr") && !value["MacAddr"].IsNull())
    {
        if (!value["MacAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.MacAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddr = string(value["MacAddr"].GetString());
        m_macAddrHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("GroupNamePath") && !value["GroupNamePath"].IsNull())
    {
        if (!value["GroupNamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.GroupNamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupNamePath = string(value["GroupNamePath"].GetString());
        m_groupNamePathHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Mid") && !value["Mid"].IsNull())
    {
        if (!value["Mid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.Mid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mid = string(value["Mid"].GetString());
        m_midHasBeenSet = true;
    }

    if (value.HasMember("IoaUserName") && !value["IoaUserName"].IsNull())
    {
        if (!value["IoaUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.IoaUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ioaUserName = string(value["IoaUserName"].GetString());
        m_ioaUserNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SoftNum") && !value["SoftNum"].IsNull())
    {
        if (!value["SoftNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.SoftNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_softNum = value["SoftNum"].GetInt64();
        m_softNumHasBeenSet = true;
    }

    if (value.HasMember("PiracyRisk") && !value["PiracyRisk"].IsNull())
    {
        if (!value["PiracyRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSoftCensusListByDeviceData.PiracyRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_piracyRisk = value["PiracyRisk"].GetInt64();
        m_piracyRiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSoftCensusListByDeviceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_macAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_macAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_softNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_softNum, allocator);
    }

    if (m_piracyRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PiracyRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_piracyRisk, allocator);
    }

}


string DescribeSoftCensusListByDeviceData::GetUserName() const
{
    return m_userName;
}

void DescribeSoftCensusListByDeviceData::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeSoftCensusListByDeviceData::GetMacAddr() const
{
    return m_macAddr;
}

void DescribeSoftCensusListByDeviceData::SetMacAddr(const string& _macAddr)
{
    m_macAddr = _macAddr;
    m_macAddrHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::MacAddrHasBeenSet() const
{
    return m_macAddrHasBeenSet;
}

string DescribeSoftCensusListByDeviceData::GetName() const
{
    return m_name;
}

void DescribeSoftCensusListByDeviceData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeSoftCensusListByDeviceData::GetGroupNamePath() const
{
    return m_groupNamePath;
}

void DescribeSoftCensusListByDeviceData::SetGroupNamePath(const string& _groupNamePath)
{
    m_groupNamePath = _groupNamePath;
    m_groupNamePathHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::GroupNamePathHasBeenSet() const
{
    return m_groupNamePathHasBeenSet;
}

string DescribeSoftCensusListByDeviceData::GetIp() const
{
    return m_ip;
}

void DescribeSoftCensusListByDeviceData::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeSoftCensusListByDeviceData::GetMid() const
{
    return m_mid;
}

void DescribeSoftCensusListByDeviceData::SetMid(const string& _mid)
{
    m_mid = _mid;
    m_midHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::MidHasBeenSet() const
{
    return m_midHasBeenSet;
}

string DescribeSoftCensusListByDeviceData::GetIoaUserName() const
{
    return m_ioaUserName;
}

void DescribeSoftCensusListByDeviceData::SetIoaUserName(const string& _ioaUserName)
{
    m_ioaUserName = _ioaUserName;
    m_ioaUserNameHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::IoaUserNameHasBeenSet() const
{
    return m_ioaUserNameHasBeenSet;
}

int64_t DescribeSoftCensusListByDeviceData::GetGroupId() const
{
    return m_groupId;
}

void DescribeSoftCensusListByDeviceData::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeSoftCensusListByDeviceData::GetGroupName() const
{
    return m_groupName;
}

void DescribeSoftCensusListByDeviceData::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t DescribeSoftCensusListByDeviceData::GetId() const
{
    return m_id;
}

void DescribeSoftCensusListByDeviceData::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t DescribeSoftCensusListByDeviceData::GetSoftNum() const
{
    return m_softNum;
}

void DescribeSoftCensusListByDeviceData::SetSoftNum(const int64_t& _softNum)
{
    m_softNum = _softNum;
    m_softNumHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::SoftNumHasBeenSet() const
{
    return m_softNumHasBeenSet;
}

int64_t DescribeSoftCensusListByDeviceData::GetPiracyRisk() const
{
    return m_piracyRisk;
}

void DescribeSoftCensusListByDeviceData::SetPiracyRisk(const int64_t& _piracyRisk)
{
    m_piracyRisk = _piracyRisk;
    m_piracyRiskHasBeenSet = true;
}

bool DescribeSoftCensusListByDeviceData::PiracyRiskHasBeenSet() const
{
    return m_piracyRiskHasBeenSet;
}

