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

#include <tencentcloud/csip/v20221121/model/AccessKeyAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AccessKeyAsset::AccessKeyAsset() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_subNicknameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_adviceHasBeenSet(false),
    m_accessKeyAlarmListHasBeenSet(false),
    m_accessKeyRiskListHasBeenSet(false),
    m_iPCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_cloudTypeHasBeenSet(false)
{
}

CoreInternalOutcome AccessKeyAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubNickname") && !value["SubNickname"].IsNull())
    {
        if (!value["SubNickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.SubNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNickname = string(value["SubNickname"].GetString());
        m_subNicknameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Advice") && !value["Advice"].IsNull())
    {
        if (!value["Advice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.Advice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_advice = value["Advice"].GetInt64();
        m_adviceHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyAlarmList") && !value["AccessKeyAlarmList"].IsNull())
    {
        if (!value["AccessKeyAlarmList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.AccessKeyAlarmList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.AccessKeyRiskList` is not array type"));

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

    if (value.HasMember("IPCount") && !value["IPCount"].IsNull())
    {
        if (!value["IPCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.IPCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iPCount = value["IPCount"].GetInt64();
        m_iPCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTime") && !value["LastAccessTime"].IsNull())
    {
        if (!value["LastAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.LastAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTime = string(value["LastAccessTime"].GetString());
        m_lastAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.CheckStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = value["CheckStatus"].GetInt64();
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAsset.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessKeyAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNickname.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
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

    if (m_iPCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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


uint64_t AccessKeyAsset::GetID() const
{
    return m_iD;
}

void AccessKeyAsset::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AccessKeyAsset::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AccessKeyAsset::GetName() const
{
    return m_name;
}

void AccessKeyAsset::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AccessKeyAsset::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AccessKeyAsset::GetRemark() const
{
    return m_remark;
}

void AccessKeyAsset::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AccessKeyAsset::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t AccessKeyAsset::GetAppID() const
{
    return m_appID;
}

void AccessKeyAsset::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AccessKeyAsset::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string AccessKeyAsset::GetUin() const
{
    return m_uin;
}

void AccessKeyAsset::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AccessKeyAsset::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AccessKeyAsset::GetNickname() const
{
    return m_nickname;
}

void AccessKeyAsset::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool AccessKeyAsset::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string AccessKeyAsset::GetSubUin() const
{
    return m_subUin;
}

void AccessKeyAsset::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool AccessKeyAsset::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string AccessKeyAsset::GetSubNickname() const
{
    return m_subNickname;
}

void AccessKeyAsset::SetSubNickname(const string& _subNickname)
{
    m_subNickname = _subNickname;
    m_subNicknameHasBeenSet = true;
}

bool AccessKeyAsset::SubNicknameHasBeenSet() const
{
    return m_subNicknameHasBeenSet;
}

int64_t AccessKeyAsset::GetType() const
{
    return m_type;
}

void AccessKeyAsset::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AccessKeyAsset::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t AccessKeyAsset::GetAdvice() const
{
    return m_advice;
}

void AccessKeyAsset::SetAdvice(const int64_t& _advice)
{
    m_advice = _advice;
    m_adviceHasBeenSet = true;
}

bool AccessKeyAsset::AdviceHasBeenSet() const
{
    return m_adviceHasBeenSet;
}

vector<AccessKeyAlarmInfo> AccessKeyAsset::GetAccessKeyAlarmList() const
{
    return m_accessKeyAlarmList;
}

void AccessKeyAsset::SetAccessKeyAlarmList(const vector<AccessKeyAlarmInfo>& _accessKeyAlarmList)
{
    m_accessKeyAlarmList = _accessKeyAlarmList;
    m_accessKeyAlarmListHasBeenSet = true;
}

bool AccessKeyAsset::AccessKeyAlarmListHasBeenSet() const
{
    return m_accessKeyAlarmListHasBeenSet;
}

vector<AccessKeyAlarmInfo> AccessKeyAsset::GetAccessKeyRiskList() const
{
    return m_accessKeyRiskList;
}

void AccessKeyAsset::SetAccessKeyRiskList(const vector<AccessKeyAlarmInfo>& _accessKeyRiskList)
{
    m_accessKeyRiskList = _accessKeyRiskList;
    m_accessKeyRiskListHasBeenSet = true;
}

bool AccessKeyAsset::AccessKeyRiskListHasBeenSet() const
{
    return m_accessKeyRiskListHasBeenSet;
}

int64_t AccessKeyAsset::GetIPCount() const
{
    return m_iPCount;
}

void AccessKeyAsset::SetIPCount(const int64_t& _iPCount)
{
    m_iPCount = _iPCount;
    m_iPCountHasBeenSet = true;
}

bool AccessKeyAsset::IPCountHasBeenSet() const
{
    return m_iPCountHasBeenSet;
}

string AccessKeyAsset::GetCreateTime() const
{
    return m_createTime;
}

void AccessKeyAsset::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AccessKeyAsset::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AccessKeyAsset::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

void AccessKeyAsset::SetLastAccessTime(const string& _lastAccessTime)
{
    m_lastAccessTime = _lastAccessTime;
    m_lastAccessTimeHasBeenSet = true;
}

bool AccessKeyAsset::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

int64_t AccessKeyAsset::GetStatus() const
{
    return m_status;
}

void AccessKeyAsset::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AccessKeyAsset::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AccessKeyAsset::GetCheckStatus() const
{
    return m_checkStatus;
}

void AccessKeyAsset::SetCheckStatus(const int64_t& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool AccessKeyAsset::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

int64_t AccessKeyAsset::GetCloudType() const
{
    return m_cloudType;
}

void AccessKeyAsset::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool AccessKeyAsset::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

