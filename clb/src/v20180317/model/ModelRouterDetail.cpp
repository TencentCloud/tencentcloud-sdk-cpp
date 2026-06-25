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

#include <tencentcloud/clb/v20180317/model/ModelRouterDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelRouterDetail::ModelRouterDetail() :
    m_createdTimeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_modelRouterIdHasBeenSet(false),
    m_modelRouterNameHasBeenSet(false),
    m_modelRouterTypeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false),
    m_routerSettingHasBeenSet(false),
    m_securityStatusHasBeenSet(false),
    m_serviceEndPointsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tradeStatusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_creditUsageHasBeenSet(false),
    m_creditUsageSetHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_clusterInfoHasBeenSet(false)
{
}

CoreInternalOutcome ModelRouterDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterId") && !value["ModelRouterId"].IsNull())
    {
        if (!value["ModelRouterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.ModelRouterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterId = string(value["ModelRouterId"].GetString());
        m_modelRouterIdHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterName") && !value["ModelRouterName"].IsNull())
    {
        if (!value["ModelRouterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.ModelRouterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterName = string(value["ModelRouterName"].GetString());
        m_modelRouterNameHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterType") && !value["ModelRouterType"].IsNull())
    {
        if (!value["ModelRouterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.ModelRouterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterType = string(value["ModelRouterType"].GetString());
        m_modelRouterTypeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("RateLimitConfig") && !value["RateLimitConfig"].IsNull())
    {
        if (!value["RateLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.RateLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rateLimitConfig.Deserialize(value["RateLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rateLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("RouterSetting") && !value["RouterSetting"].IsNull())
    {
        if (!value["RouterSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.RouterSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_routerSetting.Deserialize(value["RouterSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_routerSettingHasBeenSet = true;
    }

    if (value.HasMember("SecurityStatus") && !value["SecurityStatus"].IsNull())
    {
        if (!value["SecurityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.SecurityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityStatus = string(value["SecurityStatus"].GetString());
        m_securityStatusHasBeenSet = true;
    }

    if (value.HasMember("ServiceEndPoints") && !value["ServiceEndPoints"].IsNull())
    {
        if (!value["ServiceEndPoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.ServiceEndPoints` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceEndPoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceEndPoints item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceEndPoints.push_back(item);
        }
        m_serviceEndPointsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("TradeStatus") && !value["TradeStatus"].IsNull())
    {
        if (!value["TradeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.TradeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeStatus = string(value["TradeStatus"].GetString());
        m_tradeStatusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("BudgetId") && !value["BudgetId"].IsNull())
    {
        if (!value["BudgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.BudgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetId = string(value["BudgetId"].GetString());
        m_budgetIdHasBeenSet = true;
    }

    if (value.HasMember("BudgetName") && !value["BudgetName"].IsNull())
    {
        if (!value["BudgetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.BudgetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetName = string(value["BudgetName"].GetString());
        m_budgetNameHasBeenSet = true;
    }

    if (value.HasMember("CreditUsage") && !value["CreditUsage"].IsNull())
    {
        if (!value["CreditUsage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.CreditUsage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creditUsage.Deserialize(value["CreditUsage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creditUsageHasBeenSet = true;
    }

    if (value.HasMember("CreditUsageSet") && !value["CreditUsageSet"].IsNull())
    {
        if (!value["CreditUsageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.CreditUsageSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CreditUsageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreditUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_creditUsageSet.push_back(item);
        }
        m_creditUsageSetHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroups") && !value["SecurityGroups"].IsNull())
    {
        if (!value["SecurityGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.SecurityGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroups.push_back((*itr).GetString());
        }
        m_securityGroupsHasBeenSet = true;
    }

    if (value.HasMember("ClusterInfo") && !value["ClusterInfo"].IsNull())
    {
        if (!value["ClusterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterDetail.ClusterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterInfo.Deserialize(value["ClusterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelRouterDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelRouterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterType.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_routerSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouterSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routerSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceEndPointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEndPoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceEndPoints.begin(); itr != m_serviceEndPoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tradeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetName.c_str(), allocator).Move(), allocator);
    }

    if (m_creditUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creditUsage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_creditUsageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditUsageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_creditUsageSet.begin(); itr != m_creditUsageSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_securityGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModelRouterDetail::GetCreatedTime() const
{
    return m_createdTime;
}

void ModelRouterDetail::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ModelRouterDetail::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ModelRouterDetail::GetDomain() const
{
    return m_domain;
}

void ModelRouterDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModelRouterDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModelRouterDetail::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ModelRouterDetail::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ModelRouterDetail::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string ModelRouterDetail::GetModelRouterName() const
{
    return m_modelRouterName;
}

void ModelRouterDetail::SetModelRouterName(const string& _modelRouterName)
{
    m_modelRouterName = _modelRouterName;
    m_modelRouterNameHasBeenSet = true;
}

bool ModelRouterDetail::ModelRouterNameHasBeenSet() const
{
    return m_modelRouterNameHasBeenSet;
}

string ModelRouterDetail::GetModelRouterType() const
{
    return m_modelRouterType;
}

void ModelRouterDetail::SetModelRouterType(const string& _modelRouterType)
{
    m_modelRouterType = _modelRouterType;
    m_modelRouterTypeHasBeenSet = true;
}

bool ModelRouterDetail::ModelRouterTypeHasBeenSet() const
{
    return m_modelRouterTypeHasBeenSet;
}

string ModelRouterDetail::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ModelRouterDetail::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ModelRouterDetail::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string ModelRouterDetail::GetNetworkType() const
{
    return m_networkType;
}

void ModelRouterDetail::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool ModelRouterDetail::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

RateLimitConfigForModelRouter ModelRouterDetail::GetRateLimitConfig() const
{
    return m_rateLimitConfig;
}

void ModelRouterDetail::SetRateLimitConfig(const RateLimitConfigForModelRouter& _rateLimitConfig)
{
    m_rateLimitConfig = _rateLimitConfig;
    m_rateLimitConfigHasBeenSet = true;
}

bool ModelRouterDetail::RateLimitConfigHasBeenSet() const
{
    return m_rateLimitConfigHasBeenSet;
}

RouterSettingWithFallBack ModelRouterDetail::GetRouterSetting() const
{
    return m_routerSetting;
}

void ModelRouterDetail::SetRouterSetting(const RouterSettingWithFallBack& _routerSetting)
{
    m_routerSetting = _routerSetting;
    m_routerSettingHasBeenSet = true;
}

bool ModelRouterDetail::RouterSettingHasBeenSet() const
{
    return m_routerSettingHasBeenSet;
}

string ModelRouterDetail::GetSecurityStatus() const
{
    return m_securityStatus;
}

void ModelRouterDetail::SetSecurityStatus(const string& _securityStatus)
{
    m_securityStatus = _securityStatus;
    m_securityStatusHasBeenSet = true;
}

bool ModelRouterDetail::SecurityStatusHasBeenSet() const
{
    return m_securityStatusHasBeenSet;
}

vector<ServiceEndPoints> ModelRouterDetail::GetServiceEndPoints() const
{
    return m_serviceEndPoints;
}

void ModelRouterDetail::SetServiceEndPoints(const vector<ServiceEndPoints>& _serviceEndPoints)
{
    m_serviceEndPoints = _serviceEndPoints;
    m_serviceEndPointsHasBeenSet = true;
}

bool ModelRouterDetail::ServiceEndPointsHasBeenSet() const
{
    return m_serviceEndPointsHasBeenSet;
}

string ModelRouterDetail::GetStatus() const
{
    return m_status;
}

void ModelRouterDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelRouterDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModelRouterDetail::GetSubnetId() const
{
    return m_subnetId;
}

void ModelRouterDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModelRouterDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<TagInfo> ModelRouterDetail::GetTags() const
{
    return m_tags;
}

void ModelRouterDetail::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModelRouterDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ModelRouterDetail::GetTradeStatus() const
{
    return m_tradeStatus;
}

void ModelRouterDetail::SetTradeStatus(const string& _tradeStatus)
{
    m_tradeStatus = _tradeStatus;
    m_tradeStatusHasBeenSet = true;
}

bool ModelRouterDetail::TradeStatusHasBeenSet() const
{
    return m_tradeStatusHasBeenSet;
}

string ModelRouterDetail::GetVip() const
{
    return m_vip;
}

void ModelRouterDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModelRouterDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string ModelRouterDetail::GetVpcId() const
{
    return m_vpcId;
}

void ModelRouterDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModelRouterDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModelRouterDetail::GetBudgetId() const
{
    return m_budgetId;
}

void ModelRouterDetail::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool ModelRouterDetail::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

string ModelRouterDetail::GetBudgetName() const
{
    return m_budgetName;
}

void ModelRouterDetail::SetBudgetName(const string& _budgetName)
{
    m_budgetName = _budgetName;
    m_budgetNameHasBeenSet = true;
}

bool ModelRouterDetail::BudgetNameHasBeenSet() const
{
    return m_budgetNameHasBeenSet;
}

CreditUsage ModelRouterDetail::GetCreditUsage() const
{
    return m_creditUsage;
}

void ModelRouterDetail::SetCreditUsage(const CreditUsage& _creditUsage)
{
    m_creditUsage = _creditUsage;
    m_creditUsageHasBeenSet = true;
}

bool ModelRouterDetail::CreditUsageHasBeenSet() const
{
    return m_creditUsageHasBeenSet;
}

vector<CreditUsage> ModelRouterDetail::GetCreditUsageSet() const
{
    return m_creditUsageSet;
}

void ModelRouterDetail::SetCreditUsageSet(const vector<CreditUsage>& _creditUsageSet)
{
    m_creditUsageSet = _creditUsageSet;
    m_creditUsageSetHasBeenSet = true;
}

bool ModelRouterDetail::CreditUsageSetHasBeenSet() const
{
    return m_creditUsageSetHasBeenSet;
}

vector<string> ModelRouterDetail::GetSecurityGroups() const
{
    return m_securityGroups;
}

void ModelRouterDetail::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool ModelRouterDetail::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}

ClusterInfo ModelRouterDetail::GetClusterInfo() const
{
    return m_clusterInfo;
}

void ModelRouterDetail::SetClusterInfo(const ClusterInfo& _clusterInfo)
{
    m_clusterInfo = _clusterInfo;
    m_clusterInfoHasBeenSet = true;
}

bool ModelRouterDetail::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

