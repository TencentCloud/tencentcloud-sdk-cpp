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

#include <tencentcloud/csip/v20221121/model/SkillScanAlertItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SkillScanAlertItem::SkillScanAlertItem() :
    m_iDHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_belongAssetTypeHasBeenSet(false),
    m_skillNameHasBeenSet(false),
    m_skillPathHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_contentHashHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_securityScoreHasBeenSet(false),
    m_primaryRuleIDHasBeenSet(false),
    m_hitRulesHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SkillScanAlertItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("BelongAssetType") && !value["BelongAssetType"].IsNull())
    {
        if (!value["BelongAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.BelongAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongAssetType = string(value["BelongAssetType"].GetString());
        m_belongAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("SkillName") && !value["SkillName"].IsNull())
    {
        if (!value["SkillName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.SkillName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillName = string(value["SkillName"].GetString());
        m_skillNameHasBeenSet = true;
    }

    if (value.HasMember("SkillPath") && !value["SkillPath"].IsNull())
    {
        if (!value["SkillPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.SkillPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillPath = string(value["SkillPath"].GetString());
        m_skillPathHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ContentHash") && !value["ContentHash"].IsNull())
    {
        if (!value["ContentHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.ContentHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentHash = string(value["ContentHash"].GetString());
        m_contentHashHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("SecurityScore") && !value["SecurityScore"].IsNull())
    {
        if (!value["SecurityScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.SecurityScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityScore = value["SecurityScore"].GetInt64();
        m_securityScoreHasBeenSet = true;
    }

    if (value.HasMember("PrimaryRuleID") && !value["PrimaryRuleID"].IsNull())
    {
        if (!value["PrimaryRuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.PrimaryRuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryRuleID = string(value["PrimaryRuleID"].GetString());
        m_primaryRuleIDHasBeenSet = true;
    }

    if (value.HasMember("HitRules") && !value["HitRules"].IsNull())
    {
        if (!value["HitRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.HitRules` is not array type"));

        const rapidjson::Value &tmpValue = value["HitRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hitRules.push_back((*itr).GetString());
        }
        m_hitRulesHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.EngineVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = value["EngineVersion"].GetInt64();
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanAlertItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillScanAlertItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
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

    if (m_belongAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_belongAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_skillNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillPath.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentHash.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_securityScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityScore, allocator);
    }

    if (m_primaryRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryRuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryRuleID.c_str(), allocator).Move(), allocator);
    }

    if (m_hitRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hitRules.begin(); itr != m_hitRules.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineVersion, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
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

}


int64_t SkillScanAlertItem::GetID() const
{
    return m_iD;
}

void SkillScanAlertItem::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool SkillScanAlertItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t SkillScanAlertItem::GetAppID() const
{
    return m_appID;
}

void SkillScanAlertItem::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool SkillScanAlertItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string SkillScanAlertItem::GetUUID() const
{
    return m_uUID;
}

void SkillScanAlertItem::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool SkillScanAlertItem::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string SkillScanAlertItem::GetHostIP() const
{
    return m_hostIP;
}

void SkillScanAlertItem::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool SkillScanAlertItem::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string SkillScanAlertItem::GetInstanceID() const
{
    return m_instanceID;
}

void SkillScanAlertItem::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool SkillScanAlertItem::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string SkillScanAlertItem::GetInstanceName() const
{
    return m_instanceName;
}

void SkillScanAlertItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool SkillScanAlertItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string SkillScanAlertItem::GetBelongAssetType() const
{
    return m_belongAssetType;
}

void SkillScanAlertItem::SetBelongAssetType(const string& _belongAssetType)
{
    m_belongAssetType = _belongAssetType;
    m_belongAssetTypeHasBeenSet = true;
}

bool SkillScanAlertItem::BelongAssetTypeHasBeenSet() const
{
    return m_belongAssetTypeHasBeenSet;
}

string SkillScanAlertItem::GetSkillName() const
{
    return m_skillName;
}

void SkillScanAlertItem::SetSkillName(const string& _skillName)
{
    m_skillName = _skillName;
    m_skillNameHasBeenSet = true;
}

bool SkillScanAlertItem::SkillNameHasBeenSet() const
{
    return m_skillNameHasBeenSet;
}

string SkillScanAlertItem::GetSkillPath() const
{
    return m_skillPath;
}

void SkillScanAlertItem::SetSkillPath(const string& _skillPath)
{
    m_skillPath = _skillPath;
    m_skillPathHasBeenSet = true;
}

bool SkillScanAlertItem::SkillPathHasBeenSet() const
{
    return m_skillPathHasBeenSet;
}

string SkillScanAlertItem::GetScope() const
{
    return m_scope;
}

void SkillScanAlertItem::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool SkillScanAlertItem::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string SkillScanAlertItem::GetVersion() const
{
    return m_version;
}

void SkillScanAlertItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SkillScanAlertItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SkillScanAlertItem::GetContentHash() const
{
    return m_contentHash;
}

void SkillScanAlertItem::SetContentHash(const string& _contentHash)
{
    m_contentHash = _contentHash;
    m_contentHashHasBeenSet = true;
}

bool SkillScanAlertItem::ContentHashHasBeenSet() const
{
    return m_contentHashHasBeenSet;
}

string SkillScanAlertItem::GetRiskLevel() const
{
    return m_riskLevel;
}

void SkillScanAlertItem::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool SkillScanAlertItem::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

int64_t SkillScanAlertItem::GetSecurityScore() const
{
    return m_securityScore;
}

void SkillScanAlertItem::SetSecurityScore(const int64_t& _securityScore)
{
    m_securityScore = _securityScore;
    m_securityScoreHasBeenSet = true;
}

bool SkillScanAlertItem::SecurityScoreHasBeenSet() const
{
    return m_securityScoreHasBeenSet;
}

string SkillScanAlertItem::GetPrimaryRuleID() const
{
    return m_primaryRuleID;
}

void SkillScanAlertItem::SetPrimaryRuleID(const string& _primaryRuleID)
{
    m_primaryRuleID = _primaryRuleID;
    m_primaryRuleIDHasBeenSet = true;
}

bool SkillScanAlertItem::PrimaryRuleIDHasBeenSet() const
{
    return m_primaryRuleIDHasBeenSet;
}

vector<string> SkillScanAlertItem::GetHitRules() const
{
    return m_hitRules;
}

void SkillScanAlertItem::SetHitRules(const vector<string>& _hitRules)
{
    m_hitRules = _hitRules;
    m_hitRulesHasBeenSet = true;
}

bool SkillScanAlertItem::HitRulesHasBeenSet() const
{
    return m_hitRulesHasBeenSet;
}

int64_t SkillScanAlertItem::GetEngineVersion() const
{
    return m_engineVersion;
}

void SkillScanAlertItem::SetEngineVersion(const int64_t& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool SkillScanAlertItem::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t SkillScanAlertItem::GetStatus() const
{
    return m_status;
}

void SkillScanAlertItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SkillScanAlertItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SkillScanAlertItem::GetLevel() const
{
    return m_level;
}

void SkillScanAlertItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool SkillScanAlertItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string SkillScanAlertItem::GetCreateTime() const
{
    return m_createTime;
}

void SkillScanAlertItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SkillScanAlertItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SkillScanAlertItem::GetUpdateTime() const
{
    return m_updateTime;
}

void SkillScanAlertItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SkillScanAlertItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

