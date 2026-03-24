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

#include <tencentcloud/config/v20220802/model/EvaluationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

EvaluationResult::EvaluationResult() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_configRuleIdHasBeenSet(false),
    m_configRuleNameHasBeenSet(false),
    m_compliancePackIdHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_annotationHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_invokingEventMessageTypeHasBeenSet(false),
    m_configRuleInvokedTimeHasBeenSet(false),
    m_resultRecordedTimeHasBeenSet(false)
{
}

CoreInternalOutcome EvaluationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigRuleId") && !value["ConfigRuleId"].IsNull())
    {
        if (!value["ConfigRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.ConfigRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configRuleId = string(value["ConfigRuleId"].GetString());
        m_configRuleIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigRuleName") && !value["ConfigRuleName"].IsNull())
    {
        if (!value["ConfigRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.ConfigRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configRuleName = string(value["ConfigRuleName"].GetString());
        m_configRuleNameHasBeenSet = true;
    }

    if (value.HasMember("CompliancePackId") && !value["CompliancePackId"].IsNull())
    {
        if (!value["CompliancePackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.CompliancePackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackId = string(value["CompliancePackId"].GetString());
        m_compliancePackIdHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Annotation") && !value["Annotation"].IsNull())
    {
        if (!value["Annotation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.Annotation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_annotation.Deserialize(value["Annotation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_annotationHasBeenSet = true;
    }

    if (value.HasMember("ComplianceType") && !value["ComplianceType"].IsNull())
    {
        if (!value["ComplianceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.ComplianceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceType = string(value["ComplianceType"].GetString());
        m_complianceTypeHasBeenSet = true;
    }

    if (value.HasMember("InvokingEventMessageType") && !value["InvokingEventMessageType"].IsNull())
    {
        if (!value["InvokingEventMessageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.InvokingEventMessageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokingEventMessageType = string(value["InvokingEventMessageType"].GetString());
        m_invokingEventMessageTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfigRuleInvokedTime") && !value["ConfigRuleInvokedTime"].IsNull())
    {
        if (!value["ConfigRuleInvokedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.ConfigRuleInvokedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configRuleInvokedTime = string(value["ConfigRuleInvokedTime"].GetString());
        m_configRuleInvokedTimeHasBeenSet = true;
    }

    if (value.HasMember("ResultRecordedTime") && !value["ResultRecordedTime"].IsNull())
    {
        if (!value["ResultRecordedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvaluationResult.ResultRecordedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultRecordedTime = string(value["ResultRecordedTime"].GetString());
        m_resultRecordedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EvaluationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_configRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_configRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_compliancePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_annotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_annotation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_complianceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceType.c_str(), allocator).Move(), allocator);
    }

    if (m_invokingEventMessageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokingEventMessageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokingEventMessageType.c_str(), allocator).Move(), allocator);
    }

    if (m_configRuleInvokedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRuleInvokedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configRuleInvokedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resultRecordedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultRecordedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultRecordedTime.c_str(), allocator).Move(), allocator);
    }

}


string EvaluationResult::GetResourceId() const
{
    return m_resourceId;
}

void EvaluationResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool EvaluationResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string EvaluationResult::GetResourceType() const
{
    return m_resourceType;
}

void EvaluationResult::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool EvaluationResult::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string EvaluationResult::GetResourceRegion() const
{
    return m_resourceRegion;
}

void EvaluationResult::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool EvaluationResult::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string EvaluationResult::GetResourceName() const
{
    return m_resourceName;
}

void EvaluationResult::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool EvaluationResult::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string EvaluationResult::GetConfigRuleId() const
{
    return m_configRuleId;
}

void EvaluationResult::SetConfigRuleId(const string& _configRuleId)
{
    m_configRuleId = _configRuleId;
    m_configRuleIdHasBeenSet = true;
}

bool EvaluationResult::ConfigRuleIdHasBeenSet() const
{
    return m_configRuleIdHasBeenSet;
}

string EvaluationResult::GetConfigRuleName() const
{
    return m_configRuleName;
}

void EvaluationResult::SetConfigRuleName(const string& _configRuleName)
{
    m_configRuleName = _configRuleName;
    m_configRuleNameHasBeenSet = true;
}

bool EvaluationResult::ConfigRuleNameHasBeenSet() const
{
    return m_configRuleNameHasBeenSet;
}

string EvaluationResult::GetCompliancePackId() const
{
    return m_compliancePackId;
}

void EvaluationResult::SetCompliancePackId(const string& _compliancePackId)
{
    m_compliancePackId = _compliancePackId;
    m_compliancePackIdHasBeenSet = true;
}

bool EvaluationResult::CompliancePackIdHasBeenSet() const
{
    return m_compliancePackIdHasBeenSet;
}

int64_t EvaluationResult::GetRiskLevel() const
{
    return m_riskLevel;
}

void EvaluationResult::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool EvaluationResult::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

Annotation EvaluationResult::GetAnnotation() const
{
    return m_annotation;
}

void EvaluationResult::SetAnnotation(const Annotation& _annotation)
{
    m_annotation = _annotation;
    m_annotationHasBeenSet = true;
}

bool EvaluationResult::AnnotationHasBeenSet() const
{
    return m_annotationHasBeenSet;
}

string EvaluationResult::GetComplianceType() const
{
    return m_complianceType;
}

void EvaluationResult::SetComplianceType(const string& _complianceType)
{
    m_complianceType = _complianceType;
    m_complianceTypeHasBeenSet = true;
}

bool EvaluationResult::ComplianceTypeHasBeenSet() const
{
    return m_complianceTypeHasBeenSet;
}

string EvaluationResult::GetInvokingEventMessageType() const
{
    return m_invokingEventMessageType;
}

void EvaluationResult::SetInvokingEventMessageType(const string& _invokingEventMessageType)
{
    m_invokingEventMessageType = _invokingEventMessageType;
    m_invokingEventMessageTypeHasBeenSet = true;
}

bool EvaluationResult::InvokingEventMessageTypeHasBeenSet() const
{
    return m_invokingEventMessageTypeHasBeenSet;
}

string EvaluationResult::GetConfigRuleInvokedTime() const
{
    return m_configRuleInvokedTime;
}

void EvaluationResult::SetConfigRuleInvokedTime(const string& _configRuleInvokedTime)
{
    m_configRuleInvokedTime = _configRuleInvokedTime;
    m_configRuleInvokedTimeHasBeenSet = true;
}

bool EvaluationResult::ConfigRuleInvokedTimeHasBeenSet() const
{
    return m_configRuleInvokedTimeHasBeenSet;
}

string EvaluationResult::GetResultRecordedTime() const
{
    return m_resultRecordedTime;
}

void EvaluationResult::SetResultRecordedTime(const string& _resultRecordedTime)
{
    m_resultRecordedTime = _resultRecordedTime;
    m_resultRecordedTimeHasBeenSet = true;
}

bool EvaluationResult::ResultRecordedTimeHasBeenSet() const
{
    return m_resultRecordedTimeHasBeenSet;
}

