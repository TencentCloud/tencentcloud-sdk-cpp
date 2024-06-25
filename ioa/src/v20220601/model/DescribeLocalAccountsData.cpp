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

#include <tencentcloud/ioa/v20220601/model/DescribeLocalAccountsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeLocalAccountsData::DescribeLocalAccountsData() :
    m_idHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_namePathHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_itimeHasBeenSet(false),
    m_utimeHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_accountGroupsHasBeenSet(false),
    m_mobileBindNumHasBeenSet(false),
    m_pcBindNumHasBeenSet(false),
    m_onlineStatusHasBeenSet(false),
    m_activeStatusHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_logoutTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLocalAccountsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.AccountId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = value["AccountId"].GetInt64();
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("NamePath") && !value["NamePath"].IsNull())
    {
        if (!value["NamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.NamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namePath = string(value["NamePath"].GetString());
        m_namePathHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Itime") && !value["Itime"].IsNull())
    {
        if (!value["Itime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.Itime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itime = string(value["Itime"].GetString());
        m_itimeHasBeenSet = true;
    }

    if (value.HasMember("Utime") && !value["Utime"].IsNull())
    {
        if (!value["Utime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.Utime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_utime = string(value["Utime"].GetString());
        m_utimeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("AccountGroups") && !value["AccountGroups"].IsNull())
    {
        if (!value["AccountGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.AccountGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeLocalAccountAccountGroupsData item;
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

    if (value.HasMember("MobileBindNum") && !value["MobileBindNum"].IsNull())
    {
        if (!value["MobileBindNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.MobileBindNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mobileBindNum = value["MobileBindNum"].GetInt64();
        m_mobileBindNumHasBeenSet = true;
    }

    if (value.HasMember("PcBindNum") && !value["PcBindNum"].IsNull())
    {
        if (!value["PcBindNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.PcBindNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pcBindNum = value["PcBindNum"].GetInt64();
        m_pcBindNumHasBeenSet = true;
    }

    if (value.HasMember("OnlineStatus") && !value["OnlineStatus"].IsNull())
    {
        if (!value["OnlineStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.OnlineStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineStatus = value["OnlineStatus"].GetInt64();
        m_onlineStatusHasBeenSet = true;
    }

    if (value.HasMember("ActiveStatus") && !value["ActiveStatus"].IsNull())
    {
        if (!value["ActiveStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.ActiveStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeStatus = value["ActiveStatus"].GetInt64();
        m_activeStatusHasBeenSet = true;
    }

    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.LoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = string(value["LoginTime"].GetString());
        m_loginTimeHasBeenSet = true;
    }

    if (value.HasMember("LogoutTime") && !value["LogoutTime"].IsNull())
    {
        if (!value["LogoutTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLocalAccountsData.LogoutTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logoutTime = string(value["LogoutTime"].GetString());
        m_logoutTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeLocalAccountsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountId, allocator);
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

    if (m_namePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namePath.c_str(), allocator).Move(), allocator);
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

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
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

    if (m_mobileBindNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MobileBindNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mobileBindNum, allocator);
    }

    if (m_pcBindNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PcBindNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pcBindNum, allocator);
    }

    if (m_onlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineStatus, allocator);
    }

    if (m_activeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeStatus, allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_logoutTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoutTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logoutTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeLocalAccountsData::GetId() const
{
    return m_id;
}

void DescribeLocalAccountsData::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeLocalAccountsData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeLocalAccountsData::GetUserId() const
{
    return m_userId;
}

void DescribeLocalAccountsData::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeLocalAccountsData::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeLocalAccountsData::GetUserName() const
{
    return m_userName;
}

void DescribeLocalAccountsData::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeLocalAccountsData::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t DescribeLocalAccountsData::GetAccountId() const
{
    return m_accountId;
}

void DescribeLocalAccountsData::SetAccountId(const int64_t& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool DescribeLocalAccountsData::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

int64_t DescribeLocalAccountsData::GetGroupId() const
{
    return m_groupId;
}

void DescribeLocalAccountsData::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeLocalAccountsData::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeLocalAccountsData::GetGroupName() const
{
    return m_groupName;
}

void DescribeLocalAccountsData::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeLocalAccountsData::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribeLocalAccountsData::GetNamePath() const
{
    return m_namePath;
}

void DescribeLocalAccountsData::SetNamePath(const string& _namePath)
{
    m_namePath = _namePath;
    m_namePathHasBeenSet = true;
}

bool DescribeLocalAccountsData::NamePathHasBeenSet() const
{
    return m_namePathHasBeenSet;
}

int64_t DescribeLocalAccountsData::GetSource() const
{
    return m_source;
}

void DescribeLocalAccountsData::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeLocalAccountsData::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DescribeLocalAccountsData::GetStatus() const
{
    return m_status;
}

void DescribeLocalAccountsData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeLocalAccountsData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeLocalAccountsData::GetItime() const
{
    return m_itime;
}

void DescribeLocalAccountsData::SetItime(const string& _itime)
{
    m_itime = _itime;
    m_itimeHasBeenSet = true;
}

bool DescribeLocalAccountsData::ItimeHasBeenSet() const
{
    return m_itimeHasBeenSet;
}

string DescribeLocalAccountsData::GetUtime() const
{
    return m_utime;
}

void DescribeLocalAccountsData::SetUtime(const string& _utime)
{
    m_utime = _utime;
    m_utimeHasBeenSet = true;
}

bool DescribeLocalAccountsData::UtimeHasBeenSet() const
{
    return m_utimeHasBeenSet;
}

string DescribeLocalAccountsData::GetExtraInfo() const
{
    return m_extraInfo;
}

void DescribeLocalAccountsData::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool DescribeLocalAccountsData::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string DescribeLocalAccountsData::GetRiskLevel() const
{
    return m_riskLevel;
}

void DescribeLocalAccountsData::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool DescribeLocalAccountsData::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<DescribeLocalAccountAccountGroupsData> DescribeLocalAccountsData::GetAccountGroups() const
{
    return m_accountGroups;
}

void DescribeLocalAccountsData::SetAccountGroups(const vector<DescribeLocalAccountAccountGroupsData>& _accountGroups)
{
    m_accountGroups = _accountGroups;
    m_accountGroupsHasBeenSet = true;
}

bool DescribeLocalAccountsData::AccountGroupsHasBeenSet() const
{
    return m_accountGroupsHasBeenSet;
}

int64_t DescribeLocalAccountsData::GetMobileBindNum() const
{
    return m_mobileBindNum;
}

void DescribeLocalAccountsData::SetMobileBindNum(const int64_t& _mobileBindNum)
{
    m_mobileBindNum = _mobileBindNum;
    m_mobileBindNumHasBeenSet = true;
}

bool DescribeLocalAccountsData::MobileBindNumHasBeenSet() const
{
    return m_mobileBindNumHasBeenSet;
}

int64_t DescribeLocalAccountsData::GetPcBindNum() const
{
    return m_pcBindNum;
}

void DescribeLocalAccountsData::SetPcBindNum(const int64_t& _pcBindNum)
{
    m_pcBindNum = _pcBindNum;
    m_pcBindNumHasBeenSet = true;
}

bool DescribeLocalAccountsData::PcBindNumHasBeenSet() const
{
    return m_pcBindNumHasBeenSet;
}

int64_t DescribeLocalAccountsData::GetOnlineStatus() const
{
    return m_onlineStatus;
}

void DescribeLocalAccountsData::SetOnlineStatus(const int64_t& _onlineStatus)
{
    m_onlineStatus = _onlineStatus;
    m_onlineStatusHasBeenSet = true;
}

bool DescribeLocalAccountsData::OnlineStatusHasBeenSet() const
{
    return m_onlineStatusHasBeenSet;
}

int64_t DescribeLocalAccountsData::GetActiveStatus() const
{
    return m_activeStatus;
}

void DescribeLocalAccountsData::SetActiveStatus(const int64_t& _activeStatus)
{
    m_activeStatus = _activeStatus;
    m_activeStatusHasBeenSet = true;
}

bool DescribeLocalAccountsData::ActiveStatusHasBeenSet() const
{
    return m_activeStatusHasBeenSet;
}

string DescribeLocalAccountsData::GetLoginTime() const
{
    return m_loginTime;
}

void DescribeLocalAccountsData::SetLoginTime(const string& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool DescribeLocalAccountsData::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string DescribeLocalAccountsData::GetLogoutTime() const
{
    return m_logoutTime;
}

void DescribeLocalAccountsData::SetLogoutTime(const string& _logoutTime)
{
    m_logoutTime = _logoutTime;
    m_logoutTimeHasBeenSet = true;
}

bool DescribeLocalAccountsData::LogoutTimeHasBeenSet() const
{
    return m_logoutTimeHasBeenSet;
}

