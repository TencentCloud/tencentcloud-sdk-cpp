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

#include <tencentcloud/csip/v20221121/model/BaselineItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineItem::BaselineItem() :
    m_iDHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_checkObjectHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_fixSuggestionHasBeenSet(false),
    m_referenceLinkHasBeenSet(false),
    m_systemCategoryHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_supportFixHasBeenSet(false),
    m_supportCustomValueHasBeenSet(false),
    m_affectedVersionListHasBeenSet(false),
    m_webEditParamHasBeenSet(false),
    m_defaultValueListHasBeenSet(false),
    m_isCustomConfHasBeenSet(false),
    m_customItemIDHasBeenSet(false)
{
}

CoreInternalOutcome BaselineItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.RuleID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetUint64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("CheckObject") && !value["CheckObject"].IsNull())
    {
        if (!value["CheckObject"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineItem.CheckObject` is not array type"));

        const rapidjson::Value &tmpValue = value["CheckObject"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_checkObject.push_back((*itr).GetString());
        }
        m_checkObjectHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("FixSuggestion") && !value["FixSuggestion"].IsNull())
    {
        if (!value["FixSuggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.FixSuggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixSuggestion = string(value["FixSuggestion"].GetString());
        m_fixSuggestionHasBeenSet = true;
    }

    if (value.HasMember("ReferenceLink") && !value["ReferenceLink"].IsNull())
    {
        if (!value["ReferenceLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.ReferenceLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceLink = string(value["ReferenceLink"].GetString());
        m_referenceLinkHasBeenSet = true;
    }

    if (value.HasMember("SystemCategory") && !value["SystemCategory"].IsNull())
    {
        if (!value["SystemCategory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.SystemCategory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemCategory.Deserialize(value["SystemCategory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemCategoryHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.Category` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_category.Deserialize(value["Category"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("SupportFix") && !value["SupportFix"].IsNull())
    {
        if (!value["SupportFix"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.SupportFix` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportFix = value["SupportFix"].GetBool();
        m_supportFixHasBeenSet = true;
    }

    if (value.HasMember("SupportCustomValue") && !value["SupportCustomValue"].IsNull())
    {
        if (!value["SupportCustomValue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.SupportCustomValue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportCustomValue = value["SupportCustomValue"].GetBool();
        m_supportCustomValueHasBeenSet = true;
    }

    if (value.HasMember("AffectedVersionList") && !value["AffectedVersionList"].IsNull())
    {
        if (!value["AffectedVersionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineItem.AffectedVersionList` is not array type"));

        const rapidjson::Value &tmpValue = value["AffectedVersionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_affectedVersionList.push_back((*itr).GetString());
        }
        m_affectedVersionListHasBeenSet = true;
    }

    if (value.HasMember("WebEditParam") && !value["WebEditParam"].IsNull())
    {
        if (!value["WebEditParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.WebEditParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webEditParam = string(value["WebEditParam"].GetString());
        m_webEditParamHasBeenSet = true;
    }

    if (value.HasMember("DefaultValueList") && !value["DefaultValueList"].IsNull())
    {
        if (!value["DefaultValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineItem.DefaultValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["DefaultValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_defaultValueList.push_back((*itr).GetString());
        }
        m_defaultValueListHasBeenSet = true;
    }

    if (value.HasMember("IsCustomConf") && !value["IsCustomConf"].IsNull())
    {
        if (!value["IsCustomConf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.IsCustomConf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCustomConf = value["IsCustomConf"].GetBool();
        m_isCustomConfHasBeenSet = true;
    }

    if (value.HasMember("CustomItemID") && !value["CustomItemID"].IsNull())
    {
        if (!value["CustomItemID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItem.CustomItemID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customItemID = value["CustomItemID"].GetUint64();
        m_customItemIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_checkObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_checkObject.begin(); itr != m_checkObject.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_fixSuggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSuggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixSuggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceLink.c_str(), allocator).Move(), allocator);
    }

    if (m_systemCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemCategory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_category.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_supportFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportFix, allocator);
    }

    if (m_supportCustomValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportCustomValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportCustomValue, allocator);
    }

    if (m_affectedVersionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedVersionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_affectedVersionList.begin(); itr != m_affectedVersionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_webEditParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebEditParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webEditParam.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_defaultValueList.begin(); itr != m_defaultValueList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isCustomConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCustomConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCustomConf, allocator);
    }

    if (m_customItemIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomItemID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customItemID, allocator);
    }

}


uint64_t BaselineItem::GetID() const
{
    return m_iD;
}

void BaselineItem::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BaselineItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

uint64_t BaselineItem::GetRuleID() const
{
    return m_ruleID;
}

void BaselineItem::SetRuleID(const uint64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool BaselineItem::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

vector<string> BaselineItem::GetCheckObject() const
{
    return m_checkObject;
}

void BaselineItem::SetCheckObject(const vector<string>& _checkObject)
{
    m_checkObject = _checkObject;
    m_checkObjectHasBeenSet = true;
}

bool BaselineItem::CheckObjectHasBeenSet() const
{
    return m_checkObjectHasBeenSet;
}

string BaselineItem::GetRiskLevel() const
{
    return m_riskLevel;
}

void BaselineItem::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool BaselineItem::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string BaselineItem::GetName() const
{
    return m_name;
}

void BaselineItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BaselineItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BaselineItem::GetDescription() const
{
    return m_description;
}

void BaselineItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BaselineItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string BaselineItem::GetFixSuggestion() const
{
    return m_fixSuggestion;
}

void BaselineItem::SetFixSuggestion(const string& _fixSuggestion)
{
    m_fixSuggestion = _fixSuggestion;
    m_fixSuggestionHasBeenSet = true;
}

bool BaselineItem::FixSuggestionHasBeenSet() const
{
    return m_fixSuggestionHasBeenSet;
}

string BaselineItem::GetReferenceLink() const
{
    return m_referenceLink;
}

void BaselineItem::SetReferenceLink(const string& _referenceLink)
{
    m_referenceLink = _referenceLink;
    m_referenceLinkHasBeenSet = true;
}

bool BaselineItem::ReferenceLinkHasBeenSet() const
{
    return m_referenceLinkHasBeenSet;
}

BaselineCategory BaselineItem::GetSystemCategory() const
{
    return m_systemCategory;
}

void BaselineItem::SetSystemCategory(const BaselineCategory& _systemCategory)
{
    m_systemCategory = _systemCategory;
    m_systemCategoryHasBeenSet = true;
}

bool BaselineItem::SystemCategoryHasBeenSet() const
{
    return m_systemCategoryHasBeenSet;
}

BaselineCategory BaselineItem::GetCategory() const
{
    return m_category;
}

void BaselineItem::SetCategory(const BaselineCategory& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool BaselineItem::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

bool BaselineItem::GetSupportFix() const
{
    return m_supportFix;
}

void BaselineItem::SetSupportFix(const bool& _supportFix)
{
    m_supportFix = _supportFix;
    m_supportFixHasBeenSet = true;
}

bool BaselineItem::SupportFixHasBeenSet() const
{
    return m_supportFixHasBeenSet;
}

bool BaselineItem::GetSupportCustomValue() const
{
    return m_supportCustomValue;
}

void BaselineItem::SetSupportCustomValue(const bool& _supportCustomValue)
{
    m_supportCustomValue = _supportCustomValue;
    m_supportCustomValueHasBeenSet = true;
}

bool BaselineItem::SupportCustomValueHasBeenSet() const
{
    return m_supportCustomValueHasBeenSet;
}

vector<string> BaselineItem::GetAffectedVersionList() const
{
    return m_affectedVersionList;
}

void BaselineItem::SetAffectedVersionList(const vector<string>& _affectedVersionList)
{
    m_affectedVersionList = _affectedVersionList;
    m_affectedVersionListHasBeenSet = true;
}

bool BaselineItem::AffectedVersionListHasBeenSet() const
{
    return m_affectedVersionListHasBeenSet;
}

string BaselineItem::GetWebEditParam() const
{
    return m_webEditParam;
}

void BaselineItem::SetWebEditParam(const string& _webEditParam)
{
    m_webEditParam = _webEditParam;
    m_webEditParamHasBeenSet = true;
}

bool BaselineItem::WebEditParamHasBeenSet() const
{
    return m_webEditParamHasBeenSet;
}

vector<string> BaselineItem::GetDefaultValueList() const
{
    return m_defaultValueList;
}

void BaselineItem::SetDefaultValueList(const vector<string>& _defaultValueList)
{
    m_defaultValueList = _defaultValueList;
    m_defaultValueListHasBeenSet = true;
}

bool BaselineItem::DefaultValueListHasBeenSet() const
{
    return m_defaultValueListHasBeenSet;
}

bool BaselineItem::GetIsCustomConf() const
{
    return m_isCustomConf;
}

void BaselineItem::SetIsCustomConf(const bool& _isCustomConf)
{
    m_isCustomConf = _isCustomConf;
    m_isCustomConfHasBeenSet = true;
}

bool BaselineItem::IsCustomConfHasBeenSet() const
{
    return m_isCustomConfHasBeenSet;
}

uint64_t BaselineItem::GetCustomItemID() const
{
    return m_customItemID;
}

void BaselineItem::SetCustomItemID(const uint64_t& _customItemID)
{
    m_customItemID = _customItemID;
    m_customItemIDHasBeenSet = true;
}

bool BaselineItem::CustomItemIDHasBeenSet() const
{
    return m_customItemIDHasBeenSet;
}

