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

#include <tencentcloud/tdid/v20210519/model/BcosClusterItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

BcosClusterItem::BcosClusterItem() :
    m_chainIdHasBeenSet(false),
    m_chainNameHasBeenSet(false),
    m_agencyCountHasBeenSet(false),
    m_consortiumIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_chainStatusHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_consortiumNameHasBeenSet(false),
    m_agencyIdHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_totalNetworkNodeHasBeenSet(false),
    m_totalCreateNodeHasBeenSet(false),
    m_totalGroupsHasBeenSet(false)
{
}

CoreInternalOutcome BcosClusterItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChainId") && !value["ChainId"].IsNull())
    {
        if (!value["ChainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.ChainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chainId = value["ChainId"].GetUint64();
        m_chainIdHasBeenSet = true;
    }

    if (value.HasMember("ChainName") && !value["ChainName"].IsNull())
    {
        if (!value["ChainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.ChainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chainName = string(value["ChainName"].GetString());
        m_chainNameHasBeenSet = true;
    }

    if (value.HasMember("AgencyCount") && !value["AgencyCount"].IsNull())
    {
        if (!value["AgencyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.AgencyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agencyCount = value["AgencyCount"].GetUint64();
        m_agencyCountHasBeenSet = true;
    }

    if (value.HasMember("ConsortiumId") && !value["ConsortiumId"].IsNull())
    {
        if (!value["ConsortiumId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.ConsortiumId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consortiumId = value["ConsortiumId"].GetUint64();
        m_consortiumIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ChainStatus") && !value["ChainStatus"].IsNull())
    {
        if (!value["ChainStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.ChainStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chainStatus = value["ChainStatus"].GetUint64();
        m_chainStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ConsortiumName") && !value["ConsortiumName"].IsNull())
    {
        if (!value["ConsortiumName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.ConsortiumName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consortiumName = string(value["ConsortiumName"].GetString());
        m_consortiumNameHasBeenSet = true;
    }

    if (value.HasMember("AgencyId") && !value["AgencyId"].IsNull())
    {
        if (!value["AgencyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.AgencyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agencyId = value["AgencyId"].GetUint64();
        m_agencyIdHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("TotalNetworkNode") && !value["TotalNetworkNode"].IsNull())
    {
        if (!value["TotalNetworkNode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.TotalNetworkNode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNetworkNode = value["TotalNetworkNode"].GetUint64();
        m_totalNetworkNodeHasBeenSet = true;
    }

    if (value.HasMember("TotalCreateNode") && !value["TotalCreateNode"].IsNull())
    {
        if (!value["TotalCreateNode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.TotalCreateNode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCreateNode = value["TotalCreateNode"].GetUint64();
        m_totalCreateNodeHasBeenSet = true;
    }

    if (value.HasMember("TotalGroups") && !value["TotalGroups"].IsNull())
    {
        if (!value["TotalGroups"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosClusterItem.TotalGroups` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalGroups = value["TotalGroups"].GetUint64();
        m_totalGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BcosClusterItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chainId, allocator);
    }

    if (m_chainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chainName.c_str(), allocator).Move(), allocator);
    }

    if (m_agencyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agencyCount, allocator);
    }

    if (m_consortiumIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consortiumId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chainStatus, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_consortiumNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consortiumName.c_str(), allocator).Move(), allocator);
    }

    if (m_agencyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agencyId, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_totalNetworkNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNetworkNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNetworkNode, allocator);
    }

    if (m_totalCreateNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCreateNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCreateNode, allocator);
    }

    if (m_totalGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalGroups, allocator);
    }

}


uint64_t BcosClusterItem::GetChainId() const
{
    return m_chainId;
}

void BcosClusterItem::SetChainId(const uint64_t& _chainId)
{
    m_chainId = _chainId;
    m_chainIdHasBeenSet = true;
}

bool BcosClusterItem::ChainIdHasBeenSet() const
{
    return m_chainIdHasBeenSet;
}

string BcosClusterItem::GetChainName() const
{
    return m_chainName;
}

void BcosClusterItem::SetChainName(const string& _chainName)
{
    m_chainName = _chainName;
    m_chainNameHasBeenSet = true;
}

bool BcosClusterItem::ChainNameHasBeenSet() const
{
    return m_chainNameHasBeenSet;
}

uint64_t BcosClusterItem::GetAgencyCount() const
{
    return m_agencyCount;
}

void BcosClusterItem::SetAgencyCount(const uint64_t& _agencyCount)
{
    m_agencyCount = _agencyCount;
    m_agencyCountHasBeenSet = true;
}

bool BcosClusterItem::AgencyCountHasBeenSet() const
{
    return m_agencyCountHasBeenSet;
}

uint64_t BcosClusterItem::GetConsortiumId() const
{
    return m_consortiumId;
}

void BcosClusterItem::SetConsortiumId(const uint64_t& _consortiumId)
{
    m_consortiumId = _consortiumId;
    m_consortiumIdHasBeenSet = true;
}

bool BcosClusterItem::ConsortiumIdHasBeenSet() const
{
    return m_consortiumIdHasBeenSet;
}

string BcosClusterItem::GetCreateTime() const
{
    return m_createTime;
}

void BcosClusterItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BcosClusterItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BcosClusterItem::GetExpireTime() const
{
    return m_expireTime;
}

void BcosClusterItem::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool BcosClusterItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t BcosClusterItem::GetChainStatus() const
{
    return m_chainStatus;
}

void BcosClusterItem::SetChainStatus(const uint64_t& _chainStatus)
{
    m_chainStatus = _chainStatus;
    m_chainStatusHasBeenSet = true;
}

bool BcosClusterItem::ChainStatusHasBeenSet() const
{
    return m_chainStatusHasBeenSet;
}

string BcosClusterItem::GetResourceId() const
{
    return m_resourceId;
}

void BcosClusterItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BcosClusterItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string BcosClusterItem::GetClusterId() const
{
    return m_clusterId;
}

void BcosClusterItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool BcosClusterItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string BcosClusterItem::GetConsortiumName() const
{
    return m_consortiumName;
}

void BcosClusterItem::SetConsortiumName(const string& _consortiumName)
{
    m_consortiumName = _consortiumName;
    m_consortiumNameHasBeenSet = true;
}

bool BcosClusterItem::ConsortiumNameHasBeenSet() const
{
    return m_consortiumNameHasBeenSet;
}

uint64_t BcosClusterItem::GetAgencyId() const
{
    return m_agencyId;
}

void BcosClusterItem::SetAgencyId(const uint64_t& _agencyId)
{
    m_agencyId = _agencyId;
    m_agencyIdHasBeenSet = true;
}

bool BcosClusterItem::AgencyIdHasBeenSet() const
{
    return m_agencyIdHasBeenSet;
}

uint64_t BcosClusterItem::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void BcosClusterItem::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool BcosClusterItem::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t BcosClusterItem::GetTotalNetworkNode() const
{
    return m_totalNetworkNode;
}

void BcosClusterItem::SetTotalNetworkNode(const uint64_t& _totalNetworkNode)
{
    m_totalNetworkNode = _totalNetworkNode;
    m_totalNetworkNodeHasBeenSet = true;
}

bool BcosClusterItem::TotalNetworkNodeHasBeenSet() const
{
    return m_totalNetworkNodeHasBeenSet;
}

uint64_t BcosClusterItem::GetTotalCreateNode() const
{
    return m_totalCreateNode;
}

void BcosClusterItem::SetTotalCreateNode(const uint64_t& _totalCreateNode)
{
    m_totalCreateNode = _totalCreateNode;
    m_totalCreateNodeHasBeenSet = true;
}

bool BcosClusterItem::TotalCreateNodeHasBeenSet() const
{
    return m_totalCreateNodeHasBeenSet;
}

uint64_t BcosClusterItem::GetTotalGroups() const
{
    return m_totalGroups;
}

void BcosClusterItem::SetTotalGroups(const uint64_t& _totalGroups)
{
    m_totalGroups = _totalGroups;
    m_totalGroupsHasBeenSet = true;
}

bool BcosClusterItem::TotalGroupsHasBeenSet() const
{
    return m_totalGroupsHasBeenSet;
}

