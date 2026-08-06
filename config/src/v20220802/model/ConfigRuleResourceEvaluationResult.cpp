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

#include <tencentcloud/config/v20220802/model/ConfigRuleResourceEvaluationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ConfigRuleResourceEvaluationResult::ConfigRuleResourceEvaluationResult() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdentifierHasBeenSet(false),
    m_ruleDescriptionHasBeenSet(false),
    m_ruleOwnerIdHasBeenSet(false),
    m_ruleRiskLevelHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_annotationHasBeenSet(false)
{
}

CoreInternalOutcome ConfigRuleResourceEvaluationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleIdentifier") && !value["RuleIdentifier"].IsNull())
    {
        if (!value["RuleIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.RuleIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleIdentifier = string(value["RuleIdentifier"].GetString());
        m_ruleIdentifierHasBeenSet = true;
    }

    if (value.HasMember("RuleDescription") && !value["RuleDescription"].IsNull())
    {
        if (!value["RuleDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.RuleDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDescription = string(value["RuleDescription"].GetString());
        m_ruleDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleOwnerId") && !value["RuleOwnerId"].IsNull())
    {
        if (!value["RuleOwnerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.RuleOwnerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleOwnerId = value["RuleOwnerId"].GetInt64();
        m_ruleOwnerIdHasBeenSet = true;
    }

    if (value.HasMember("RuleRiskLevel") && !value["RuleRiskLevel"].IsNull())
    {
        if (!value["RuleRiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.RuleRiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleRiskLevel = value["RuleRiskLevel"].GetInt64();
        m_ruleRiskLevelHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceTags.push_back(item);
        }
        m_resourceTagsHasBeenSet = true;
    }

    if (value.HasMember("Annotation") && !value["Annotation"].IsNull())
    {
        if (!value["Annotation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRuleResourceEvaluationResult.Annotation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_annotation.Deserialize(value["Annotation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_annotationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigRuleResourceEvaluationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleOwnerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleOwnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleOwnerId, allocator);
    }

    if (m_ruleRiskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleRiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleRiskLevel, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_annotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_annotation.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ConfigRuleResourceEvaluationResult::GetRuleId() const
{
    return m_ruleId;
}

void ConfigRuleResourceEvaluationResult::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ConfigRuleResourceEvaluationResult::GetRuleName() const
{
    return m_ruleName;
}

void ConfigRuleResourceEvaluationResult::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ConfigRuleResourceEvaluationResult::GetRuleIdentifier() const
{
    return m_ruleIdentifier;
}

void ConfigRuleResourceEvaluationResult::SetRuleIdentifier(const string& _ruleIdentifier)
{
    m_ruleIdentifier = _ruleIdentifier;
    m_ruleIdentifierHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::RuleIdentifierHasBeenSet() const
{
    return m_ruleIdentifierHasBeenSet;
}

string ConfigRuleResourceEvaluationResult::GetRuleDescription() const
{
    return m_ruleDescription;
}

void ConfigRuleResourceEvaluationResult::SetRuleDescription(const string& _ruleDescription)
{
    m_ruleDescription = _ruleDescription;
    m_ruleDescriptionHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::RuleDescriptionHasBeenSet() const
{
    return m_ruleDescriptionHasBeenSet;
}

int64_t ConfigRuleResourceEvaluationResult::GetRuleOwnerId() const
{
    return m_ruleOwnerId;
}

void ConfigRuleResourceEvaluationResult::SetRuleOwnerId(const int64_t& _ruleOwnerId)
{
    m_ruleOwnerId = _ruleOwnerId;
    m_ruleOwnerIdHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::RuleOwnerIdHasBeenSet() const
{
    return m_ruleOwnerIdHasBeenSet;
}

int64_t ConfigRuleResourceEvaluationResult::GetRuleRiskLevel() const
{
    return m_ruleRiskLevel;
}

void ConfigRuleResourceEvaluationResult::SetRuleRiskLevel(const int64_t& _ruleRiskLevel)
{
    m_ruleRiskLevel = _ruleRiskLevel;
    m_ruleRiskLevelHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::RuleRiskLevelHasBeenSet() const
{
    return m_ruleRiskLevelHasBeenSet;
}

string ConfigRuleResourceEvaluationResult::GetResourceId() const
{
    return m_resourceId;
}

void ConfigRuleResourceEvaluationResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ConfigRuleResourceEvaluationResult::GetResourceType() const
{
    return m_resourceType;
}

void ConfigRuleResourceEvaluationResult::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ConfigRuleResourceEvaluationResult::GetResourceName() const
{
    return m_resourceName;
}

void ConfigRuleResourceEvaluationResult::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string ConfigRuleResourceEvaluationResult::GetResourceRegion() const
{
    return m_resourceRegion;
}

void ConfigRuleResourceEvaluationResult::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

vector<Tag> ConfigRuleResourceEvaluationResult::GetResourceTags() const
{
    return m_resourceTags;
}

void ConfigRuleResourceEvaluationResult::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

Annotation ConfigRuleResourceEvaluationResult::GetAnnotation() const
{
    return m_annotation;
}

void ConfigRuleResourceEvaluationResult::SetAnnotation(const Annotation& _annotation)
{
    m_annotation = _annotation;
    m_annotationHasBeenSet = true;
}

bool ConfigRuleResourceEvaluationResult::AnnotationHasBeenSet() const
{
    return m_annotationHasBeenSet;
}

