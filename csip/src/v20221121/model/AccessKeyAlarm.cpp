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

#include <tencentcloud/csip/v20221121/model/AccessKeyAlarm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AccessKeyAlarm::AccessKeyAlarm() :
    m_nameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_alarmRuleIDHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_accessKeyIDHasBeenSet(false),
    m_accessKeyRemarkHasBeenSet(false),
    m_lastAlarmTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_subNicknameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_leakEvidenceHasBeenSet(false),
    m_isSupportEditWhiteAccountHasBeenSet(false),
    m_evidenceHasBeenSet(false),
    m_ruleKeyHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_aIStatusHasBeenSet(false),
    m_firstAlarmTimestampHasBeenSet(false),
    m_lastAlarmTimestampHasBeenSet(false)
{
}

CoreInternalOutcome AccessKeyAlarm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AlarmRuleID") && !value["AlarmRuleID"].IsNull())
    {
        if (!value["AlarmRuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.AlarmRuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRuleID = value["AlarmRuleID"].GetInt64();
        m_alarmRuleIDHasBeenSet = true;
    }

    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.AlarmType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = value["AlarmType"].GetInt64();
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyID") && !value["AccessKeyID"].IsNull())
    {
        if (!value["AccessKeyID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.AccessKeyID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyID = value["AccessKeyID"].GetUint64();
        m_accessKeyIDHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyRemark") && !value["AccessKeyRemark"].IsNull())
    {
        if (!value["AccessKeyRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.AccessKeyRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyRemark = string(value["AccessKeyRemark"].GetString());
        m_accessKeyRemarkHasBeenSet = true;
    }

    if (value.HasMember("LastAlarmTime") && !value["LastAlarmTime"].IsNull())
    {
        if (!value["LastAlarmTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.LastAlarmTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAlarmTime = string(value["LastAlarmTime"].GetString());
        m_lastAlarmTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tag.push_back((*itr).GetString());
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubNickname") && !value["SubNickname"].IsNull())
    {
        if (!value["SubNickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.SubNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNickname = string(value["SubNickname"].GetString());
        m_subNicknameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("LeakEvidence") && !value["LeakEvidence"].IsNull())
    {
        if (!value["LeakEvidence"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.LeakEvidence` is not array type"));

        const rapidjson::Value &tmpValue = value["LeakEvidence"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_leakEvidence.push_back((*itr).GetString());
        }
        m_leakEvidenceHasBeenSet = true;
    }

    if (value.HasMember("IsSupportEditWhiteAccount") && !value["IsSupportEditWhiteAccount"].IsNull())
    {
        if (!value["IsSupportEditWhiteAccount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.IsSupportEditWhiteAccount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportEditWhiteAccount = value["IsSupportEditWhiteAccount"].GetBool();
        m_isSupportEditWhiteAccountHasBeenSet = true;
    }

    if (value.HasMember("Evidence") && !value["Evidence"].IsNull())
    {
        if (!value["Evidence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.Evidence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidence = string(value["Evidence"].GetString());
        m_evidenceHasBeenSet = true;
    }

    if (value.HasMember("RuleKey") && !value["RuleKey"].IsNull())
    {
        if (!value["RuleKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.RuleKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleKey = string(value["RuleKey"].GetString());
        m_ruleKeyHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("AIStatus") && !value["AIStatus"].IsNull())
    {
        if (!value["AIStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.AIStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aIStatus = value["AIStatus"].GetInt64();
        m_aIStatusHasBeenSet = true;
    }

    if (value.HasMember("FirstAlarmTimestamp") && !value["FirstAlarmTimestamp"].IsNull())
    {
        if (!value["FirstAlarmTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.FirstAlarmTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstAlarmTimestamp = value["FirstAlarmTimestamp"].GetInt64();
        m_firstAlarmTimestampHasBeenSet = true;
    }

    if (value.HasMember("LastAlarmTimestamp") && !value["LastAlarmTimestamp"].IsNull())
    {
        if (!value["LastAlarmTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarm.LastAlarmTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastAlarmTimestamp = value["LastAlarmTimestamp"].GetInt64();
        m_lastAlarmTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessKeyAlarm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_alarmRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmRuleID, allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmType, allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessKeyID, allocator);
    }

    if (m_accessKeyRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKeyRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAlarmTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAlarmTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAlarmTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_leakEvidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakEvidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_leakEvidence.begin(); itr != m_leakEvidence.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isSupportEditWhiteAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportEditWhiteAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportEditWhiteAccount, allocator);
    }

    if (m_evidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Evidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidence.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleKey.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

    if (m_aIStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aIStatus, allocator);
    }

    if (m_firstAlarmTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstAlarmTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstAlarmTimestamp, allocator);
    }

    if (m_lastAlarmTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAlarmTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastAlarmTimestamp, allocator);
    }

}


string AccessKeyAlarm::GetName() const
{
    return m_name;
}

void AccessKeyAlarm::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AccessKeyAlarm::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AccessKeyAlarm::GetLevel() const
{
    return m_level;
}

void AccessKeyAlarm::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AccessKeyAlarm::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t AccessKeyAlarm::GetID() const
{
    return m_iD;
}

void AccessKeyAlarm::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AccessKeyAlarm::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t AccessKeyAlarm::GetAlarmRuleID() const
{
    return m_alarmRuleID;
}

void AccessKeyAlarm::SetAlarmRuleID(const int64_t& _alarmRuleID)
{
    m_alarmRuleID = _alarmRuleID;
    m_alarmRuleIDHasBeenSet = true;
}

bool AccessKeyAlarm::AlarmRuleIDHasBeenSet() const
{
    return m_alarmRuleIDHasBeenSet;
}

int64_t AccessKeyAlarm::GetAlarmType() const
{
    return m_alarmType;
}

void AccessKeyAlarm::SetAlarmType(const int64_t& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool AccessKeyAlarm::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

string AccessKeyAlarm::GetAccessKey() const
{
    return m_accessKey;
}

void AccessKeyAlarm::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool AccessKeyAlarm::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

uint64_t AccessKeyAlarm::GetAccessKeyID() const
{
    return m_accessKeyID;
}

void AccessKeyAlarm::SetAccessKeyID(const uint64_t& _accessKeyID)
{
    m_accessKeyID = _accessKeyID;
    m_accessKeyIDHasBeenSet = true;
}

bool AccessKeyAlarm::AccessKeyIDHasBeenSet() const
{
    return m_accessKeyIDHasBeenSet;
}

string AccessKeyAlarm::GetAccessKeyRemark() const
{
    return m_accessKeyRemark;
}

void AccessKeyAlarm::SetAccessKeyRemark(const string& _accessKeyRemark)
{
    m_accessKeyRemark = _accessKeyRemark;
    m_accessKeyRemarkHasBeenSet = true;
}

bool AccessKeyAlarm::AccessKeyRemarkHasBeenSet() const
{
    return m_accessKeyRemarkHasBeenSet;
}

string AccessKeyAlarm::GetLastAlarmTime() const
{
    return m_lastAlarmTime;
}

void AccessKeyAlarm::SetLastAlarmTime(const string& _lastAlarmTime)
{
    m_lastAlarmTime = _lastAlarmTime;
    m_lastAlarmTimeHasBeenSet = true;
}

bool AccessKeyAlarm::LastAlarmTimeHasBeenSet() const
{
    return m_lastAlarmTimeHasBeenSet;
}

int64_t AccessKeyAlarm::GetStatus() const
{
    return m_status;
}

void AccessKeyAlarm::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AccessKeyAlarm::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AccessKeyAlarm::GetDate() const
{
    return m_date;
}

void AccessKeyAlarm::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool AccessKeyAlarm::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

vector<string> AccessKeyAlarm::GetTag() const
{
    return m_tag;
}

void AccessKeyAlarm::SetTag(const vector<string>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AccessKeyAlarm::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AccessKeyAlarm::GetUin() const
{
    return m_uin;
}

void AccessKeyAlarm::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AccessKeyAlarm::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AccessKeyAlarm::GetNickname() const
{
    return m_nickname;
}

void AccessKeyAlarm::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool AccessKeyAlarm::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string AccessKeyAlarm::GetSubUin() const
{
    return m_subUin;
}

void AccessKeyAlarm::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool AccessKeyAlarm::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string AccessKeyAlarm::GetSubNickname() const
{
    return m_subNickname;
}

void AccessKeyAlarm::SetSubNickname(const string& _subNickname)
{
    m_subNickname = _subNickname;
    m_subNicknameHasBeenSet = true;
}

bool AccessKeyAlarm::SubNicknameHasBeenSet() const
{
    return m_subNicknameHasBeenSet;
}

int64_t AccessKeyAlarm::GetType() const
{
    return m_type;
}

void AccessKeyAlarm::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AccessKeyAlarm::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t AccessKeyAlarm::GetAppID() const
{
    return m_appID;
}

void AccessKeyAlarm::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AccessKeyAlarm::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

vector<string> AccessKeyAlarm::GetLeakEvidence() const
{
    return m_leakEvidence;
}

void AccessKeyAlarm::SetLeakEvidence(const vector<string>& _leakEvidence)
{
    m_leakEvidence = _leakEvidence;
    m_leakEvidenceHasBeenSet = true;
}

bool AccessKeyAlarm::LeakEvidenceHasBeenSet() const
{
    return m_leakEvidenceHasBeenSet;
}

bool AccessKeyAlarm::GetIsSupportEditWhiteAccount() const
{
    return m_isSupportEditWhiteAccount;
}

void AccessKeyAlarm::SetIsSupportEditWhiteAccount(const bool& _isSupportEditWhiteAccount)
{
    m_isSupportEditWhiteAccount = _isSupportEditWhiteAccount;
    m_isSupportEditWhiteAccountHasBeenSet = true;
}

bool AccessKeyAlarm::IsSupportEditWhiteAccountHasBeenSet() const
{
    return m_isSupportEditWhiteAccountHasBeenSet;
}

string AccessKeyAlarm::GetEvidence() const
{
    return m_evidence;
}

void AccessKeyAlarm::SetEvidence(const string& _evidence)
{
    m_evidence = _evidence;
    m_evidenceHasBeenSet = true;
}

bool AccessKeyAlarm::EvidenceHasBeenSet() const
{
    return m_evidenceHasBeenSet;
}

string AccessKeyAlarm::GetRuleKey() const
{
    return m_ruleKey;
}

void AccessKeyAlarm::SetRuleKey(const string& _ruleKey)
{
    m_ruleKey = _ruleKey;
    m_ruleKeyHasBeenSet = true;
}

bool AccessKeyAlarm::RuleKeyHasBeenSet() const
{
    return m_ruleKeyHasBeenSet;
}

int64_t AccessKeyAlarm::GetCloudType() const
{
    return m_cloudType;
}

void AccessKeyAlarm::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool AccessKeyAlarm::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

int64_t AccessKeyAlarm::GetAIStatus() const
{
    return m_aIStatus;
}

void AccessKeyAlarm::SetAIStatus(const int64_t& _aIStatus)
{
    m_aIStatus = _aIStatus;
    m_aIStatusHasBeenSet = true;
}

bool AccessKeyAlarm::AIStatusHasBeenSet() const
{
    return m_aIStatusHasBeenSet;
}

int64_t AccessKeyAlarm::GetFirstAlarmTimestamp() const
{
    return m_firstAlarmTimestamp;
}

void AccessKeyAlarm::SetFirstAlarmTimestamp(const int64_t& _firstAlarmTimestamp)
{
    m_firstAlarmTimestamp = _firstAlarmTimestamp;
    m_firstAlarmTimestampHasBeenSet = true;
}

bool AccessKeyAlarm::FirstAlarmTimestampHasBeenSet() const
{
    return m_firstAlarmTimestampHasBeenSet;
}

int64_t AccessKeyAlarm::GetLastAlarmTimestamp() const
{
    return m_lastAlarmTimestamp;
}

void AccessKeyAlarm::SetLastAlarmTimestamp(const int64_t& _lastAlarmTimestamp)
{
    m_lastAlarmTimestamp = _lastAlarmTimestamp;
    m_lastAlarmTimestampHasBeenSet = true;
}

bool AccessKeyAlarm::LastAlarmTimestampHasBeenSet() const
{
    return m_lastAlarmTimestampHasBeenSet;
}

