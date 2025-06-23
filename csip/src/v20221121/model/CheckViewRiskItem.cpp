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

#include <tencentcloud/csip/v20221121/model/CheckViewRiskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CheckViewRiskItem::CheckViewRiskItem() :
    m_riskRuleIdHasBeenSet(false),
    m_riskTitleHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_riskDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_riskStatusHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_eventTypeHasBeenSet(false)
{
}

CoreInternalOutcome CheckViewRiskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskRuleId") && !value["RiskRuleId"].IsNull())
    {
        if (!value["RiskRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.RiskRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskRuleId = string(value["RiskRuleId"].GetString());
        m_riskRuleIdHasBeenSet = true;
    }

    if (value.HasMember("RiskTitle") && !value["RiskTitle"].IsNull())
    {
        if (!value["RiskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.RiskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTitle = string(value["RiskTitle"].GetString());
        m_riskTitleHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("RiskDesc") && !value["RiskDesc"].IsNull())
    {
        if (!value["RiskDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.RiskDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDesc = string(value["RiskDesc"].GetString());
        m_riskDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.RiskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = value["RiskStatus"].GetUint64();
        m_riskStatusHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.AssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetUint64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.RiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetUint64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckViewRiskItem.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckViewRiskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskRuleId.c_str(), allocator).Move(), allocator);
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

    if (m_riskDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDesc.c_str(), allocator).Move(), allocator);
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

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_riskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskStatus, allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

}


string CheckViewRiskItem::GetRiskRuleId() const
{
    return m_riskRuleId;
}

void CheckViewRiskItem::SetRiskRuleId(const string& _riskRuleId)
{
    m_riskRuleId = _riskRuleId;
    m_riskRuleIdHasBeenSet = true;
}

bool CheckViewRiskItem::RiskRuleIdHasBeenSet() const
{
    return m_riskRuleIdHasBeenSet;
}

string CheckViewRiskItem::GetRiskTitle() const
{
    return m_riskTitle;
}

void CheckViewRiskItem::SetRiskTitle(const string& _riskTitle)
{
    m_riskTitle = _riskTitle;
    m_riskTitleHasBeenSet = true;
}

bool CheckViewRiskItem::RiskTitleHasBeenSet() const
{
    return m_riskTitleHasBeenSet;
}

string CheckViewRiskItem::GetCheckType() const
{
    return m_checkType;
}

void CheckViewRiskItem::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool CheckViewRiskItem::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string CheckViewRiskItem::GetSeverity() const
{
    return m_severity;
}

void CheckViewRiskItem::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool CheckViewRiskItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string CheckViewRiskItem::GetRiskDesc() const
{
    return m_riskDesc;
}

void CheckViewRiskItem::SetRiskDesc(const string& _riskDesc)
{
    m_riskDesc = _riskDesc;
    m_riskDescHasBeenSet = true;
}

bool CheckViewRiskItem::RiskDescHasBeenSet() const
{
    return m_riskDescHasBeenSet;
}

string CheckViewRiskItem::GetCreateTime() const
{
    return m_createTime;
}

void CheckViewRiskItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CheckViewRiskItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CheckViewRiskItem::GetUpdateTime() const
{
    return m_updateTime;
}

void CheckViewRiskItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CheckViewRiskItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CheckViewRiskItem::GetProvider() const
{
    return m_provider;
}

void CheckViewRiskItem::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CheckViewRiskItem::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

uint64_t CheckViewRiskItem::GetRiskStatus() const
{
    return m_riskStatus;
}

void CheckViewRiskItem::SetRiskStatus(const uint64_t& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool CheckViewRiskItem::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

uint64_t CheckViewRiskItem::GetAssetCount() const
{
    return m_assetCount;
}

void CheckViewRiskItem::SetAssetCount(const uint64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool CheckViewRiskItem::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

uint64_t CheckViewRiskItem::GetRiskCount() const
{
    return m_riskCount;
}

void CheckViewRiskItem::SetRiskCount(const uint64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool CheckViewRiskItem::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string CheckViewRiskItem::GetAssetType() const
{
    return m_assetType;
}

void CheckViewRiskItem::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool CheckViewRiskItem::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string CheckViewRiskItem::GetEventType() const
{
    return m_eventType;
}

void CheckViewRiskItem::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool CheckViewRiskItem::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

