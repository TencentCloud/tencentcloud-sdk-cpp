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

#include <tencentcloud/csip/v20221121/model/VULBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VULBaseInfo::VULBaseInfo() :
    m_levelHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_affectAssetCountHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_vULTypeHasBeenSet(false),
    m_vULNameHasBeenSet(false),
    m_cVEHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_vULURLHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_fixHasBeenSet(false),
    m_eMGCVulTypeHasBeenSet(false),
    m_cVSSHasBeenSet(false),
    m_attackHeatHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_isSuggestHasBeenSet(false),
    m_vulTagHasBeenSet(false),
    m_supportProductHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_pcmgrIDHasBeenSet(false),
    m_tvdIDHasBeenSet(false)
{
}

CoreInternalOutcome VULBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("AffectAssetCount") && !value["AffectAssetCount"].IsNull())
    {
        if (!value["AffectAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.AffectAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectAssetCount = value["AffectAssetCount"].GetUint64();
        m_affectAssetCountHasBeenSet = true;
    }

    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(value["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("VULType") && !value["VULType"].IsNull())
    {
        if (!value["VULType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.VULType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULType = string(value["VULType"].GetString());
        m_vULTypeHasBeenSet = true;
    }

    if (value.HasMember("VULName") && !value["VULName"].IsNull())
    {
        if (!value["VULName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.VULName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULName = string(value["VULName"].GetString());
        m_vULNameHasBeenSet = true;
    }

    if (value.HasMember("CVE") && !value["CVE"].IsNull())
    {
        if (!value["CVE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.CVE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVE = string(value["CVE"].GetString());
        m_cVEHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.References` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_references = string(value["References"].GetString());
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("VULURL") && !value["VULURL"].IsNull())
    {
        if (!value["VULURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.VULURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULURL = string(value["VULURL"].GetString());
        m_vULURLHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("EMGCVulType") && !value["EMGCVulType"].IsNull())
    {
        if (!value["EMGCVulType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.EMGCVulType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eMGCVulType = value["EMGCVulType"].GetInt64();
        m_eMGCVulTypeHasBeenSet = true;
    }

    if (value.HasMember("CVSS") && !value["CVSS"].IsNull())
    {
        if (!value["CVSS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.CVSS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSS = value["CVSS"].GetDouble();
        m_cVSSHasBeenSet = true;
    }

    if (value.HasMember("AttackHeat") && !value["AttackHeat"].IsNull())
    {
        if (!value["AttackHeat"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.AttackHeat` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackHeat = value["AttackHeat"].GetInt64();
        m_attackHeatHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.ScanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = value["ScanStatus"].GetInt64();
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("IsSuggest") && !value["IsSuggest"].IsNull())
    {
        if (!value["IsSuggest"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.IsSuggest` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSuggest = value["IsSuggest"].GetInt64();
        m_isSuggestHasBeenSet = true;
    }

    if (value.HasMember("VulTag") && !value["VulTag"].IsNull())
    {
        if (!value["VulTag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.VulTag` is not array type"));

        const rapidjson::Value &tmpValue = value["VulTag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulTag.push_back((*itr).GetString());
        }
        m_vulTagHasBeenSet = true;
    }

    if (value.HasMember("SupportProduct") && !value["SupportProduct"].IsNull())
    {
        if (!value["SupportProduct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.SupportProduct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportProduct = string(value["SupportProduct"].GetString());
        m_supportProductHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("PcmgrID") && !value["PcmgrID"].IsNull())
    {
        if (!value["PcmgrID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.PcmgrID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pcmgrID = string(value["PcmgrID"].GetString());
        m_pcmgrIDHasBeenSet = true;
    }

    if (value.HasMember("TvdID") && !value["TvdID"].IsNull())
    {
        if (!value["TvdID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULBaseInfo.TvdID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tvdID = string(value["TvdID"].GetString());
        m_tvdIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VULBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_affectAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectAssetCount, allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_vULTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULType.c_str(), allocator).Move(), allocator);
    }

    if (m_vULNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULName.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVE.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_references.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vULURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULURL.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
    }

    if (m_eMGCVulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EMGCVulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eMGCVulType, allocator);
    }

    if (m_cVSSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVSS, allocator);
    }

    if (m_attackHeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackHeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackHeat, allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanStatus, allocator);
    }

    if (m_isSuggestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSuggest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSuggest, allocator);
    }

    if (m_vulTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulTag.begin(); itr != m_vulTag.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supportProduct.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_pcmgrIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PcmgrID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pcmgrID.c_str(), allocator).Move(), allocator);
    }

    if (m_tvdIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TvdID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tvdID.c_str(), allocator).Move(), allocator);
    }

}


string VULBaseInfo::GetLevel() const
{
    return m_level;
}

void VULBaseInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VULBaseInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VULBaseInfo::GetComponent() const
{
    return m_component;
}

void VULBaseInfo::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool VULBaseInfo::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string VULBaseInfo::GetPublishTime() const
{
    return m_publishTime;
}

void VULBaseInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool VULBaseInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string VULBaseInfo::GetLastScanTime() const
{
    return m_lastScanTime;
}

void VULBaseInfo::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool VULBaseInfo::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t VULBaseInfo::GetAffectAssetCount() const
{
    return m_affectAssetCount;
}

void VULBaseInfo::SetAffectAssetCount(const uint64_t& _affectAssetCount)
{
    m_affectAssetCount = _affectAssetCount;
    m_affectAssetCountHasBeenSet = true;
}

bool VULBaseInfo::AffectAssetCountHasBeenSet() const
{
    return m_affectAssetCountHasBeenSet;
}

string VULBaseInfo::GetRiskId() const
{
    return m_riskId;
}

void VULBaseInfo::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool VULBaseInfo::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string VULBaseInfo::GetVULType() const
{
    return m_vULType;
}

void VULBaseInfo::SetVULType(const string& _vULType)
{
    m_vULType = _vULType;
    m_vULTypeHasBeenSet = true;
}

bool VULBaseInfo::VULTypeHasBeenSet() const
{
    return m_vULTypeHasBeenSet;
}

string VULBaseInfo::GetVULName() const
{
    return m_vULName;
}

void VULBaseInfo::SetVULName(const string& _vULName)
{
    m_vULName = _vULName;
    m_vULNameHasBeenSet = true;
}

bool VULBaseInfo::VULNameHasBeenSet() const
{
    return m_vULNameHasBeenSet;
}

string VULBaseInfo::GetCVE() const
{
    return m_cVE;
}

void VULBaseInfo::SetCVE(const string& _cVE)
{
    m_cVE = _cVE;
    m_cVEHasBeenSet = true;
}

bool VULBaseInfo::CVEHasBeenSet() const
{
    return m_cVEHasBeenSet;
}

string VULBaseInfo::GetDescribe() const
{
    return m_describe;
}

void VULBaseInfo::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool VULBaseInfo::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string VULBaseInfo::GetPayload() const
{
    return m_payload;
}

void VULBaseInfo::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool VULBaseInfo::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string VULBaseInfo::GetAppName() const
{
    return m_appName;
}

void VULBaseInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool VULBaseInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string VULBaseInfo::GetReferences() const
{
    return m_references;
}

void VULBaseInfo::SetReferences(const string& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool VULBaseInfo::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string VULBaseInfo::GetAppVersion() const
{
    return m_appVersion;
}

void VULBaseInfo::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool VULBaseInfo::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string VULBaseInfo::GetVULURL() const
{
    return m_vULURL;
}

void VULBaseInfo::SetVULURL(const string& _vULURL)
{
    m_vULURL = _vULURL;
    m_vULURLHasBeenSet = true;
}

bool VULBaseInfo::VULURLHasBeenSet() const
{
    return m_vULURLHasBeenSet;
}

string VULBaseInfo::GetNick() const
{
    return m_nick;
}

void VULBaseInfo::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool VULBaseInfo::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string VULBaseInfo::GetAppId() const
{
    return m_appId;
}

void VULBaseInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VULBaseInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string VULBaseInfo::GetUin() const
{
    return m_uin;
}

void VULBaseInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool VULBaseInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string VULBaseInfo::GetFix() const
{
    return m_fix;
}

void VULBaseInfo::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool VULBaseInfo::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

int64_t VULBaseInfo::GetEMGCVulType() const
{
    return m_eMGCVulType;
}

void VULBaseInfo::SetEMGCVulType(const int64_t& _eMGCVulType)
{
    m_eMGCVulType = _eMGCVulType;
    m_eMGCVulTypeHasBeenSet = true;
}

bool VULBaseInfo::EMGCVulTypeHasBeenSet() const
{
    return m_eMGCVulTypeHasBeenSet;
}

double VULBaseInfo::GetCVSS() const
{
    return m_cVSS;
}

void VULBaseInfo::SetCVSS(const double& _cVSS)
{
    m_cVSS = _cVSS;
    m_cVSSHasBeenSet = true;
}

bool VULBaseInfo::CVSSHasBeenSet() const
{
    return m_cVSSHasBeenSet;
}

int64_t VULBaseInfo::GetAttackHeat() const
{
    return m_attackHeat;
}

void VULBaseInfo::SetAttackHeat(const int64_t& _attackHeat)
{
    m_attackHeat = _attackHeat;
    m_attackHeatHasBeenSet = true;
}

bool VULBaseInfo::AttackHeatHasBeenSet() const
{
    return m_attackHeatHasBeenSet;
}

int64_t VULBaseInfo::GetScanStatus() const
{
    return m_scanStatus;
}

void VULBaseInfo::SetScanStatus(const int64_t& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool VULBaseInfo::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

int64_t VULBaseInfo::GetIsSuggest() const
{
    return m_isSuggest;
}

void VULBaseInfo::SetIsSuggest(const int64_t& _isSuggest)
{
    m_isSuggest = _isSuggest;
    m_isSuggestHasBeenSet = true;
}

bool VULBaseInfo::IsSuggestHasBeenSet() const
{
    return m_isSuggestHasBeenSet;
}

vector<string> VULBaseInfo::GetVulTag() const
{
    return m_vulTag;
}

void VULBaseInfo::SetVulTag(const vector<string>& _vulTag)
{
    m_vulTag = _vulTag;
    m_vulTagHasBeenSet = true;
}

bool VULBaseInfo::VulTagHasBeenSet() const
{
    return m_vulTagHasBeenSet;
}

string VULBaseInfo::GetSupportProduct() const
{
    return m_supportProduct;
}

void VULBaseInfo::SetSupportProduct(const string& _supportProduct)
{
    m_supportProduct = _supportProduct;
    m_supportProductHasBeenSet = true;
}

bool VULBaseInfo::SupportProductHasBeenSet() const
{
    return m_supportProductHasBeenSet;
}

string VULBaseInfo::GetTaskId() const
{
    return m_taskId;
}

void VULBaseInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool VULBaseInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string VULBaseInfo::GetIndex() const
{
    return m_index;
}

void VULBaseInfo::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool VULBaseInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string VULBaseInfo::GetPcmgrID() const
{
    return m_pcmgrID;
}

void VULBaseInfo::SetPcmgrID(const string& _pcmgrID)
{
    m_pcmgrID = _pcmgrID;
    m_pcmgrIDHasBeenSet = true;
}

bool VULBaseInfo::PcmgrIDHasBeenSet() const
{
    return m_pcmgrIDHasBeenSet;
}

string VULBaseInfo::GetTvdID() const
{
    return m_tvdID;
}

void VULBaseInfo::SetTvdID(const string& _tvdID)
{
    m_tvdID = _tvdID;
    m_tvdIDHasBeenSet = true;
}

bool VULBaseInfo::TvdIDHasBeenSet() const
{
    return m_tvdIDHasBeenSet;
}

