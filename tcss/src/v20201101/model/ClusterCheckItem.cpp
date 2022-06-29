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

#include <tencentcloud/tcss/v20201101/model/ClusterCheckItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ClusterCheckItem::ClusterCheckItem() :
    m_checkItemIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_itemDetailHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskTargetHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_riskAttributeHasBeenSet(false),
    m_riskPropertyHasBeenSet(false),
    m_cVENumberHasBeenSet(false),
    m_discoverTimeHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_cVSSHasBeenSet(false),
    m_cVSSScoreHasBeenSet(false),
    m_relateLinkHasBeenSet(false),
    m_affectedTypeHasBeenSet(false),
    m_affectedVersionHasBeenSet(false),
    m_ignoredAssetNumHasBeenSet(false),
    m_isIgnoredHasBeenSet(false),
    m_riskAssessmentHasBeenSet(false)
{
}

CoreInternalOutcome ClusterCheckItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckItemId") && !value["CheckItemId"].IsNull())
    {
        if (!value["CheckItemId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.CheckItemId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkItemId = value["CheckItemId"].GetInt64();
        m_checkItemIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ItemDetail") && !value["ItemDetail"].IsNull())
    {
        if (!value["ItemDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.ItemDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemDetail = string(value["ItemDetail"].GetString());
        m_itemDetailHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskTarget") && !value["RiskTarget"].IsNull())
    {
        if (!value["RiskTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.RiskTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTarget = string(value["RiskTarget"].GetString());
        m_riskTargetHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(value["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskAttribute") && !value["RiskAttribute"].IsNull())
    {
        if (!value["RiskAttribute"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.RiskAttribute` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskAttribute = string(value["RiskAttribute"].GetString());
        m_riskAttributeHasBeenSet = true;
    }

    if (value.HasMember("RiskProperty") && !value["RiskProperty"].IsNull())
    {
        if (!value["RiskProperty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.RiskProperty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskProperty = string(value["RiskProperty"].GetString());
        m_riskPropertyHasBeenSet = true;
    }

    if (value.HasMember("CVENumber") && !value["CVENumber"].IsNull())
    {
        if (!value["CVENumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.CVENumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVENumber = string(value["CVENumber"].GetString());
        m_cVENumberHasBeenSet = true;
    }

    if (value.HasMember("DiscoverTime") && !value["DiscoverTime"].IsNull())
    {
        if (!value["DiscoverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.DiscoverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discoverTime = string(value["DiscoverTime"].GetString());
        m_discoverTimeHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("CVSS") && !value["CVSS"].IsNull())
    {
        if (!value["CVSS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.CVSS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVSS = string(value["CVSS"].GetString());
        m_cVSSHasBeenSet = true;
    }

    if (value.HasMember("CVSSScore") && !value["CVSSScore"].IsNull())
    {
        if (!value["CVSSScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.CVSSScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSScore = string(value["CVSSScore"].GetString());
        m_cVSSScoreHasBeenSet = true;
    }

    if (value.HasMember("RelateLink") && !value["RelateLink"].IsNull())
    {
        if (!value["RelateLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.RelateLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relateLink = string(value["RelateLink"].GetString());
        m_relateLinkHasBeenSet = true;
    }

    if (value.HasMember("AffectedType") && !value["AffectedType"].IsNull())
    {
        if (!value["AffectedType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.AffectedType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectedType = string(value["AffectedType"].GetString());
        m_affectedTypeHasBeenSet = true;
    }

    if (value.HasMember("AffectedVersion") && !value["AffectedVersion"].IsNull())
    {
        if (!value["AffectedVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.AffectedVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectedVersion = string(value["AffectedVersion"].GetString());
        m_affectedVersionHasBeenSet = true;
    }

    if (value.HasMember("IgnoredAssetNum") && !value["IgnoredAssetNum"].IsNull())
    {
        if (!value["IgnoredAssetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.IgnoredAssetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ignoredAssetNum = value["IgnoredAssetNum"].GetInt64();
        m_ignoredAssetNumHasBeenSet = true;
    }

    if (value.HasMember("IsIgnored") && !value["IsIgnored"].IsNull())
    {
        if (!value["IsIgnored"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.IsIgnored` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnored = value["IsIgnored"].GetBool();
        m_isIgnoredHasBeenSet = true;
    }

    if (value.HasMember("RiskAssessment") && !value["RiskAssessment"].IsNull())
    {
        if (!value["RiskAssessment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCheckItem.RiskAssessment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskAssessment = string(value["RiskAssessment"].GetString());
        m_riskAssessmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterCheckItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkItemId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_itemDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskTarget.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskAttribute.c_str(), allocator).Move(), allocator);
    }

    if (m_riskPropertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskProperty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskProperty.c_str(), allocator).Move(), allocator);
    }

    if (m_cVENumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVENumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVENumber.c_str(), allocator).Move(), allocator);
    }

    if (m_discoverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discoverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_cVSSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVSS.c_str(), allocator).Move(), allocator);
    }

    if (m_cVSSScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSSScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVSSScore.c_str(), allocator).Move(), allocator);
    }

    if (m_relateLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relateLink.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectedType.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectedVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoredAssetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoredAssetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoredAssetNum, allocator);
    }

    if (m_isIgnoredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnored";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnored, allocator);
    }

    if (m_riskAssessmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAssessment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskAssessment.c_str(), allocator).Move(), allocator);
    }

}


