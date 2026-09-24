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

#include <tencentcloud/ioa/v20220601/model/DescribeVirtualAccountsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeVirtualAccountsData::DescribeVirtualAccountsData() :
    m_idHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_namePathHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_itimeHasBeenSet(false),
    m_utimeHasBeenSet(false),
    m_accountGroupsHasBeenSet(false),
    m_pcBindNumHasBeenSet(false),
    m_mobileBindNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVirtualAccountsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.AccountGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = value["AccountGroupId"].GetUint64();
        m_accountGroupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.AccountId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = value["AccountId"].GetUint64();
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NamePath") && !value["NamePath"].IsNull())
    {
        if (!value["NamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.NamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namePath = string(value["NamePath"].GetString());
        m_namePathHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("Itime") && !value["Itime"].IsNull())
    {
        if (!value["Itime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.Itime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itime = string(value["Itime"].GetString());
        m_itimeHasBeenSet = true;
    }

    if (value.HasMember("Utime") && !value["Utime"].IsNull())
    {
        if (!value["Utime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.Utime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_utime = string(value["Utime"].GetString());
        m_utimeHasBeenSet = true;
    }

    if (value.HasMember("AccountGroups") && !value["AccountGroups"].IsNull())
    {
        if (!value["AccountGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.AccountGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeAccountAccountGroupsData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accountGroups.push_back(item);
        }
        m_accountGroupsHasBeenSet = true;
    }

    if (value.HasMember("PcBindNum") && !value["PcBindNum"].IsNull())
    {
        if (!value["PcBindNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.PcBindNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pcBindNum = value["PcBindNum"].GetInt64();
        m_pcBindNumHasBeenSet = true;
    }

    if (value.HasMember("MobileBindNum") && !value["MobileBindNum"].IsNull())
    {
        if (!value["MobileBindNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeVirtualAccountsData.MobileBindNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mobileBindNum = value["MobileBindNum"].GetInt64();
        m_mobileBindNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeVirtualAccountsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountGroupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountId, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_namePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namePath.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_itimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Itime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itime.c_str(), allocator).Move(), allocator);
    }

    if (m_utimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Utime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_utime.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountGroups.begin(); itr != m_accountGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pcBindNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PcBindNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pcBindNum, allocator);
    }

    if (m_mobileBindNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MobileBindNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mobileBindNum, allocator);
    }

}


uint64_t DescribeVirtualAccountsData::GetId() const
{
    return m_id;
}

void DescribeVirtualAccountsData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeVirtualAccountsData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeVirtualAccountsData::GetUserId() const
{
    return m_userId;
}

void DescribeVirtualAccountsData::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeVirtualAccountsData::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeVirtualAccountsData::GetUserName() const
{
    return m_userName;
}

void DescribeVirtualAccountsData::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeVirtualAccountsData::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

uint64_t DescribeVirtualAccountsData::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void DescribeVirtualAccountsData::SetAccountGroupId(const uint64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool DescribeVirtualAccountsData::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string DescribeVirtualAccountsData::GetGroupName() const
{
    return m_groupName;
}

void DescribeVirtualAccountsData::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeVirtualAccountsData::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

uint64_t DescribeVirtualAccountsData::GetAccountId() const
{
    return m_accountId;
}

void DescribeVirtualAccountsData::SetAccountId(const uint64_t& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool DescribeVirtualAccountsData::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

int64_t DescribeVirtualAccountsData::GetSource() const
{
    return m_source;
}

void DescribeVirtualAccountsData::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeVirtualAccountsData::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DescribeVirtualAccountsData::GetStatus() const
{
    return m_status;
}

void DescribeVirtualAccountsData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeVirtualAccountsData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeVirtualAccountsData::GetNamePath() const
{
    return m_namePath;
}

void DescribeVirtualAccountsData::SetNamePath(const string& _namePath)
{
    m_namePath = _namePath;
    m_namePathHasBeenSet = true;
}

bool DescribeVirtualAccountsData::NamePathHasBeenSet() const
{
    return m_namePathHasBeenSet;
}

string DescribeVirtualAccountsData::GetExtraInfo() const
{
    return m_extraInfo;
}

void DescribeVirtualAccountsData::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool DescribeVirtualAccountsData::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string DescribeVirtualAccountsData::GetItime() const
{
    return m_itime;
}

void DescribeVirtualAccountsData::SetItime(const string& _itime)
{
    m_itime = _itime;
    m_itimeHasBeenSet = true;
}

bool DescribeVirtualAccountsData::ItimeHasBeenSet() const
{
    return m_itimeHasBeenSet;
}

string DescribeVirtualAccountsData::GetUtime() const
{
    return m_utime;
}

void DescribeVirtualAccountsData::SetUtime(const string& _utime)
{
    m_utime = _utime;
    m_utimeHasBeenSet = true;
}

bool DescribeVirtualAccountsData::UtimeHasBeenSet() const
{
    return m_utimeHasBeenSet;
}

vector<DescribeAccountAccountGroupsData> DescribeVirtualAccountsData::GetAccountGroups() const
{
    return m_accountGroups;
}

void DescribeVirtualAccountsData::SetAccountGroups(const vector<DescribeAccountAccountGroupsData>& _accountGroups)
{
    m_accountGroups = _accountGroups;
    m_accountGroupsHasBeenSet = true;
}

bool DescribeVirtualAccountsData::AccountGroupsHasBeenSet() const
{
    return m_accountGroupsHasBeenSet;
}

int64_t DescribeVirtualAccountsData::GetPcBindNum() const
{
    return m_pcBindNum;
}

void DescribeVirtualAccountsData::SetPcBindNum(const int64_t& _pcBindNum)
{
    m_pcBindNum = _pcBindNum;
    m_pcBindNumHasBeenSet = true;
}

bool DescribeVirtualAccountsData::PcBindNumHasBeenSet() const
{
    return m_pcBindNumHasBeenSet;
}

int64_t DescribeVirtualAccountsData::GetMobileBindNum() const
{
    return m_mobileBindNum;
}

void DescribeVirtualAccountsData::SetMobileBindNum(const int64_t& _mobileBindNum)
{
    m_mobileBindNum = _mobileBindNum;
    m_mobileBindNumHasBeenSet = true;
}

bool DescribeVirtualAccountsData::MobileBindNumHasBeenSet() const
{
    return m_mobileBindNumHasBeenSet;
}

