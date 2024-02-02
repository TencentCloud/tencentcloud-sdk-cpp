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

#include <tencentcloud/csip/v20221121/model/VULRiskAdvanceCFGList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VULRiskAdvanceCFGList::VULRiskAdvanceCFGList() :
    m_riskIdHasBeenSet(false),
    m_vULNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_checkFromHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_vULTypeHasBeenSet(false),
    m_impactVersionHasBeenSet(false),
    m_cVEHasBeenSet(false),
    m_vULTagHasBeenSet(false),
    m_fixMethodHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_eMGCVulTypeHasBeenSet(false),
    m_vULDescribeHasBeenSet(false),
    m_impactComponentHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_cVSSHasBeenSet(false),
    m_attackHeatHasBeenSet(false),
    m_serviceSupportHasBeenSet(false),
    m_recentScanTimeHasBeenSet(false)
{
}

CoreInternalOutcome VULRiskAdvanceCFGList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(value["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("VULName") && !value["VULName"].IsNull())
    {
        if (!value["VULName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.VULName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULName = string(value["VULName"].GetString());
        m_vULNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("CheckFrom") && !value["CheckFrom"].IsNull())
    {
        if (!value["CheckFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.CheckFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkFrom = string(value["CheckFrom"].GetString());
        m_checkFromHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("VULType") && !value["VULType"].IsNull())
    {
        if (!value["VULType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.VULType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULType = string(value["VULType"].GetString());
        m_vULTypeHasBeenSet = true;
    }

    if (value.HasMember("ImpactVersion") && !value["ImpactVersion"].IsNull())
    {
        if (!value["ImpactVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.ImpactVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactVersion = string(value["ImpactVersion"].GetString());
        m_impactVersionHasBeenSet = true;
    }

    if (value.HasMember("CVE") && !value["CVE"].IsNull())
    {
        if (!value["CVE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.CVE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVE = string(value["CVE"].GetString());
        m_cVEHasBeenSet = true;
    }

    if (value.HasMember("VULTag") && !value["VULTag"].IsNull())
    {
        if (!value["VULTag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.VULTag` is not array type"));

        const rapidjson::Value &tmpValue = value["VULTag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vULTag.push_back((*itr).GetString());
        }
        m_vULTagHasBeenSet = true;
    }

    if (value.HasMember("FixMethod") && !value["FixMethod"].IsNull())
    {
        if (!value["FixMethod"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.FixMethod` is not array type"));

        const rapidjson::Value &tmpValue = value["FixMethod"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fixMethod.push_back((*itr).GetString());
        }
        m_fixMethodHasBeenSet = true;
    }

    if (value.HasMember("ReleaseTime") && !value["ReleaseTime"].IsNull())
    {
        if (!value["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(value["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }

    if (value.HasMember("EMGCVulType") && !value["EMGCVulType"].IsNull())
    {
        if (!value["EMGCVulType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.EMGCVulType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eMGCVulType = value["EMGCVulType"].GetInt64();
        m_eMGCVulTypeHasBeenSet = true;
    }

    if (value.HasMember("VULDescribe") && !value["VULDescribe"].IsNull())
    {
        if (!value["VULDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.VULDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULDescribe = string(value["VULDescribe"].GetString());
        m_vULDescribeHasBeenSet = true;
    }

    if (value.HasMember("ImpactComponent") && !value["ImpactComponent"].IsNull())
    {
        if (!value["ImpactComponent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.ImpactComponent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactComponent = string(value["ImpactComponent"].GetString());
        m_impactComponentHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.References` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_references = string(value["References"].GetString());
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("CVSS") && !value["CVSS"].IsNull())
    {
        if (!value["CVSS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.CVSS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVSS = string(value["CVSS"].GetString());
        m_cVSSHasBeenSet = true;
    }

    if (value.HasMember("AttackHeat") && !value["AttackHeat"].IsNull())
    {
        if (!value["AttackHeat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.AttackHeat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackHeat = string(value["AttackHeat"].GetString());
        m_attackHeatHasBeenSet = true;
    }

    if (value.HasMember("ServiceSupport") && !value["ServiceSupport"].IsNull())
    {
        if (!value["ServiceSupport"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.ServiceSupport` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceSupport"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceSupport item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceSupport.push_back(item);
        }
        m_serviceSupportHasBeenSet = true;
    }

    if (value.HasMember("RecentScanTime") && !value["RecentScanTime"].IsNull())
    {
        if (!value["RecentScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VULRiskAdvanceCFGList.RecentScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentScanTime = string(value["RecentScanTime"].GetString());
        m_recentScanTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VULRiskAdvanceCFGList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_vULNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_checkFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_vULTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULType.c_str(), allocator).Move(), allocator);
    }

    if (m_impactVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVE.c_str(), allocator).Move(), allocator);
    }

    if (m_vULTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vULTag.begin(); itr != m_vULTag.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fixMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fixMethod.begin(); itr != m_fixMethod.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eMGCVulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EMGCVulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eMGCVulType, allocator);
    }

    if (m_vULDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_impactComponentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactComponent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactComponent.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_references.c_str(), allocator).Move(), allocator);
    }

    if (m_cVSSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVSS.c_str(), allocator).Move(), allocator);
    }

    if (m_attackHeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackHeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackHeat.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceSupport.begin(); itr != m_serviceSupport.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_recentScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentScanTime.c_str(), allocator).Move(), allocator);
    }

}


string VULRiskAdvanceCFGList::GetRiskId() const
{
    return m_riskId;
}

void VULRiskAdvanceCFGList::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string VULRiskAdvanceCFGList::GetVULName() const
{
    return m_vULName;
}

void VULRiskAdvanceCFGList::SetVULName(const string& _vULName)
{
    m_vULName = _vULName;
    m_vULNameHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::VULNameHasBeenSet() const
{
    return m_vULNameHasBeenSet;
}

string VULRiskAdvanceCFGList::GetRiskLevel() const
{
    return m_riskLevel;
}

void VULRiskAdvanceCFGList::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string VULRiskAdvanceCFGList::GetCheckFrom() const
{
    return m_checkFrom;
}

void VULRiskAdvanceCFGList::SetCheckFrom(const string& _checkFrom)
{
    m_checkFrom = _checkFrom;
    m_checkFromHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::CheckFromHasBeenSet() const
{
    return m_checkFromHasBeenSet;
}

int64_t VULRiskAdvanceCFGList::GetEnable() const
{
    return m_enable;
}

void VULRiskAdvanceCFGList::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string VULRiskAdvanceCFGList::GetVULType() const
{
    return m_vULType;
}

void VULRiskAdvanceCFGList::SetVULType(const string& _vULType)
{
    m_vULType = _vULType;
    m_vULTypeHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::VULTypeHasBeenSet() const
{
    return m_vULTypeHasBeenSet;
}

string VULRiskAdvanceCFGList::GetImpactVersion() const
{
    return m_impactVersion;
}

void VULRiskAdvanceCFGList::SetImpactVersion(const string& _impactVersion)
{
    m_impactVersion = _impactVersion;
    m_impactVersionHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::ImpactVersionHasBeenSet() const
{
    return m_impactVersionHasBeenSet;
}

string VULRiskAdvanceCFGList::GetCVE() const
{
    return m_cVE;
}

void VULRiskAdvanceCFGList::SetCVE(const string& _cVE)
{
    m_cVE = _cVE;
    m_cVEHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::CVEHasBeenSet() const
{
    return m_cVEHasBeenSet;
}

vector<string> VULRiskAdvanceCFGList::GetVULTag() const
{
    return m_vULTag;
}

void VULRiskAdvanceCFGList::SetVULTag(const vector<string>& _vULTag)
{
    m_vULTag = _vULTag;
    m_vULTagHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::VULTagHasBeenSet() const
{
    return m_vULTagHasBeenSet;
}

vector<string> VULRiskAdvanceCFGList::GetFixMethod() const
{
    return m_fixMethod;
}

void VULRiskAdvanceCFGList::SetFixMethod(const vector<string>& _fixMethod)
{
    m_fixMethod = _fixMethod;
    m_fixMethodHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::FixMethodHasBeenSet() const
{
    return m_fixMethodHasBeenSet;
}

string VULRiskAdvanceCFGList::GetReleaseTime() const
{
    return m_releaseTime;
}

void VULRiskAdvanceCFGList::SetReleaseTime(const string& _releaseTime)
{
    m_releaseTime = _releaseTime;
    m_releaseTimeHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

int64_t VULRiskAdvanceCFGList::GetEMGCVulType() const
{
    return m_eMGCVulType;
}

void VULRiskAdvanceCFGList::SetEMGCVulType(const int64_t& _eMGCVulType)
{
    m_eMGCVulType = _eMGCVulType;
    m_eMGCVulTypeHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::EMGCVulTypeHasBeenSet() const
{
    return m_eMGCVulTypeHasBeenSet;
}

string VULRiskAdvanceCFGList::GetVULDescribe() const
{
    return m_vULDescribe;
}

void VULRiskAdvanceCFGList::SetVULDescribe(const string& _vULDescribe)
{
    m_vULDescribe = _vULDescribe;
    m_vULDescribeHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::VULDescribeHasBeenSet() const
{
    return m_vULDescribeHasBeenSet;
}

string VULRiskAdvanceCFGList::GetImpactComponent() const
{
    return m_impactComponent;
}

void VULRiskAdvanceCFGList::SetImpactComponent(const string& _impactComponent)
{
    m_impactComponent = _impactComponent;
    m_impactComponentHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::ImpactComponentHasBeenSet() const
{
    return m_impactComponentHasBeenSet;
}

string VULRiskAdvanceCFGList::GetPayload() const
{
    return m_payload;
}

void VULRiskAdvanceCFGList::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string VULRiskAdvanceCFGList::GetReferences() const
{
    return m_references;
}

void VULRiskAdvanceCFGList::SetReferences(const string& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string VULRiskAdvanceCFGList::GetCVSS() const
{
    return m_cVSS;
}

void VULRiskAdvanceCFGList::SetCVSS(const string& _cVSS)
{
    m_cVSS = _cVSS;
    m_cVSSHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::CVSSHasBeenSet() const
{
    return m_cVSSHasBeenSet;
}

string VULRiskAdvanceCFGList::GetAttackHeat() const
{
    return m_attackHeat;
}

void VULRiskAdvanceCFGList::SetAttackHeat(const string& _attackHeat)
{
    m_attackHeat = _attackHeat;
    m_attackHeatHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::AttackHeatHasBeenSet() const
{
    return m_attackHeatHasBeenSet;
}

vector<ServiceSupport> VULRiskAdvanceCFGList::GetServiceSupport() const
{
    return m_serviceSupport;
}

void VULRiskAdvanceCFGList::SetServiceSupport(const vector<ServiceSupport>& _serviceSupport)
{
    m_serviceSupport = _serviceSupport;
    m_serviceSupportHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::ServiceSupportHasBeenSet() const
{
    return m_serviceSupportHasBeenSet;
}

string VULRiskAdvanceCFGList::GetRecentScanTime() const
{
    return m_recentScanTime;
}

void VULRiskAdvanceCFGList::SetRecentScanTime(const string& _recentScanTime)
{
    m_recentScanTime = _recentScanTime;
    m_recentScanTimeHasBeenSet = true;
}

bool VULRiskAdvanceCFGList::RecentScanTimeHasBeenSet() const
{
    return m_recentScanTimeHasBeenSet;
}

