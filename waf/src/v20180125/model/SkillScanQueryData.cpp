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

#include <tencentcloud/waf/v20180125/model/SkillScanQueryData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

SkillScanQueryData::SkillScanQueryData() :
    m_statusHasBeenSet(false),
    m_skillNameHasBeenSet(false),
    m_skillDescriptionHasBeenSet(false),
    m_contentHashHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_mitigationHasBeenSet(false),
    m_securityScoreHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_capabilityTagsHasBeenSet(false),
    m_ruleCatalogHasBeenSet(false),
    m_scanItemsHasBeenSet(false),
    m_reportUrlHasBeenSet(false),
    m_scannedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_failedAtHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome SkillScanQueryData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SkillName") && !value["SkillName"].IsNull())
    {
        if (!value["SkillName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.SkillName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillName = string(value["SkillName"].GetString());
        m_skillNameHasBeenSet = true;
    }

    if (value.HasMember("SkillDescription") && !value["SkillDescription"].IsNull())
    {
        if (!value["SkillDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.SkillDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillDescription = string(value["SkillDescription"].GetString());
        m_skillDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ContentHash") && !value["ContentHash"].IsNull())
    {
        if (!value["ContentHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.ContentHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentHash = string(value["ContentHash"].GetString());
        m_contentHashHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Mitigation") && !value["Mitigation"].IsNull())
    {
        if (!value["Mitigation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.Mitigation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mitigation = string(value["Mitigation"].GetString());
        m_mitigationHasBeenSet = true;
    }

    if (value.HasMember("SecurityScore") && !value["SecurityScore"].IsNull())
    {
        if (!value["SecurityScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.SecurityScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_securityScore = value["SecurityScore"].GetUint64();
        m_securityScoreHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.EngineVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = value["EngineVersion"].GetUint64();
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("CapabilityTags") && !value["CapabilityTags"].IsNull())
    {
        if (!value["CapabilityTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.CapabilityTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CapabilityTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillScanCapabilityTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_capabilityTags.push_back(item);
        }
        m_capabilityTagsHasBeenSet = true;
    }

    if (value.HasMember("RuleCatalog") && !value["RuleCatalog"].IsNull())
    {
        if (!value["RuleCatalog"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.RuleCatalog` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleCatalog"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillRuleCatalogItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleCatalog.push_back(item);
        }
        m_ruleCatalogHasBeenSet = true;
    }

    if (value.HasMember("ScanItems") && !value["ScanItems"].IsNull())
    {
        if (!value["ScanItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.ScanItems` is not array type"));

        const rapidjson::Value &tmpValue = value["ScanItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillScanItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scanItems.push_back(item);
        }
        m_scanItemsHasBeenSet = true;
    }

    if (value.HasMember("ReportUrl") && !value["ReportUrl"].IsNull())
    {
        if (!value["ReportUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.ReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportUrl = string(value["ReportUrl"].GetString());
        m_reportUrlHasBeenSet = true;
    }

    if (value.HasMember("ScannedAt") && !value["ScannedAt"].IsNull())
    {
        if (!value["ScannedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.ScannedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scannedAt = string(value["ScannedAt"].GetString());
        m_scannedAtHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("FailedAt") && !value["FailedAt"].IsNull())
    {
        if (!value["FailedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.FailedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedAt = string(value["FailedAt"].GetString());
        m_failedAtHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanQueryData.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillScanQueryData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_skillNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillDescription.c_str(), allocator).Move(), allocator);
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

    if (m_mitigationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mitigation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mitigation.c_str(), allocator).Move(), allocator);
    }

    if (m_securityScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityScore, allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineVersion, allocator);
    }

    if (m_capabilityTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapabilityTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_capabilityTags.begin(); itr != m_capabilityTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleCatalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCatalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleCatalog.begin(); itr != m_ruleCatalog.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scanItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scanItems.begin(); itr != m_scanItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reportUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_scannedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scannedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_failedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string SkillScanQueryData::GetStatus() const
{
    return m_status;
}

void SkillScanQueryData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SkillScanQueryData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SkillScanQueryData::GetSkillName() const
{
    return m_skillName;
}

void SkillScanQueryData::SetSkillName(const string& _skillName)
{
    m_skillName = _skillName;
    m_skillNameHasBeenSet = true;
}

bool SkillScanQueryData::SkillNameHasBeenSet() const
{
    return m_skillNameHasBeenSet;
}

string SkillScanQueryData::GetSkillDescription() const
{
    return m_skillDescription;
}

void SkillScanQueryData::SetSkillDescription(const string& _skillDescription)
{
    m_skillDescription = _skillDescription;
    m_skillDescriptionHasBeenSet = true;
}

bool SkillScanQueryData::SkillDescriptionHasBeenSet() const
{
    return m_skillDescriptionHasBeenSet;
}

string SkillScanQueryData::GetContentHash() const
{
    return m_contentHash;
}

void SkillScanQueryData::SetContentHash(const string& _contentHash)
{
    m_contentHash = _contentHash;
    m_contentHashHasBeenSet = true;
}

bool SkillScanQueryData::ContentHashHasBeenSet() const
{
    return m_contentHashHasBeenSet;
}

string SkillScanQueryData::GetRiskLevel() const
{
    return m_riskLevel;
}

void SkillScanQueryData::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool SkillScanQueryData::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string SkillScanQueryData::GetMitigation() const
{
    return m_mitigation;
}

void SkillScanQueryData::SetMitigation(const string& _mitigation)
{
    m_mitigation = _mitigation;
    m_mitigationHasBeenSet = true;
}

bool SkillScanQueryData::MitigationHasBeenSet() const
{
    return m_mitigationHasBeenSet;
}

uint64_t SkillScanQueryData::GetSecurityScore() const
{
    return m_securityScore;
}

void SkillScanQueryData::SetSecurityScore(const uint64_t& _securityScore)
{
    m_securityScore = _securityScore;
    m_securityScoreHasBeenSet = true;
}

bool SkillScanQueryData::SecurityScoreHasBeenSet() const
{
    return m_securityScoreHasBeenSet;
}

uint64_t SkillScanQueryData::GetEngineVersion() const
{
    return m_engineVersion;
}

void SkillScanQueryData::SetEngineVersion(const uint64_t& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool SkillScanQueryData::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

vector<SkillScanCapabilityTag> SkillScanQueryData::GetCapabilityTags() const
{
    return m_capabilityTags;
}

void SkillScanQueryData::SetCapabilityTags(const vector<SkillScanCapabilityTag>& _capabilityTags)
{
    m_capabilityTags = _capabilityTags;
    m_capabilityTagsHasBeenSet = true;
}

bool SkillScanQueryData::CapabilityTagsHasBeenSet() const
{
    return m_capabilityTagsHasBeenSet;
}

vector<SkillRuleCatalogItem> SkillScanQueryData::GetRuleCatalog() const
{
    return m_ruleCatalog;
}

void SkillScanQueryData::SetRuleCatalog(const vector<SkillRuleCatalogItem>& _ruleCatalog)
{
    m_ruleCatalog = _ruleCatalog;
    m_ruleCatalogHasBeenSet = true;
}

bool SkillScanQueryData::RuleCatalogHasBeenSet() const
{
    return m_ruleCatalogHasBeenSet;
}

vector<SkillScanItem> SkillScanQueryData::GetScanItems() const
{
    return m_scanItems;
}

void SkillScanQueryData::SetScanItems(const vector<SkillScanItem>& _scanItems)
{
    m_scanItems = _scanItems;
    m_scanItemsHasBeenSet = true;
}

bool SkillScanQueryData::ScanItemsHasBeenSet() const
{
    return m_scanItemsHasBeenSet;
}

string SkillScanQueryData::GetReportUrl() const
{
    return m_reportUrl;
}

void SkillScanQueryData::SetReportUrl(const string& _reportUrl)
{
    m_reportUrl = _reportUrl;
    m_reportUrlHasBeenSet = true;
}

bool SkillScanQueryData::ReportUrlHasBeenSet() const
{
    return m_reportUrlHasBeenSet;
}

string SkillScanQueryData::GetScannedAt() const
{
    return m_scannedAt;
}

void SkillScanQueryData::SetScannedAt(const string& _scannedAt)
{
    m_scannedAt = _scannedAt;
    m_scannedAtHasBeenSet = true;
}

bool SkillScanQueryData::ScannedAtHasBeenSet() const
{
    return m_scannedAtHasBeenSet;
}

string SkillScanQueryData::GetCreatedAt() const
{
    return m_createdAt;
}

void SkillScanQueryData::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool SkillScanQueryData::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string SkillScanQueryData::GetFailedAt() const
{
    return m_failedAt;
}

void SkillScanQueryData::SetFailedAt(const string& _failedAt)
{
    m_failedAt = _failedAt;
    m_failedAtHasBeenSet = true;
}

bool SkillScanQueryData::FailedAtHasBeenSet() const
{
    return m_failedAtHasBeenSet;
}

string SkillScanQueryData::GetMessage() const
{
    return m_message;
}

void SkillScanQueryData::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SkillScanQueryData::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

