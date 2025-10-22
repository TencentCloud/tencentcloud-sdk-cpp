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

#include <tencentcloud/csip/v20221121/model/AccessKeyUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AccessKeyUser::AccessKeyUser() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_adviceHasBeenSet(false),
    m_accessKeyAlarmListHasBeenSet(false),
    m_accessKeyRiskListHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_subNicknameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_loginIPHasBeenSet(false),
    m_loginLocationHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_iSPHasBeenSet(false),
    m_actionFlagHasBeenSet(false),
    m_loginFlagHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_cloudTypeHasBeenSet(false)
{
}

CoreInternalOutcome AccessKeyUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("Advice") && !value["Advice"].IsNull())
    {
        if (!value["Advice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.Advice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_advice = value["Advice"].GetInt64();
        m_adviceHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyAlarmList") && !value["AccessKeyAlarmList"].IsNull())
    {
        if (!value["AccessKeyAlarmList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.AccessKeyAlarmList` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessKeyAlarmList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessKeyAlarmInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessKeyAlarmList.push_back(item);
        }
        m_accessKeyAlarmListHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyRiskList") && !value["AccessKeyRiskList"].IsNull())
    {
        if (!value["AccessKeyRiskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.AccessKeyRiskList` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessKeyRiskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessKeyAlarmInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessKeyRiskList.push_back(item);
        }
        m_accessKeyRiskListHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("SubNickname") && !value["SubNickname"].IsNull())
    {
        if (!value["SubNickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.SubNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNickname = string(value["SubNickname"].GetString());
        m_subNicknameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("LoginIP") && !value["LoginIP"].IsNull())
    {
        if (!value["LoginIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.LoginIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginIP = string(value["LoginIP"].GetString());
        m_loginIPHasBeenSet = true;
    }

    if (value.HasMember("LoginLocation") && !value["LoginLocation"].IsNull())
    {
        if (!value["LoginLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.LoginLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginLocation = string(value["LoginLocation"].GetString());
        m_loginLocationHasBeenSet = true;
    }

    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.LoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = string(value["LoginTime"].GetString());
        m_loginTimeHasBeenSet = true;
    }

    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }

    if (value.HasMember("ActionFlag") && !value["ActionFlag"].IsNull())
    {
        if (!value["ActionFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.ActionFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionFlag = value["ActionFlag"].GetInt64();
        m_actionFlagHasBeenSet = true;
    }

    if (value.HasMember("LoginFlag") && !value["LoginFlag"].IsNull())
    {
        if (!value["LoginFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.LoginFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginFlag = value["LoginFlag"].GetInt64();
        m_loginFlagHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.CheckStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = value["CheckStatus"].GetInt64();
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyUser.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessKeyUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_adviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advice, allocator);
    }

    if (m_accessKeyAlarmListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyAlarmList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessKeyAlarmList.begin(); itr != m_accessKeyAlarmList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_accessKeyRiskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyRiskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessKeyRiskList.begin(); itr != m_accessKeyRiskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_subNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNickname.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginIP.c_str(), allocator).Move(), allocator);
    }

    if (m_loginLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

    if (m_actionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionFlag, allocator);
    }

    if (m_loginFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginFlag, allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkStatus, allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

}


uint64_t AccessKeyUser::GetID() const
{
    return m_iD;
}

void AccessKeyUser::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AccessKeyUser::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AccessKeyUser::GetName() const
{
    return m_name;
}

void AccessKeyUser::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AccessKeyUser::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AccessKeyUser::GetType() const
{
    return m_type;
}

void AccessKeyUser::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AccessKeyUser::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t AccessKeyUser::GetAccessType() const
{
    return m_accessType;
}

void AccessKeyUser::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool AccessKeyUser::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

int64_t AccessKeyUser::GetAdvice() const
{
    return m_advice;
}

void AccessKeyUser::SetAdvice(const int64_t& _advice)
{
    m_advice = _advice;
    m_adviceHasBeenSet = true;
}

bool AccessKeyUser::AdviceHasBeenSet() const
{
    return m_adviceHasBeenSet;
}

vector<AccessKeyAlarmInfo> AccessKeyUser::GetAccessKeyAlarmList() const
{
    return m_accessKeyAlarmList;
}

void AccessKeyUser::SetAccessKeyAlarmList(const vector<AccessKeyAlarmInfo>& _accessKeyAlarmList)
{
    m_accessKeyAlarmList = _accessKeyAlarmList;
    m_accessKeyAlarmListHasBeenSet = true;
}

bool AccessKeyUser::AccessKeyAlarmListHasBeenSet() const
{
    return m_accessKeyAlarmListHasBeenSet;
}

vector<AccessKeyAlarmInfo> AccessKeyUser::GetAccessKeyRiskList() const
{
    return m_accessKeyRiskList;
}

void AccessKeyUser::SetAccessKeyRiskList(const vector<AccessKeyAlarmInfo>& _accessKeyRiskList)
{
    m_accessKeyRiskList = _accessKeyRiskList;
    m_accessKeyRiskListHasBeenSet = true;
}

bool AccessKeyUser::AccessKeyRiskListHasBeenSet() const
{
    return m_accessKeyRiskListHasBeenSet;
}

int64_t AccessKeyUser::GetAppID() const
{
    return m_appID;
}

void AccessKeyUser::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AccessKeyUser::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string AccessKeyUser::GetNickname() const
{
    return m_nickname;
}

void AccessKeyUser::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool AccessKeyUser::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string AccessKeyUser::GetSubNickname() const
{
    return m_subNickname;
}

void AccessKeyUser::SetSubNickname(const string& _subNickname)
{
    m_subNickname = _subNickname;
    m_subNicknameHasBeenSet = true;
}

bool AccessKeyUser::SubNicknameHasBeenSet() const
{
    return m_subNicknameHasBeenSet;
}

string AccessKeyUser::GetUin() const
{
    return m_uin;
}

void AccessKeyUser::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AccessKeyUser::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AccessKeyUser::GetSubUin() const
{
    return m_subUin;
}

void AccessKeyUser::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool AccessKeyUser::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string AccessKeyUser::GetLoginIP() const
{
    return m_loginIP;
}

void AccessKeyUser::SetLoginIP(const string& _loginIP)
{
    m_loginIP = _loginIP;
    m_loginIPHasBeenSet = true;
}

bool AccessKeyUser::LoginIPHasBeenSet() const
{
    return m_loginIPHasBeenSet;
}

string AccessKeyUser::GetLoginLocation() const
{
    return m_loginLocation;
}

void AccessKeyUser::SetLoginLocation(const string& _loginLocation)
{
    m_loginLocation = _loginLocation;
    m_loginLocationHasBeenSet = true;
}

bool AccessKeyUser::LoginLocationHasBeenSet() const
{
    return m_loginLocationHasBeenSet;
}

string AccessKeyUser::GetLoginTime() const
{
    return m_loginTime;
}

void AccessKeyUser::SetLoginTime(const string& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool AccessKeyUser::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string AccessKeyUser::GetISP() const
{
    return m_iSP;
}

void AccessKeyUser::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool AccessKeyUser::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

int64_t AccessKeyUser::GetActionFlag() const
{
    return m_actionFlag;
}

void AccessKeyUser::SetActionFlag(const int64_t& _actionFlag)
{
    m_actionFlag = _actionFlag;
    m_actionFlagHasBeenSet = true;
}

bool AccessKeyUser::ActionFlagHasBeenSet() const
{
    return m_actionFlagHasBeenSet;
}

int64_t AccessKeyUser::GetLoginFlag() const
{
    return m_loginFlag;
}

void AccessKeyUser::SetLoginFlag(const int64_t& _loginFlag)
{
    m_loginFlag = _loginFlag;
    m_loginFlagHasBeenSet = true;
}

bool AccessKeyUser::LoginFlagHasBeenSet() const
{
    return m_loginFlagHasBeenSet;
}

int64_t AccessKeyUser::GetCheckStatus() const
{
    return m_checkStatus;
}

void AccessKeyUser::SetCheckStatus(const int64_t& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool AccessKeyUser::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

int64_t AccessKeyUser::GetCloudType() const
{
    return m_cloudType;
}

void AccessKeyUser::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool AccessKeyUser::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