int64_t ClusterCheckItem::GetCheckItemId() const
{
    return m_checkItemId;
}

void ClusterCheckItem::SetCheckItemId(const int64_t& _checkItemId)
{
    m_checkItemId = _checkItemId;
    m_checkItemIdHasBeenSet = true;
}

bool ClusterCheckItem::CheckItemIdHasBeenSet() const
{
    return m_checkItemIdHasBeenSet;
}

string ClusterCheckItem::GetName() const
{
    return m_name;
}

void ClusterCheckItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClusterCheckItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClusterCheckItem::GetItemDetail() const
{
    return m_itemDetail;
}

void ClusterCheckItem::SetItemDetail(const string& _itemDetail)
{
    m_itemDetail = _itemDetail;
    m_itemDetailHasBeenSet = true;
}

bool ClusterCheckItem::ItemDetailHasBeenSet() const
{
    return m_itemDetailHasBeenSet;
}

string ClusterCheckItem::GetRiskLevel() const
{
    return m_riskLevel;
}

void ClusterCheckItem::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ClusterCheckItem::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ClusterCheckItem::GetRiskTarget() const
{
    return m_riskTarget;
}

void ClusterCheckItem::SetRiskTarget(const string& _riskTarget)
{
    m_riskTarget = _riskTarget;
    m_riskTargetHasBeenSet = true;
}

bool ClusterCheckItem::RiskTargetHasBeenSet() const
{
    return m_riskTargetHasBeenSet;
}

string ClusterCheckItem::GetRiskType() const
{
    return m_riskType;
}

void ClusterCheckItem::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool ClusterCheckItem::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string ClusterCheckItem::GetRiskAttribute() const
{
    return m_riskAttribute;
}

void ClusterCheckItem::SetRiskAttribute(const string& _riskAttribute)
{
    m_riskAttribute = _riskAttribute;
    m_riskAttributeHasBeenSet = true;
}

bool ClusterCheckItem::RiskAttributeHasBeenSet() const
{
    return m_riskAttributeHasBeenSet;
}

string ClusterCheckItem::GetRiskProperty() const
{
    return m_riskProperty;
}

void ClusterCheckItem::SetRiskProperty(const string& _riskProperty)
{
    m_riskProperty = _riskProperty;
    m_riskPropertyHasBeenSet = true;
}

bool ClusterCheckItem::RiskPropertyHasBeenSet() const
{
    return m_riskPropertyHasBeenSet;
}

string ClusterCheckItem::GetCVENumber() const
{
    return m_cVENumber;
}

void ClusterCheckItem::SetCVENumber(const string& _cVENumber)
{
    m_cVENumber = _cVENumber;
    m_cVENumberHasBeenSet = true;
}

