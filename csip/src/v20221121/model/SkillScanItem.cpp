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

#include <tencentcloud/csip/v20221121/model/SkillScanItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SkillScanItem::SkillScanItem() :
    m_skillNameHasBeenSet(false),
    m_skillDescriptionHasBeenSet(false),
    m_contentHashHasBeenSet(false),
    m_uploadFileCountHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_primaryRuleIDHasBeenSet(false),
    m_mitigationHasBeenSet(false),
    m_riskDescriptionHasBeenSet(false),
    m_securityScoreHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_capabilityTagsHasBeenSet(false),
    m_ruleCatalogHasBeenSet(false),
    m_scanItemsHasBeenSet(false),
    m_reportURLHasBeenSet(false),
    m_scannedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_failedAtHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome SkillScanItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SkillName") && !value["SkillName"].IsNull())
    {
        if (!value["SkillName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.SkillName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillName = string(value["SkillName"].GetString());
        m_skillNameHasBeenSet = true;
    }

    if (value.HasMember("SkillDescription") && !value["SkillDescription"].IsNull())
    {
        if (!value["SkillDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.SkillDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillDescription = string(value["SkillDescription"].GetString());
        m_skillDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ContentHash") && !value["ContentHash"].IsNull())
    {
        if (!value["ContentHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.ContentHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentHash = string(value["ContentHash"].GetString());
        m_contentHashHasBeenSet = true;
    }

    if (value.HasMember("UploadFileCount") && !value["UploadFileCount"].IsNull())
    {
        if (!value["UploadFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.UploadFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uploadFileCount = value["UploadFileCount"].GetInt64();
        m_uploadFileCountHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("PrimaryRuleID") && !value["PrimaryRuleID"].IsNull())
    {
        if (!value["PrimaryRuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.PrimaryRuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryRuleID = string(value["PrimaryRuleID"].GetString());
        m_primaryRuleIDHasBeenSet = true;
    }

    if (value.HasMember("Mitigation") && !value["Mitigation"].IsNull())
    {
        if (!value["Mitigation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.Mitigation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mitigation = string(value["Mitigation"].GetString());
        m_mitigationHasBeenSet = true;
    }

    if (value.HasMember("RiskDescription") && !value["RiskDescription"].IsNull())
    {
        if (!value["RiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.RiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDescription = string(value["RiskDescription"].GetString());
        m_riskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("SecurityScore") && !value["SecurityScore"].IsNull())
    {
        if (!value["SecurityScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.SecurityScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityScore = value["SecurityScore"].GetInt64();
        m_securityScoreHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.EngineVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = value["EngineVersion"].GetInt64();
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("CapabilityTags") && !value["CapabilityTags"].IsNull())
    {
        if (!value["CapabilityTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.CapabilityTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CapabilityTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillCapabilityTag item;
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
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.RuleCatalog` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.ScanItems` is not array type"));

        const rapidjson::Value &tmpValue = value["ScanItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillScanEngineResult item;
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

    if (value.HasMember("ReportURL") && !value["ReportURL"].IsNull())
    {
        if (!value["ReportURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.ReportURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportURL = string(value["ReportURL"].GetString());
        m_reportURLHasBeenSet = true;
    }

    if (value.HasMember("ScannedAt") && !value["ScannedAt"].IsNull())
    {
        if (!value["ScannedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.ScannedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scannedAt = string(value["ScannedAt"].GetString());
        m_scannedAtHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("FailedAt") && !value["FailedAt"].IsNull())
    {
        if (!value["FailedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.FailedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedAt = string(value["FailedAt"].GetString());
        m_failedAtHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanItem.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillScanItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_uploadFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uploadFileCount, allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryRuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryRuleID.c_str(), allocator).Move(), allocator);
    }

    if (m_mitigationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mitigation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mitigation.c_str(), allocator).Move(), allocator);
    }

    if (m_riskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDescription.c_str(), allocator).Move(), allocator);
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

    if (m_reportURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportURL.c_str(), allocator).Move(), allocator);
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


string SkillScanItem::GetSkillName() const
{
    return m_skillName;
}

void SkillScanItem::SetSkillName(const string& _skillName)
{
    m_skillName = _skillName;
    m_skillNameHasBeenSet = true;
}

bool SkillScanItem::SkillNameHasBeenSet() const
{
    return m_skillNameHasBeenSet;
}

string SkillScanItem::GetSkillDescription() const
{
    return m_skillDescription;
}

void SkillScanItem::SetSkillDescription(const string& _skillDescription)
{
    m_skillDescription = _skillDescription;
    m_skillDescriptionHasBeenSet = true;
}

bool SkillScanItem::SkillDescriptionHasBeenSet() const
{
    return m_skillDescriptionHasBeenSet;
}

string SkillScanItem::GetContentHash() const
{
    return m_contentHash;
}

void SkillScanItem::SetContentHash(const string& _contentHash)
{
    m_contentHash = _contentHash;
    m_contentHashHasBeenSet = true;
}

bool SkillScanItem::ContentHashHasBeenSet() const
{
    return m_contentHashHasBeenSet;
}

int64_t SkillScanItem::GetUploadFileCount() const
{
    return m_uploadFileCount;
}

void SkillScanItem::SetUploadFileCount(const int64_t& _uploadFileCount)
{
    m_uploadFileCount = _uploadFileCount;
    m_uploadFileCountHasBeenSet = true;
}

bool SkillScanItem::UploadFileCountHasBeenSet() const
{
    return m_uploadFileCountHasBeenSet;
}

string SkillScanItem::GetRiskLevel() const
{
    return m_riskLevel;
}

void SkillScanItem::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool SkillScanItem::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string SkillScanItem::GetPrimaryRuleID() const
{
    return m_primaryRuleID;
}

void SkillScanItem::SetPrimaryRuleID(const string& _primaryRuleID)
{
    m_primaryRuleID = _primaryRuleID;
    m_primaryRuleIDHasBeenSet = true;
}

bool SkillScanItem::PrimaryRuleIDHasBeenSet() const
{
    return m_primaryRuleIDHasBeenSet;
}

string SkillScanItem::GetMitigation() const
{
    return m_mitigation;
}

void SkillScanItem::SetMitigation(const string& _mitigation)
{
    m_mitigation = _mitigation;
    m_mitigationHasBeenSet = true;
}

bool SkillScanItem::MitigationHasBeenSet() const
{
    return m_mitigationHasBeenSet;
}

string SkillScanItem::GetRiskDescription() const
{
    return m_riskDescription;
}

void SkillScanItem::SetRiskDescription(const string& _riskDescription)
{
    m_riskDescription = _riskDescription;
    m_riskDescriptionHasBeenSet = true;
}

bool SkillScanItem::RiskDescriptionHasBeenSet() const
{
    return m_riskDescriptionHasBeenSet;
}

int64_t SkillScanItem::GetSecurityScore() const
{
    return m_securityScore;
}

void SkillScanItem::SetSecurityScore(const int64_t& _securityScore)
{
    m_securityScore = _securityScore;
    m_securityScoreHasBeenSet = true;
}

bool SkillScanItem::SecurityScoreHasBeenSet() const
{
    return m_securityScoreHasBeenSet;
}

int64_t SkillScanItem::GetEngineVersion() const
{
    return m_engineVersion;
}

void SkillScanItem::SetEngineVersion(const int64_t& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool SkillScanItem::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

vector<SkillCapabilityTag> SkillScanItem::GetCapabilityTags() const
{
    return m_capabilityTags;
}

void SkillScanItem::SetCapabilityTags(const vector<SkillCapabilityTag>& _capabilityTags)
{
    m_capabilityTags = _capabilityTags;
    m_capabilityTagsHasBeenSet = true;
}

bool SkillScanItem::CapabilityTagsHasBeenSet() const
{
    return m_capabilityTagsHasBeenSet;
}

vector<SkillRuleCatalogItem> SkillScanItem::GetRuleCatalog() const
{
    return m_ruleCatalog;
}

void SkillScanItem::SetRuleCatalog(const vector<SkillRuleCatalogItem>& _ruleCatalog)
{
    m_ruleCatalog = _ruleCatalog;
    m_ruleCatalogHasBeenSet = true;
}

bool SkillScanItem::RuleCatalogHasBeenSet() const
{
    return m_ruleCatalogHasBeenSet;
}

vector<SkillScanEngineResult> SkillScanItem::GetScanItems() const
{
    return m_scanItems;
}

void SkillScanItem::SetScanItems(const vector<SkillScanEngineResult>& _scanItems)
{
    m_scanItems = _scanItems;
    m_scanItemsHasBeenSet = true;
}

bool SkillScanItem::ScanItemsHasBeenSet() const
{
    return m_scanItemsHasBeenSet;
}

string SkillScanItem::GetReportURL() const
{
    return m_reportURL;
}

void SkillScanItem::SetReportURL(const string& _reportURL)
{
    m_reportURL = _reportURL;
    m_reportURLHasBeenSet = true;
}

bool SkillScanItem::ReportURLHasBeenSet() const
{
    return m_reportURLHasBeenSet;
}

string SkillScanItem::GetScannedAt() const
{
    return m_scannedAt;
}

void SkillScanItem::SetScannedAt(const string& _scannedAt)
{
    m_scannedAt = _scannedAt;
    m_scannedAtHasBeenSet = true;
}

bool SkillScanItem::ScannedAtHasBeenSet() const
{
    return m_scannedAtHasBeenSet;
}

string SkillScanItem::GetCreatedAt() const
{
    return m_createdAt;
}

void SkillScanItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool SkillScanItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string SkillScanItem::GetFailedAt() const
{
    return m_failedAt;
}

void SkillScanItem::SetFailedAt(const string& _failedAt)
{
    m_failedAt = _failedAt;
    m_failedAtHasBeenSet = true;
}

bool SkillScanItem::FailedAtHasBeenSet() const
{
    return m_failedAtHasBeenSet;
}

string SkillScanItem::GetMessage() const
{
    return m_message;
}

void SkillScanItem::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SkillScanItem::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

