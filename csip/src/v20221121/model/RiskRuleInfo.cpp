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

#include <tencentcloud/csip/v20221121/model/RiskRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RiskRuleInfo::RiskRuleInfo() :
    m_ruleIDHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_riskTitleHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskInfluenceHasBeenSet(false),
    m_riskFixAdvanceHasBeenSet(false),
    m_dispositionTypeHasBeenSet(false)
{
}

CoreInternalOutcome RiskRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleInfo.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleInfo.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskTitle") && !value["RiskTitle"].IsNull())
    {
        if (!value["RiskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleInfo.RiskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTitle = string(value["RiskTitle"].GetString());
        m_riskTitleHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleInfo.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleInfo.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskInfluence") && !value["RiskInfluence"].IsNull())
    {
        if (!value["RiskInfluence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleInfo.RiskInfluence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskInfluence = string(value["RiskInfluence"].GetString());
        m_riskInfluenceHasBeenSet = true;
    }

    if (value.HasMember("RiskFixAdvance") && !value["RiskFixAdvance"].IsNull())
    {
        if (!value["RiskFixAdvance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleInfo.RiskFixAdvance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskFixAdvance = string(value["RiskFixAdvance"].GetString());
        m_riskFixAdvanceHasBeenSet = true;
    }

    if (value.HasMember("DispositionType") && !value["DispositionType"].IsNull())
    {
        if (!value["DispositionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleInfo.DispositionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dispositionType = string(value["DispositionType"].GetString());
        m_dispositionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskInfluenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInfluence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskInfluence.c_str(), allocator).Move(), allocator);
    }

    if (m_riskFixAdvanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskFixAdvance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskFixAdvance.c_str(), allocator).Move(), allocator);
    }

    if (m_dispositionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispositionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dispositionType.c_str(), allocator).Move(), allocator);
    }

}


string RiskRuleInfo::GetRuleID() const
{
    return m_ruleID;
}

void RiskRuleInfo::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool RiskRuleInfo::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string RiskRuleInfo::GetProvider() const
{
    return m_provider;
}

void RiskRuleInfo::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool RiskRuleInfo::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string RiskRuleInfo::GetInstanceType() const
{
    return m_instanceType;
}

void RiskRuleInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RiskRuleInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string RiskRuleInfo::GetRiskTitle() const
{
    return m_riskTitle;
}

void RiskRuleInfo::SetRiskTitle(const string& _riskTitle)
{
    m_riskTitle = _riskTitle;
    m_riskTitleHasBeenSet = true;
}

bool RiskRuleInfo::RiskTitleHasBeenSet() const
{
    return m_riskTitleHasBeenSet;
}

string RiskRuleInfo::GetCheckType() const
{
    return m_checkType;
}

void RiskRuleInfo::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool RiskRuleInfo::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string RiskRuleInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void RiskRuleInfo::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool RiskRuleInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string RiskRuleInfo::GetRiskInfluence() const
{
    return m_riskInfluence;
}

void RiskRuleInfo::SetRiskInfluence(const string& _riskInfluence)
{
    m_riskInfluence = _riskInfluence;
    m_riskInfluenceHasBeenSet = true;
}

bool RiskRuleInfo::RiskInfluenceHasBeenSet() const
{
    return m_riskInfluenceHasBeenSet;
}

string RiskRuleInfo::GetRiskFixAdvance() const
{
    return m_riskFixAdvance;
}

void RiskRuleInfo::SetRiskFixAdvance(const string& _riskFixAdvance)
{
    m_riskFixAdvance = _riskFixAdvance;
    m_riskFixAdvanceHasBeenSet = true;
}

bool RiskRuleInfo::RiskFixAdvanceHasBeenSet() const
{
    return m_riskFixAdvanceHasBeenSet;
}

string RiskRuleInfo::GetDispositionType() const
{
    return m_dispositionType;
}

void RiskRuleInfo::SetDispositionType(const string& _dispositionType)
{
    m_dispositionType = _dispositionType;
    m_dispositionTypeHasBeenSet = true;
}

bool RiskRuleInfo::DispositionTypeHasBeenSet() const
{
    return m_dispositionTypeHasBeenSet;
}

