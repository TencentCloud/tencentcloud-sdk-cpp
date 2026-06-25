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

#include <tencentcloud/clb/v20180317/model/ModelRouterSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelRouterSet::ModelRouterSet() :
    m_budgetIdHasBeenSet(false),
    m_budgetNameHasBeenSet(false),
    m_clusterInfoHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_creditUsageSetHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_modelRouterIdHasBeenSet(false),
    m_modelRouterNameHasBeenSet(false),
    m_modelRouterTypeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_securityStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tradeStatusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome ModelRouterSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BudgetId") && !value["BudgetId"].IsNull())
    {
        if (!value["BudgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.BudgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetId = string(value["BudgetId"].GetString());
        m_budgetIdHasBeenSet = true;
    }

    if (value.HasMember("BudgetName") && !value["BudgetName"].IsNull())
    {
        if (!value["BudgetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.BudgetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetName = string(value["BudgetName"].GetString());
        m_budgetNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterInfo") && !value["ClusterInfo"].IsNull())
    {
        if (!value["ClusterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.ClusterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterInfo.Deserialize(value["ClusterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterInfoHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("CreditUsageSet") && !value["CreditUsageSet"].IsNull())
    {
        if (!value["CreditUsageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.CreditUsageSet` is not array type"));

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

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterId") && !value["ModelRouterId"].IsNull())
    {
        if (!value["ModelRouterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.ModelRouterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterId = string(value["ModelRouterId"].GetString());
        m_modelRouterIdHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterName") && !value["ModelRouterName"].IsNull())
    {
        if (!value["ModelRouterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.ModelRouterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterName = string(value["ModelRouterName"].GetString());
        m_modelRouterNameHasBeenSet = true;
    }

    if (value.HasMember("ModelRouterType") && !value["ModelRouterType"].IsNull())
    {
        if (!value["ModelRouterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.ModelRouterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterType = string(value["ModelRouterType"].GetString());
        m_modelRouterTypeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("SecurityStatus") && !value["SecurityStatus"].IsNull())
    {
        if (!value["SecurityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.SecurityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityStatus = string(value["SecurityStatus"].GetString());
        m_securityStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.Tags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.TradeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeStatus = string(value["TradeStatus"].GetString());
        m_tradeStatusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterSet.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelRouterSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
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

    if (m_securityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

}


string ModelRouterSet::GetBudgetId() const
{
    return m_budgetId;
}

void ModelRouterSet::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool ModelRouterSet::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

string ModelRouterSet::GetBudgetName() const
{
    return m_budgetName;
}

void ModelRouterSet::SetBudgetName(const string& _budgetName)
{
    m_budgetName = _budgetName;
    m_budgetNameHasBeenSet = true;
}

bool ModelRouterSet::BudgetNameHasBeenSet() const
{
    return m_budgetNameHasBeenSet;
}

ClusterInfo ModelRouterSet::GetClusterInfo() const
{
    return m_clusterInfo;
}

void ModelRouterSet::SetClusterInfo(const ClusterInfo& _clusterInfo)
{
    m_clusterInfo = _clusterInfo;
    m_clusterInfoHasBeenSet = true;
}

bool ModelRouterSet::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

string ModelRouterSet::GetCreatedTime() const
{
    return m_createdTime;
}

void ModelRouterSet::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ModelRouterSet::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<CreditUsage> ModelRouterSet::GetCreditUsageSet() const
{
    return m_creditUsageSet;
}

void ModelRouterSet::SetCreditUsageSet(const vector<CreditUsage>& _creditUsageSet)
{
    m_creditUsageSet = _creditUsageSet;
    m_creditUsageSetHasBeenSet = true;
}

bool ModelRouterSet::CreditUsageSetHasBeenSet() const
{
    return m_creditUsageSetHasBeenSet;
}

string ModelRouterSet::GetDomain() const
{
    return m_domain;
}

void ModelRouterSet::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModelRouterSet::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModelRouterSet::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ModelRouterSet::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ModelRouterSet::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string ModelRouterSet::GetModelRouterName() const
{
    return m_modelRouterName;
}

void ModelRouterSet::SetModelRouterName(const string& _modelRouterName)
{
    m_modelRouterName = _modelRouterName;
    m_modelRouterNameHasBeenSet = true;
}

bool ModelRouterSet::ModelRouterNameHasBeenSet() const
{
    return m_modelRouterNameHasBeenSet;
}

string ModelRouterSet::GetModelRouterType() const
{
    return m_modelRouterType;
}

void ModelRouterSet::SetModelRouterType(const string& _modelRouterType)
{
    m_modelRouterType = _modelRouterType;
    m_modelRouterTypeHasBeenSet = true;
}

bool ModelRouterSet::ModelRouterTypeHasBeenSet() const
{
    return m_modelRouterTypeHasBeenSet;
}

string ModelRouterSet::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ModelRouterSet::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ModelRouterSet::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string ModelRouterSet::GetNetworkType() const
{
    return m_networkType;
}

void ModelRouterSet::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool ModelRouterSet::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string ModelRouterSet::GetSecurityStatus() const
{
    return m_securityStatus;
}

void ModelRouterSet::SetSecurityStatus(const string& _securityStatus)
{
    m_securityStatus = _securityStatus;
    m_securityStatusHasBeenSet = true;
}

bool ModelRouterSet::SecurityStatusHasBeenSet() const
{
    return m_securityStatusHasBeenSet;
}

string ModelRouterSet::GetStatus() const
{
    return m_status;
}

void ModelRouterSet::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelRouterSet::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<TagInfo> ModelRouterSet::GetTags() const
{
    return m_tags;
}

void ModelRouterSet::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModelRouterSet::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ModelRouterSet::GetTradeStatus() const
{
    return m_tradeStatus;
}

void ModelRouterSet::SetTradeStatus(const string& _tradeStatus)
{
    m_tradeStatus = _tradeStatus;
    m_tradeStatusHasBeenSet = true;
}

bool ModelRouterSet::TradeStatusHasBeenSet() const
{
    return m_tradeStatusHasBeenSet;
}

string ModelRouterSet::GetVip() const
{
    return m_vip;
}

void ModelRouterSet::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModelRouterSet::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string ModelRouterSet::GetVpcId() const
{
    return m_vpcId;
}

void ModelRouterSet::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModelRouterSet::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

