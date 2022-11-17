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

#include <tencentcloud/tdid/v20210519/model/DidCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

DidCluster::DidCluster() :
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
    m_totalGroupsHasBeenSet(false),
    m_didCountHasBeenSet(false)
{
}

CoreInternalOutcome DidCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChainId") && !value["ChainId"].IsNull())
    {
        if (!value["ChainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.ChainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chainId = value["ChainId"].GetUint64();
        m_chainIdHasBeenSet = true;
    }

    if (value.HasMember("ChainName") && !value["ChainName"].IsNull())
    {
        if (!value["ChainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.ChainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chainName = string(value["ChainName"].GetString());
        m_chainNameHasBeenSet = true;
    }

    if (value.HasMember("AgencyCount") && !value["AgencyCount"].IsNull())
    {
        if (!value["AgencyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.AgencyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agencyCount = value["AgencyCount"].GetUint64();
        m_agencyCountHasBeenSet = true;
    }

    if (value.HasMember("ConsortiumId") && !value["ConsortiumId"].IsNull())
    {
        if (!value["ConsortiumId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.ConsortiumId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consortiumId = value["ConsortiumId"].GetUint64();
        m_consortiumIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ChainStatus") && !value["ChainStatus"].IsNull())
    {
        if (!value["ChainStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.ChainStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chainStatus = value["ChainStatus"].GetUint64();
        m_chainStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ConsortiumName") && !value["ConsortiumName"].IsNull())
    {
        if (!value["ConsortiumName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.ConsortiumName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consortiumName = string(value["ConsortiumName"].GetString());
        m_consortiumNameHasBeenSet = true;
    }

    if (value.HasMember("AgencyId") && !value["AgencyId"].IsNull())
    {
        if (!value["AgencyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.AgencyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agencyId = value["AgencyId"].GetUint64();
        m_agencyIdHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("TotalNetworkNode") && !value["TotalNetworkNode"].IsNull())
    {
        if (!value["TotalNetworkNode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.TotalNetworkNode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNetworkNode = value["TotalNetworkNode"].GetUint64();
        m_totalNetworkNodeHasBeenSet = true;
    }

    if (value.HasMember("TotalCreateNode") && !value["TotalCreateNode"].IsNull())
    {
        if (!value["TotalCreateNode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.TotalCreateNode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCreateNode = value["TotalCreateNode"].GetUint64();
        m_totalCreateNodeHasBeenSet = true;
    }

    if (value.HasMember("TotalGroups") && !value["TotalGroups"].IsNull())
    {
        if (!value["TotalGroups"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.TotalGroups` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalGroups = value["TotalGroups"].GetUint64();
        m_totalGroupsHasBeenSet = true;
    }

    if (value.HasMember("DidCount") && !value["DidCount"].IsNull())
    {
        if (!value["DidCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCluster.DidCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_didCount = value["DidCount"].GetUint64();
        m_didCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DidCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_didCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_didCount, allocator);
    }

}


uint64_t DidCluster::GetChainId() const
{
    return m_chainId;
}

void DidCluster::SetChainId(const uint64_t& _chainId)
{
    m_chainId = _chainId;
    m_chainIdHasBeenSet = true;
}

bool DidCluster::ChainIdHasBeenSet() const
{
    return m_chainIdHasBeenSet;
}

string DidCluster::GetChainName() const
{
    return m_chainName;
}

void DidCluster::SetChainName(const string& _chainName)
{
    m_chainName = _chainName;
    m_chainNameHasBeenSet = true;
}

bool DidCluster::ChainNameHasBeenSet() const
{
    return m_chainNameHasBeenSet;
}

uint64_t DidCluster::GetAgencyCount() const
{
    return m_agencyCount;
}

void DidCluster::SetAgencyCount(const uint64_t& _agencyCount)
{
    m_agencyCount = _agencyCount;
    m_agencyCountHasBeenSet = true;
}

bool DidCluster::AgencyCountHasBeenSet() const
{
    return m_agencyCountHasBeenSet;
}

uint64_t DidCluster::GetConsortiumId() const
{
    return m_consortiumId;
}

void DidCluster::SetConsortiumId(const uint64_t& _consortiumId)
{
    m_consortiumId = _consortiumId;
    m_consortiumIdHasBeenSet = true;
}

bool DidCluster::ConsortiumIdHasBeenSet() const
{
    return m_consortiumIdHasBeenSet;
}

string DidCluster::GetCreateTime() const
{
    return m_createTime;
}

void DidCluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DidCluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DidCluster::GetExpireTime() const
{
    return m_expireTime;
}

void DidCluster::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DidCluster::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t DidCluster::GetChainStatus() const
{
    return m_chainStatus;
}

void DidCluster::SetChainStatus(const uint64_t& _chainStatus)
{
    m_chainStatus = _chainStatus;
    m_chainStatusHasBeenSet = true;
}

bool DidCluster::ChainStatusHasBeenSet() const
{
    return m_chainStatusHasBeenSet;
}

string DidCluster::GetResourceId() const
{
    return m_resourceId;
}

void DidCluster::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DidCluster::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DidCluster::GetClusterId() const
{
    return m_clusterId;
}

void DidCluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DidCluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DidCluster::GetConsortiumName() const
{
    return m_consortiumName;
}

void DidCluster::SetConsortiumName(const string& _consortiumName)
{
    m_consortiumName = _consortiumName;
    m_consortiumNameHasBeenSet = true;
}

bool DidCluster::ConsortiumNameHasBeenSet() const
{
    return m_consortiumNameHasBeenSet;
}

uint64_t DidCluster::GetAgencyId() const
{
    return m_agencyId;
}

void DidCluster::SetAgencyId(const uint64_t& _agencyId)
{
    m_agencyId = _agencyId;
    m_agencyIdHasBeenSet = true;
}

bool DidCluster::AgencyIdHasBeenSet() const
{
    return m_agencyIdHasBeenSet;
}

uint64_t DidCluster::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DidCluster::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DidCluster::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t DidCluster::GetTotalNetworkNode() const
{
    return m_totalNetworkNode;
}

void DidCluster::SetTotalNetworkNode(const uint64_t& _totalNetworkNode)
{
    m_totalNetworkNode = _totalNetworkNode;
    m_totalNetworkNodeHasBeenSet = true;
}

bool DidCluster::TotalNetworkNodeHasBeenSet() const
{
    return m_totalNetworkNodeHasBeenSet;
}

uint64_t DidCluster::GetTotalCreateNode() const
{
    return m_totalCreateNode;
}

void DidCluster::SetTotalCreateNode(const uint64_t& _totalCreateNode)
{
    m_totalCreateNode = _totalCreateNode;
    m_totalCreateNodeHasBeenSet = true;
}

bool DidCluster::TotalCreateNodeHasBeenSet() const
{
    return m_totalCreateNodeHasBeenSet;
}

uint64_t DidCluster::GetTotalGroups() const
{
    return m_totalGroups;
}

void DidCluster::SetTotalGroups(const uint64_t& _totalGroups)
{
    m_totalGroups = _totalGroups;
    m_totalGroupsHasBeenSet = true;
}

bool DidCluster::TotalGroupsHasBeenSet() const
{
    return m_totalGroupsHasBeenSet;
}

uint64_t DidCluster::GetDidCount() const
{
    return m_didCount;
}

void DidCluster::SetDidCount(const uint64_t& _didCount)
{
    m_didCount = _didCount;
    m_didCountHasBeenSet = true;
}

bool DidCluster::DidCountHasBeenSet() const
{
    return m_didCountHasBeenSet;
}

