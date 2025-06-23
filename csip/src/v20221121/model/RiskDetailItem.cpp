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

#include <tencentcloud/csip/v20221121/model/RiskDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RiskDetailItem::RiskDetailItem() :
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_riskStatusHasBeenSet(false),
    m_riskContentHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_cloudAccountIdHasBeenSet(false),
    m_cloudAccountNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_riskRuleIdHasBeenSet(false),
    m_checkStatusHasBeenSet(false)
{
}

CoreInternalOutcome RiskDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.RiskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = value["RiskStatus"].GetInt64();
        m_riskStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskContent") && !value["RiskContent"].IsNull())
    {
        if (!value["RiskContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.RiskContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskContent = string(value["RiskContent"].GetString());
        m_riskContentHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("ProviderName") && !value["ProviderName"].IsNull())
    {
        if (!value["ProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.ProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_providerName = string(value["ProviderName"].GetString());
        m_providerNameHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountId") && !value["CloudAccountId"].IsNull())
    {
        if (!value["CloudAccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.CloudAccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountId = string(value["CloudAccountId"].GetString());
        m_cloudAccountIdHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountName") && !value["CloudAccountName"].IsNull())
    {
        if (!value["CloudAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.CloudAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountName = string(value["CloudAccountName"].GetString());
        m_cloudAccountNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.RiskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = value["RiskId"].GetUint64();
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("RiskRuleId") && !value["RiskRuleId"].IsNull())
    {
        if (!value["RiskRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.RiskRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskRuleId = string(value["RiskRuleId"].GetString());
        m_riskRuleIdHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDetailItem.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_riskContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskContent.c_str(), allocator).Move(), allocator);
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

    if (m_cloudAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAccountId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskId, allocator);
    }

    if (m_riskRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

}


string RiskDetailItem::GetCreateTime() const
{
    return m_createTime;
}

void RiskDetailItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RiskDetailItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RiskDetailItem::GetUpdateTime() const
{
    return m_updateTime;
}

void RiskDetailItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RiskDetailItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t RiskDetailItem::GetRiskStatus() const
{
    return m_riskStatus;
}

void RiskDetailItem::SetRiskStatus(const int64_t& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool RiskDetailItem::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

string RiskDetailItem::GetRiskContent() const
{
    return m_riskContent;
}

void RiskDetailItem::SetRiskContent(const string& _riskContent)
{
    m_riskContent = _riskContent;
    m_riskContentHasBeenSet = true;
}

bool RiskDetailItem::RiskContentHasBeenSet() const
{
    return m_riskContentHasBeenSet;
}

string RiskDetailItem::GetProvider() const
{
    return m_provider;
}

void RiskDetailItem::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool RiskDetailItem::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string RiskDetailItem::GetProviderName() const
{
    return m_providerName;
}

void RiskDetailItem::SetProviderName(const string& _providerName)
{
    m_providerName = _providerName;
    m_providerNameHasBeenSet = true;
}

bool RiskDetailItem::ProviderNameHasBeenSet() const
{
    return m_providerNameHasBeenSet;
}

string RiskDetailItem::GetCloudAccountId() const
{
    return m_cloudAccountId;
}

void RiskDetailItem::SetCloudAccountId(const string& _cloudAccountId)
{
    m_cloudAccountId = _cloudAccountId;
    m_cloudAccountIdHasBeenSet = true;
}

bool RiskDetailItem::CloudAccountIdHasBeenSet() const
{
    return m_cloudAccountIdHasBeenSet;
}

string RiskDetailItem::GetCloudAccountName() const
{
    return m_cloudAccountName;
}

void RiskDetailItem::SetCloudAccountName(const string& _cloudAccountName)
{
    m_cloudAccountName = _cloudAccountName;
    m_cloudAccountNameHasBeenSet = true;
}

bool RiskDetailItem::CloudAccountNameHasBeenSet() const
{
    return m_cloudAccountNameHasBeenSet;
}

string RiskDetailItem::GetInstanceId() const
{
    return m_instanceId;
}

void RiskDetailItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RiskDetailItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RiskDetailItem::GetInstanceName() const
{
    return m_instanceName;
}

void RiskDetailItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RiskDetailItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t RiskDetailItem::GetRiskId() const
{
    return m_riskId;
}

void RiskDetailItem::SetRiskId(const uint64_t& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool RiskDetailItem::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string RiskDetailItem::GetRiskRuleId() const
{
    return m_riskRuleId;
}

void RiskDetailItem::SetRiskRuleId(const string& _riskRuleId)
{
    m_riskRuleId = _riskRuleId;
    m_riskRuleIdHasBeenSet = true;
}

bool RiskDetailItem::RiskRuleIdHasBeenSet() const
{
    return m_riskRuleIdHasBeenSet;
}

string RiskDetailItem::GetCheckStatus() const
{
    return m_checkStatus;
}

void RiskDetailItem::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool RiskDetailItem::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

