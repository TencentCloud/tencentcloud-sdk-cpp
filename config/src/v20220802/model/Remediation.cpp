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

#include <tencentcloud/config/v20220802/model/Remediation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

Remediation::Remediation() :
    m_remediationTemplateIdHasBeenSet(false),
    m_remediationIdHasBeenSet(false),
    m_remediationSourceTypeHasBeenSet(false),
    m_remediationTypeHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_invokeTypeHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome Remediation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RemediationTemplateId") && !value["RemediationTemplateId"].IsNull())
    {
        if (!value["RemediationTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remediation.RemediationTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remediationTemplateId = string(value["RemediationTemplateId"].GetString());
        m_remediationTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("RemediationId") && !value["RemediationId"].IsNull())
    {
        if (!value["RemediationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remediation.RemediationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remediationId = string(value["RemediationId"].GetString());
        m_remediationIdHasBeenSet = true;
    }

    if (value.HasMember("RemediationSourceType") && !value["RemediationSourceType"].IsNull())
    {
        if (!value["RemediationSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remediation.RemediationSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remediationSourceType = string(value["RemediationSourceType"].GetString());
        m_remediationSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("RemediationType") && !value["RemediationType"].IsNull())
    {
        if (!value["RemediationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remediation.RemediationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remediationType = string(value["RemediationType"].GetString());
        m_remediationTypeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remediation.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("InvokeType") && !value["InvokeType"].IsNull())
    {
        if (!value["InvokeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remediation.InvokeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeType = string(value["InvokeType"].GetString());
        m_invokeTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remediation.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Remediation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_remediationTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemediationTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remediationTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_remediationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemediationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remediationId.c_str(), allocator).Move(), allocator);
    }

    if (m_remediationSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemediationSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remediationSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_remediationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemediationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remediationType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

}


string Remediation::GetRemediationTemplateId() const
{
    return m_remediationTemplateId;
}

void Remediation::SetRemediationTemplateId(const string& _remediationTemplateId)
{
    m_remediationTemplateId = _remediationTemplateId;
    m_remediationTemplateIdHasBeenSet = true;
}

bool Remediation::RemediationTemplateIdHasBeenSet() const
{
    return m_remediationTemplateIdHasBeenSet;
}

string Remediation::GetRemediationId() const
{
    return m_remediationId;
}

void Remediation::SetRemediationId(const string& _remediationId)
{
    m_remediationId = _remediationId;
    m_remediationIdHasBeenSet = true;
}

bool Remediation::RemediationIdHasBeenSet() const
{
    return m_remediationIdHasBeenSet;
}

string Remediation::GetRemediationSourceType() const
{
    return m_remediationSourceType;
}

void Remediation::SetRemediationSourceType(const string& _remediationSourceType)
{
    m_remediationSourceType = _remediationSourceType;
    m_remediationSourceTypeHasBeenSet = true;
}

bool Remediation::RemediationSourceTypeHasBeenSet() const
{
    return m_remediationSourceTypeHasBeenSet;
}

string Remediation::GetRemediationType() const
{
    return m_remediationType;
}

void Remediation::SetRemediationType(const string& _remediationType)
{
    m_remediationType = _remediationType;
    m_remediationTypeHasBeenSet = true;
}

bool Remediation::RemediationTypeHasBeenSet() const
{
    return m_remediationTypeHasBeenSet;
}

string Remediation::GetOwnerUin() const
{
    return m_ownerUin;
}

void Remediation::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool Remediation::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string Remediation::GetInvokeType() const
{
    return m_invokeType;
}

void Remediation::SetInvokeType(const string& _invokeType)
{
    m_invokeType = _invokeType;
    m_invokeTypeHasBeenSet = true;
}

bool Remediation::InvokeTypeHasBeenSet() const
{
    return m_invokeTypeHasBeenSet;
}

string Remediation::GetRuleId() const
{
    return m_ruleId;
}

void Remediation::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool Remediation::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

