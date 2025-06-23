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

#include <tencentcloud/csip/v20221121/model/RiskRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RiskRuleItem::RiskRuleItem() :
    m_itemIdHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_riskTitleHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_riskInfluenceHasBeenSet(false)
{
}

CoreInternalOutcome RiskRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleItem.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleItem.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("RiskTitle") && !value["RiskTitle"].IsNull())
    {
        if (!value["RiskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleItem.RiskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTitle = string(value["RiskTitle"].GetString());
        m_riskTitleHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleItem.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleItem.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("RiskInfluence") && !value["RiskInfluence"].IsNull())
    {
        if (!value["RiskInfluence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskRuleItem.RiskInfluence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskInfluence = string(value["RiskInfluence"].GetString());
        m_riskInfluenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
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

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severity.c_str(), allocator).Move(), allocator);
    }

    if (m_riskInfluenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInfluence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskInfluence.c_str(), allocator).Move(), allocator);
    }

}


string RiskRuleItem::GetItemId() const
{
    return m_itemId;
}

void RiskRuleItem::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool RiskRuleItem::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string RiskRuleItem::GetProvider() const
{
    return m_provider;
}

void RiskRuleItem::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool RiskRuleItem::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string RiskRuleItem::GetInstanceType() const
{
    return m_instanceType;
}

void RiskRuleItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RiskRuleItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string RiskRuleItem::GetInstanceName() const
{
    return m_instanceName;
}

void RiskRuleItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RiskRuleItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RiskRuleItem::GetRiskTitle() const
{
    return m_riskTitle;
}

void RiskRuleItem::SetRiskTitle(const string& _riskTitle)
{
    m_riskTitle = _riskTitle;
    m_riskTitleHasBeenSet = true;
}

bool RiskRuleItem::RiskTitleHasBeenSet() const
{
    return m_riskTitleHasBeenSet;
}

string RiskRuleItem::GetCheckType() const
{
    return m_checkType;
}

void RiskRuleItem::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool RiskRuleItem::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string RiskRuleItem::GetSeverity() const
{
    return m_severity;
}

void RiskRuleItem::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool RiskRuleItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string RiskRuleItem::GetRiskInfluence() const
{
    return m_riskInfluence;
}

void RiskRuleItem::SetRiskInfluence(const string& _riskInfluence)
{
    m_riskInfluence = _riskInfluence;
    m_riskInfluenceHasBeenSet = true;
}

bool RiskRuleItem::RiskInfluenceHasBeenSet() const
{
    return m_riskInfluenceHasBeenSet;
}

