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

#include <tencentcloud/csip/v20221121/model/AccessKeyWhiteList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AccessKeyWhiteList::AccessKeyWhiteList() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aKListHasBeenSet(false),
    m_iPListHasBeenSet(false),
    m_iPTypeListHasBeenSet(false),
    m_actionListHasBeenSet(false),
    m_callTypeHasBeenSet(false),
    m_errorCodeListHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_akImportTypeHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_needDealPastAlarmHasBeenSet(false),
    m_dealStatusHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_alarmPolicyIDHasBeenSet(false)
{
}

CoreInternalOutcome AccessKeyWhiteList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AKList") && !value["AKList"].IsNull())
    {
        if (!value["AKList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.AKList` is not array type"));

        const rapidjson::Value &tmpValue = value["AKList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aKList.push_back((*itr).GetString());
        }
        m_aKListHasBeenSet = true;
    }

    if (value.HasMember("IPList") && !value["IPList"].IsNull())
    {
        if (!value["IPList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.IPList` is not array type"));

        const rapidjson::Value &tmpValue = value["IPList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPList.push_back((*itr).GetString());
        }
        m_iPListHasBeenSet = true;
    }

    if (value.HasMember("IPTypeList") && !value["IPTypeList"].IsNull())
    {
        if (!value["IPTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.IPTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["IPTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPTypeList.push_back((*itr).GetInt64());
        }
        m_iPTypeListHasBeenSet = true;
    }

    if (value.HasMember("ActionList") && !value["ActionList"].IsNull())
    {
        if (!value["ActionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.ActionList` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actionList.push_back((*itr).GetString());
        }
        m_actionListHasBeenSet = true;
    }

    if (value.HasMember("CallType") && !value["CallType"].IsNull())
    {
        if (!value["CallType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.CallType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callType = value["CallType"].GetInt64();
        m_callTypeHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeList") && !value["ErrorCodeList"].IsNull())
    {
        if (!value["ErrorCodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.ErrorCodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorCodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorCodeList.push_back((*itr).GetInt64());
        }
        m_errorCodeListHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AkImportType") && !value["AkImportType"].IsNull())
    {
        if (!value["AkImportType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.AkImportType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_akImportType = value["AkImportType"].GetInt64();
        m_akImportTypeHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("NeedDealPastAlarm") && !value["NeedDealPastAlarm"].IsNull())
    {
        if (!value["NeedDealPastAlarm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.NeedDealPastAlarm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needDealPastAlarm = value["NeedDealPastAlarm"].GetBool();
        m_needDealPastAlarmHasBeenSet = true;
    }

    if (value.HasMember("DealStatus") && !value["DealStatus"].IsNull())
    {
        if (!value["DealStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.DealStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dealStatus = value["DealStatus"].GetInt64();
        m_dealStatusHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.ActionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = value["ActionType"].GetInt64();
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmPolicyID") && !value["AlarmPolicyID"].IsNull())
    {
        if (!value["AlarmPolicyID"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyWhiteList.AlarmPolicyID` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmPolicyID"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmPolicyID.push_back((*itr).GetInt64());
        }
        m_alarmPolicyIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessKeyWhiteList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_aKListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AKList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aKList.begin(); itr != m_aKList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPList.begin(); itr != m_iPList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iPTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPTypeList.begin(); itr != m_iPTypeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_actionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionList.begin(); itr != m_actionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callType, allocator);
    }

    if (m_errorCodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorCodeList.begin(); itr != m_errorCodeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_akImportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkImportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_akImportType, allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_needDealPastAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDealPastAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needDealPastAlarm, allocator);
    }

    if (m_dealStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dealStatus, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionType, allocator);
    }

    if (m_alarmPolicyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmPolicyID.begin(); itr != m_alarmPolicyID.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t AccessKeyWhiteList::GetID() const
{
    return m_iD;
}

void AccessKeyWhiteList::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AccessKeyWhiteList::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AccessKeyWhiteList::GetName() const
{
    return m_name;
}

void AccessKeyWhiteList::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AccessKeyWhiteList::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> AccessKeyWhiteList::GetAKList() const
{
    return m_aKList;
}

void AccessKeyWhiteList::SetAKList(const vector<string>& _aKList)
{
    m_aKList = _aKList;
    m_aKListHasBeenSet = true;
}

bool AccessKeyWhiteList::AKListHasBeenSet() const
{
    return m_aKListHasBeenSet;
}

vector<string> AccessKeyWhiteList::GetIPList() const
{
    return m_iPList;
}

void AccessKeyWhiteList::SetIPList(const vector<string>& _iPList)
{
    m_iPList = _iPList;
    m_iPListHasBeenSet = true;
}

bool AccessKeyWhiteList::IPListHasBeenSet() const
{
    return m_iPListHasBeenSet;
}

vector<int64_t> AccessKeyWhiteList::GetIPTypeList() const
{
    return m_iPTypeList;
}

void AccessKeyWhiteList::SetIPTypeList(const vector<int64_t>& _iPTypeList)
{
    m_iPTypeList = _iPTypeList;
    m_iPTypeListHasBeenSet = true;
}

bool AccessKeyWhiteList::IPTypeListHasBeenSet() const
{
    return m_iPTypeListHasBeenSet;
}

vector<string> AccessKeyWhiteList::GetActionList() const
{
    return m_actionList;
}

void AccessKeyWhiteList::SetActionList(const vector<string>& _actionList)
{
    m_actionList = _actionList;
    m_actionListHasBeenSet = true;
}

bool AccessKeyWhiteList::ActionListHasBeenSet() const
{
    return m_actionListHasBeenSet;
}

int64_t AccessKeyWhiteList::GetCallType() const
{
    return m_callType;
}

void AccessKeyWhiteList::SetCallType(const int64_t& _callType)
{
    m_callType = _callType;
    m_callTypeHasBeenSet = true;
}

bool AccessKeyWhiteList::CallTypeHasBeenSet() const
{
    return m_callTypeHasBeenSet;
}

vector<int64_t> AccessKeyWhiteList::GetErrorCodeList() const
{
    return m_errorCodeList;
}

void AccessKeyWhiteList::SetErrorCodeList(const vector<int64_t>& _errorCodeList)
{
    m_errorCodeList = _errorCodeList;
    m_errorCodeListHasBeenSet = true;
}

bool AccessKeyWhiteList::ErrorCodeListHasBeenSet() const
{
    return m_errorCodeListHasBeenSet;
}

string AccessKeyWhiteList::GetRemark() const
{
    return m_remark;
}

void AccessKeyWhiteList::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AccessKeyWhiteList::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AccessKeyWhiteList::GetCreateTime() const
{
    return m_createTime;
}

void AccessKeyWhiteList::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AccessKeyWhiteList::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AccessKeyWhiteList::GetUpdateTime() const
{
    return m_updateTime;
}

void AccessKeyWhiteList::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AccessKeyWhiteList::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t AccessKeyWhiteList::GetAkImportType() const
{
    return m_akImportType;
}

void AccessKeyWhiteList::SetAkImportType(const int64_t& _akImportType)
{
    m_akImportType = _akImportType;
    m_akImportTypeHasBeenSet = true;
}

bool AccessKeyWhiteList::AkImportTypeHasBeenSet() const
{
    return m_akImportTypeHasBeenSet;
}

uint64_t AccessKeyWhiteList::GetAppID() const
{
    return m_appID;
}

void AccessKeyWhiteList::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AccessKeyWhiteList::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string AccessKeyWhiteList::GetUin() const
{
    return m_uin;
}

void AccessKeyWhiteList::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AccessKeyWhiteList::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AccessKeyWhiteList::GetNickname() const
{
    return m_nickname;
}

void AccessKeyWhiteList::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool AccessKeyWhiteList::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

bool AccessKeyWhiteList::GetNeedDealPastAlarm() const
{
    return m_needDealPastAlarm;
}

void AccessKeyWhiteList::SetNeedDealPastAlarm(const bool& _needDealPastAlarm)
{
    m_needDealPastAlarm = _needDealPastAlarm;
    m_needDealPastAlarmHasBeenSet = true;
}

bool AccessKeyWhiteList::NeedDealPastAlarmHasBeenSet() const
{
    return m_needDealPastAlarmHasBeenSet;
}

int64_t AccessKeyWhiteList::GetDealStatus() const
{
    return m_dealStatus;
}

void AccessKeyWhiteList::SetDealStatus(const int64_t& _dealStatus)
{
    m_dealStatus = _dealStatus;
    m_dealStatusHasBeenSet = true;
}

bool AccessKeyWhiteList::DealStatusHasBeenSet() const
{
    return m_dealStatusHasBeenSet;
}

int64_t AccessKeyWhiteList::GetActionType() const
{
    return m_actionType;
}

void AccessKeyWhiteList::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AccessKeyWhiteList::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

vector<int64_t> AccessKeyWhiteList::GetAlarmPolicyID() const
{
    return m_alarmPolicyID;
}

void AccessKeyWhiteList::SetAlarmPolicyID(const vector<int64_t>& _alarmPolicyID)
{
    m_alarmPolicyID = _alarmPolicyID;
    m_alarmPolicyIDHasBeenSet = true;
}

bool AccessKeyWhiteList::AlarmPolicyIDHasBeenSet() const
{
    return m_alarmPolicyIDHasBeenSet;
}