bool ClusterCheckItem::CVENumberHasBeenSet() const
{
    return m_cVENumberHasBeenSet;
}

string ClusterCheckItem::GetDiscoverTime() const
{
    return m_discoverTime;
}

void ClusterCheckItem::SetDiscoverTime(const string& _discoverTime)
{
    m_discoverTime = _discoverTime;
    m_discoverTimeHasBeenSet = true;
}

bool ClusterCheckItem::DiscoverTimeHasBeenSet() const
{
    return m_discoverTimeHasBeenSet;
}

string ClusterCheckItem::GetSolution() const
{
    return m_solution;
}

void ClusterCheckItem::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool ClusterCheckItem::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string ClusterCheckItem::GetCVSS() const
{
    return m_cVSS;
}

void ClusterCheckItem::SetCVSS(const string& _cVSS)
{
    m_cVSS = _cVSS;
    m_cVSSHasBeenSet = true;
}

bool ClusterCheckItem::CVSSHasBeenSet() const
{
    return m_cVSSHasBeenSet;
}

string ClusterCheckItem::GetCVSSScore() const
{
    return m_cVSSScore;
}

void ClusterCheckItem::SetCVSSScore(const string& _cVSSScore)
{
    m_cVSSScore = _cVSSScore;
    m_cVSSScoreHasBeenSet = true;
}

bool ClusterCheckItem::CVSSScoreHasBeenSet() const
{
    return m_cVSSScoreHasBeenSet;
}

string ClusterCheckItem::GetRelateLink() const
{
    return m_relateLink;
}

void ClusterCheckItem::SetRelateLink(const string& _relateLink)
{
    m_relateLink = _relateLink;
    m_relateLinkHasBeenSet = true;
}

bool ClusterCheckItem::RelateLinkHasBeenSet() const
{
    return m_relateLinkHasBeenSet;
}

string ClusterCheckItem::GetAffectedType() const
{
    return m_affectedType;
}

void ClusterCheckItem::SetAffectedType(const string& _affectedType)
{
    m_affectedType = _affectedType;
    m_affectedTypeHasBeenSet = true;
}

bool ClusterCheckItem::AffectedTypeHasBeenSet() const
{
    return m_affectedTypeHasBeenSet;
}

string ClusterCheckItem::GetAffectedVersion() const
{
    return m_affectedVersion;
}

void ClusterCheckItem::SetAffectedVersion(const string& _affectedVersion)
{
    m_affectedVersion = _affectedVersion;
    m_affectedVersionHasBeenSet = true;
}

bool ClusterCheckItem::AffectedVersionHasBeenSet() const
{
    return m_affectedVersionHasBeenSet;
}

int64_t ClusterCheckItem::GetIgnoredAssetNum() const
{
    return m_ignoredAssetNum;
}

void ClusterCheckItem::SetIgnoredAssetNum(const int64_t& _ignoredAssetNum)
{
    m_ignoredAssetNum = _ignoredAssetNum;
    m_ignoredAssetNumHasBeenSet = true;
}

bool ClusterCheckItem::IgnoredAssetNumHasBeenSet() const
{
    return m_ignoredAssetNumHasBeenSet;
}

bool ClusterCheckItem::GetIsIgnored() const
{
    return m_isIgnored;
}

void ClusterCheckItem::SetIsIgnored(const bool& _isIgnored)
{
    m_isIgnored = _isIgnored;
    m_isIgnoredHasBeenSet = true;
}

bool ClusterCheckItem::IsIgnoredHasBeenSet() const
{
    return m_isIgnoredHasBeenSet;
}

string ClusterCheckItem::GetRiskAssessment() const
{
    return m_riskAssessment;
}

void ClusterCheckItem::SetRiskAssessment(const string& _riskAssessment)
{
    m_riskAssessment = _riskAssessment;
    m_riskAssessmentHasBeenSet = true;
}

bool ClusterCheckItem::RiskAssessmentHasBeenSet() const
{
    return m_riskAssessmentHasBeenSet;
}

