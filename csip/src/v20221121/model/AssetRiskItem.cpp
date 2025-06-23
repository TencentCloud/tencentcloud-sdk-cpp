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

#include <tencentcloud/csip/v20221121/model/AssetRiskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetRiskItem::AssetRiskItem() :
    m_appIdHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_cloudAccountNameHasBeenSet(false),
    m_cloudAccountIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_riskStatusHasBeenSet(false),
    m_riskTitleHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_riskRuleIdHasBeenSet(false)
{
}

CoreInternalOutcome AssetRiskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("ProviderName") && !value["ProviderName"].IsNull())
    {
        if (!value["ProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.ProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_providerName = string(value["ProviderName"].GetString());
        m_providerNameHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountName") && !value["CloudAccountName"].IsNull())
    {
        if (!value["CloudAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.CloudAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountName = string(value["CloudAccountName"].GetString());
        m_cloudAccountNameHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountId") && !value["CloudAccountId"].IsNull())
    {
        if (!value["CloudAccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.CloudAccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountId = string(value["CloudAccountId"].GetString());
        m_cloudAccountIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.RiskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = value["RiskStatus"].GetInt64();
        m_riskStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskTitle") && !value["RiskTitle"].IsNull())
    {
        if (!value["RiskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.RiskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTitle = string(value["RiskTitle"].GetString());
        m_riskTitleHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("RiskRuleId") && !value["RiskRuleId"].IsNull())
    {
        if (!value["RiskRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskItem.RiskRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskRuleId = string(value["RiskRuleId"].GetString());
        m_riskRuleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetRiskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_providerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_providerName.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAccountId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_riskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskStatus, allocator);
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

    if (m_riskRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskRuleId.c_str(), allocator).Move(), allocator);
    }

}


int64_t AssetRiskItem::GetAppId() const
{
    return m_appId;
}

void AssetRiskItem::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AssetRiskItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AssetRiskItem::GetProvider() const
{
    return m_provider;
}

void AssetRiskItem::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool AssetRiskItem::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string AssetRiskItem::GetProviderName() const
{
    return m_providerName;
}

void AssetRiskItem::SetProviderName(const string& _providerName)
{
    m_providerName = _providerName;
    m_providerNameHasBeenSet = true;
}

bool AssetRiskItem::ProviderNameHasBeenSet() const
{
    return m_providerNameHasBeenSet;
}

string AssetRiskItem::GetCloudAccountName() const
{
    return m_cloudAccountName;
}

void AssetRiskItem::SetCloudAccountName(const string& _cloudAccountName)
{
    m_cloudAccountName = _cloudAccountName;
    m_cloudAccountNameHasBeenSet = true;
}

bool AssetRiskItem::CloudAccountNameHasBeenSet() const
{
    return m_cloudAccountNameHasBeenSet;
}

string AssetRiskItem::GetCloudAccountId() const
{
    return m_cloudAccountId;
}

void AssetRiskItem::SetCloudAccountId(const string& _cloudAccountId)
{
    m_cloudAccountId = _cloudAccountId;
    m_cloudAccountIdHasBeenSet = true;
}

bool AssetRiskItem::CloudAccountIdHasBeenSet() const
{
    return m_cloudAccountIdHasBeenSet;
}

string AssetRiskItem::GetInstanceName() const
{
    return m_instanceName;
}

void AssetRiskItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AssetRiskItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AssetRiskItem::GetInstanceId() const
{
    return m_instanceId;
}

void AssetRiskItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssetRiskItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssetRiskItem::GetCreateTime() const
{
    return m_createTime;
}

void AssetRiskItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AssetRiskItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AssetRiskItem::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetRiskItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetRiskItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t AssetRiskItem::GetRiskStatus() const
{
    return m_riskStatus;
}

void AssetRiskItem::SetRiskStatus(const int64_t& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool AssetRiskItem::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

string AssetRiskItem::GetRiskTitle() const
{
    return m_riskTitle;
}

void AssetRiskItem::SetRiskTitle(const string& _riskTitle)
{
    m_riskTitle = _riskTitle;
    m_riskTitleHasBeenSet = true;
}

bool AssetRiskItem::RiskTitleHasBeenSet() const
{
    return m_riskTitleHasBeenSet;
}

string AssetRiskItem::GetCheckType() const
{
    return m_checkType;
}

void AssetRiskItem::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool AssetRiskItem::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string AssetRiskItem::GetSeverity() const
{
    return m_severity;
}

void AssetRiskItem::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool AssetRiskItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string AssetRiskItem::GetRiskRuleId() const
{
    return m_riskRuleId;
}

void AssetRiskItem::SetRiskRuleId(const string& _riskRuleId)
{
    m_riskRuleId = _riskRuleId;
    m_riskRuleIdHasBeenSet = true;
}

bool AssetRiskItem::RiskRuleIdHasBeenSet() const
{
    return m_riskRuleIdHasBeenSet;
}

