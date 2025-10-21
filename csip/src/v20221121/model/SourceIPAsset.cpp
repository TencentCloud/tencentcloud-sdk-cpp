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

#include <tencentcloud/csip/v20221121/model/SourceIPAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SourceIPAsset::SourceIPAsset() :
    m_iDHasBeenSet(false),
    m_sourceIPHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_iPTypeHasBeenSet(false),
    m_accessKeyAlarmListHasBeenSet(false),
    m_aKInfoHasBeenSet(false),
    m_actionCountHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_showStatusHasBeenSet(false),
    m_iSPHasBeenSet(false),
    m_vpcInfoHasBeenSet(false),
    m_cloudTypeHasBeenSet(false)
{
}

CoreInternalOutcome SourceIPAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("SourceIP") && !value["SourceIP"].IsNull())
    {
        if (!value["SourceIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.SourceIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIP = string(value["SourceIP"].GetString());
        m_sourceIPHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("IPType") && !value["IPType"].IsNull())
    {
        if (!value["IPType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.IPType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iPType = value["IPType"].GetInt64();
        m_iPTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyAlarmList") && !value["AccessKeyAlarmList"].IsNull())
    {
        if (!value["AccessKeyAlarmList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.AccessKeyAlarmList` is not array type"));

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

    if (value.HasMember("AKInfo") && !value["AKInfo"].IsNull())
    {
        if (!value["AKInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.AKInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["AKInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AKInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aKInfo.push_back(item);
        }
        m_aKInfoHasBeenSet = true;
    }

    if (value.HasMember("ActionCount") && !value["ActionCount"].IsNull())
    {
        if (!value["ActionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.ActionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionCount = value["ActionCount"].GetInt64();
        m_actionCountHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTime") && !value["LastAccessTime"].IsNull())
    {
        if (!value["LastAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.LastAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTime = string(value["LastAccessTime"].GetString());
        m_lastAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("ShowStatus") && !value["ShowStatus"].IsNull())
    {
        if (!value["ShowStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.ShowStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showStatus = value["ShowStatus"].GetBool();
        m_showStatusHasBeenSet = true;
    }

    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }

    if (value.HasMember("VpcInfo") && !value["VpcInfo"].IsNull())
    {
        if (!value["VpcInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.VpcInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SourceIPVpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcInfo.push_back(item);
        }
        m_vpcInfoHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPAsset.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceIPAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_sourceIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIP.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_iPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPType, allocator);
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

    if (m_aKInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AKInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aKInfo.begin(); itr != m_aKInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionCount, allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_showStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showStatus, allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfo.begin(); itr != m_vpcInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

}


uint64_t SourceIPAsset::GetID() const
{
    return m_iD;
}

void SourceIPAsset::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool SourceIPAsset::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string SourceIPAsset::GetSourceIP() const
{
    return m_sourceIP;
}

void SourceIPAsset::SetSourceIP(const string& _sourceIP)
{
    m_sourceIP = _sourceIP;
    m_sourceIPHasBeenSet = true;
}

bool SourceIPAsset::SourceIPHasBeenSet() const
{
    return m_sourceIPHasBeenSet;
}

string SourceIPAsset::GetRemark() const
{
    return m_remark;
}

void SourceIPAsset::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SourceIPAsset::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t SourceIPAsset::GetAppID() const
{
    return m_appID;
}

void SourceIPAsset::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool SourceIPAsset::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string SourceIPAsset::GetRegion() const
{
    return m_region;
}

void SourceIPAsset::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SourceIPAsset::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t SourceIPAsset::GetEventType() const
{
    return m_eventType;
}

void SourceIPAsset::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool SourceIPAsset::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

int64_t SourceIPAsset::GetIPType() const
{
    return m_iPType;
}

void SourceIPAsset::SetIPType(const int64_t& _iPType)
{
    m_iPType = _iPType;
    m_iPTypeHasBeenSet = true;
}

bool SourceIPAsset::IPTypeHasBeenSet() const
{
    return m_iPTypeHasBeenSet;
}

vector<AccessKeyAlarmInfo> SourceIPAsset::GetAccessKeyAlarmList() const
{
    return m_accessKeyAlarmList;
}

void SourceIPAsset::SetAccessKeyAlarmList(const vector<AccessKeyAlarmInfo>& _accessKeyAlarmList)
{
    m_accessKeyAlarmList = _accessKeyAlarmList;
    m_accessKeyAlarmListHasBeenSet = true;
}

bool SourceIPAsset::AccessKeyAlarmListHasBeenSet() const
{
    return m_accessKeyAlarmListHasBeenSet;
}

vector<AKInfo> SourceIPAsset::GetAKInfo() const
{
    return m_aKInfo;
}

void SourceIPAsset::SetAKInfo(const vector<AKInfo>& _aKInfo)
{
    m_aKInfo = _aKInfo;
    m_aKInfoHasBeenSet = true;
}

bool SourceIPAsset::AKInfoHasBeenSet() const
{
    return m_aKInfoHasBeenSet;
}

int64_t SourceIPAsset::GetActionCount() const
{
    return m_actionCount;
}

void SourceIPAsset::SetActionCount(const int64_t& _actionCount)
{
    m_actionCount = _actionCount;
    m_actionCountHasBeenSet = true;
}

bool SourceIPAsset::ActionCountHasBeenSet() const
{
    return m_actionCountHasBeenSet;
}

string SourceIPAsset::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

void SourceIPAsset::SetLastAccessTime(const string& _lastAccessTime)
{
    m_lastAccessTime = _lastAccessTime;
    m_lastAccessTimeHasBeenSet = true;
}

bool SourceIPAsset::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

string SourceIPAsset::GetInstanceID() const
{
    return m_instanceID;
}

void SourceIPAsset::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool SourceIPAsset::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string SourceIPAsset::GetInstanceName() const
{
    return m_instanceName;
}

void SourceIPAsset::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool SourceIPAsset::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string SourceIPAsset::GetUin() const
{
    return m_uin;
}

void SourceIPAsset::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SourceIPAsset::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SourceIPAsset::GetNickname() const
{
    return m_nickname;
}

void SourceIPAsset::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool SourceIPAsset::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

bool SourceIPAsset::GetShowStatus() const
{
    return m_showStatus;
}

void SourceIPAsset::SetShowStatus(const bool& _showStatus)
{
    m_showStatus = _showStatus;
    m_showStatusHasBeenSet = true;
}

bool SourceIPAsset::ShowStatusHasBeenSet() const
{
    return m_showStatusHasBeenSet;
}

string SourceIPAsset::GetISP() const
{
    return m_iSP;
}

void SourceIPAsset::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool SourceIPAsset::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

vector<SourceIPVpcInfo> SourceIPAsset::GetVpcInfo() const
{
    return m_vpcInfo;
}

void SourceIPAsset::SetVpcInfo(const vector<SourceIPVpcInfo>& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool SourceIPAsset::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}

int64_t SourceIPAsset::GetCloudType() const
{
    return m_cloudType;
}

void SourceIPAsset::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool SourceIPAsset::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

