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

#include <tencentcloud/clb/v20180317/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

Cluster::Cluster() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterTagHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_maxConnHasBeenSet(false),
    m_maxInFlowHasBeenSet(false),
    m_maxInPkgHasBeenSet(false),
    m_maxOutFlowHasBeenSet(false),
    m_maxOutPkgHasBeenSet(false),
    m_maxNewConnHasBeenSet(false),
    m_hTTPMaxNewConnHasBeenSet(false),
    m_hTTPSMaxNewConnHasBeenSet(false),
    m_hTTPQpsHasBeenSet(false),
    m_hTTPSQpsHasBeenSet(false),
    m_resourceCountHasBeenSet(false),
    m_idleResourceCountHasBeenSet(false),
    m_loadBalanceDirectorCountHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_clustersZoneHasBeenSet(false)
{
}

CoreInternalOutcome Cluster::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterTag") && !value["ClusterTag"].IsNull())
    {
        if (!value["ClusterTag"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterTag = string(value["ClusterTag"].GetString());
        m_clusterTagHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Network") && !value["Network"].IsNull())
    {
        if (!value["Network"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.Network` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_network = string(value["Network"].GetString());
        m_networkHasBeenSet = true;
    }

    if (value.HasMember("MaxConn") && !value["MaxConn"].IsNull())
    {
        if (!value["MaxConn"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxConn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConn = value["MaxConn"].GetInt64();
        m_maxConnHasBeenSet = true;
    }

    if (value.HasMember("MaxInFlow") && !value["MaxInFlow"].IsNull())
    {
        if (!value["MaxInFlow"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxInFlow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxInFlow = value["MaxInFlow"].GetInt64();
        m_maxInFlowHasBeenSet = true;
    }

    if (value.HasMember("MaxInPkg") && !value["MaxInPkg"].IsNull())
    {
        if (!value["MaxInPkg"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxInPkg` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxInPkg = value["MaxInPkg"].GetInt64();
        m_maxInPkgHasBeenSet = true;
    }

    if (value.HasMember("MaxOutFlow") && !value["MaxOutFlow"].IsNull())
    {
        if (!value["MaxOutFlow"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxOutFlow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxOutFlow = value["MaxOutFlow"].GetInt64();
        m_maxOutFlowHasBeenSet = true;
    }

    if (value.HasMember("MaxOutPkg") && !value["MaxOutPkg"].IsNull())
    {
        if (!value["MaxOutPkg"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxOutPkg` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxOutPkg = value["MaxOutPkg"].GetInt64();
        m_maxOutPkgHasBeenSet = true;
    }

    if (value.HasMember("MaxNewConn") && !value["MaxNewConn"].IsNull())
    {
        if (!value["MaxNewConn"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxNewConn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNewConn = value["MaxNewConn"].GetInt64();
        m_maxNewConnHasBeenSet = true;
    }

    if (value.HasMember("HTTPMaxNewConn") && !value["HTTPMaxNewConn"].IsNull())
    {
        if (!value["HTTPMaxNewConn"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.HTTPMaxNewConn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hTTPMaxNewConn = value["HTTPMaxNewConn"].GetInt64();
        m_hTTPMaxNewConnHasBeenSet = true;
    }

    if (value.HasMember("HTTPSMaxNewConn") && !value["HTTPSMaxNewConn"].IsNull())
    {
        if (!value["HTTPSMaxNewConn"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.HTTPSMaxNewConn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hTTPSMaxNewConn = value["HTTPSMaxNewConn"].GetInt64();
        m_hTTPSMaxNewConnHasBeenSet = true;
    }

    if (value.HasMember("HTTPQps") && !value["HTTPQps"].IsNull())
    {
        if (!value["HTTPQps"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.HTTPQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hTTPQps = value["HTTPQps"].GetInt64();
        m_hTTPQpsHasBeenSet = true;
    }

    if (value.HasMember("HTTPSQps") && !value["HTTPSQps"].IsNull())
    {
        if (!value["HTTPSQps"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.HTTPSQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hTTPSQps = value["HTTPSQps"].GetInt64();
        m_hTTPSQpsHasBeenSet = true;
    }

    if (value.HasMember("ResourceCount") && !value["ResourceCount"].IsNull())
    {
        if (!value["ResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.ResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCount = value["ResourceCount"].GetInt64();
        m_resourceCountHasBeenSet = true;
    }

    if (value.HasMember("IdleResourceCount") && !value["IdleResourceCount"].IsNull())
    {
        if (!value["IdleResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.IdleResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idleResourceCount = value["IdleResourceCount"].GetInt64();
        m_idleResourceCountHasBeenSet = true;
    }

    if (value.HasMember("LoadBalanceDirectorCount") && !value["LoadBalanceDirectorCount"].IsNull())
    {
        if (!value["LoadBalanceDirectorCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.LoadBalanceDirectorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalanceDirectorCount = value["LoadBalanceDirectorCount"].GetInt64();
        m_loadBalanceDirectorCountHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("ClustersZone") && !value["ClustersZone"].IsNull())
    {
        if (!value["ClustersZone"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClustersZone` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clustersZone.Deserialize(value["ClustersZone"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clustersZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cluster::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterTag.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_networkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Network";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_network.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConn, allocator);
    }

    if (m_maxInFlowHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxInFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxInFlow, allocator);
    }

    if (m_maxInPkgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxInPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxInPkg, allocator);
    }

    if (m_maxOutFlowHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxOutFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxOutFlow, allocator);
    }

    if (m_maxOutPkgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxOutPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxOutPkg, allocator);
    }

    if (m_maxNewConnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxNewConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNewConn, allocator);
    }

    if (m_hTTPMaxNewConnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HTTPMaxNewConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hTTPMaxNewConn, allocator);
    }

    if (m_hTTPSMaxNewConnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HTTPSMaxNewConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hTTPSMaxNewConn, allocator);
    }

    if (m_hTTPQpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HTTPQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hTTPQps, allocator);
    }

    if (m_hTTPSQpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HTTPSQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hTTPSQps, allocator);
    }

    if (m_resourceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceCount, allocator);
    }

    if (m_idleResourceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdleResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleResourceCount, allocator);
    }

    if (m_loadBalanceDirectorCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalanceDirectorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalanceDirectorCount, allocator);
    }

    if (m_ispHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_clustersZoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClustersZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_clustersZone.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Cluster::GetClusterId() const
{
    return m_clusterId;
}

void Cluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Cluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Cluster::GetClusterName() const
{
    return m_clusterName;
}

void Cluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool Cluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string Cluster::GetClusterType() const
{
    return m_clusterType;
}

void Cluster::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool Cluster::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string Cluster::GetClusterTag() const
{
    return m_clusterTag;
}

void Cluster::SetClusterTag(const string& _clusterTag)
{
    m_clusterTag = _clusterTag;
    m_clusterTagHasBeenSet = true;
}

bool Cluster::ClusterTagHasBeenSet() const
{
    return m_clusterTagHasBeenSet;
}

string Cluster::GetZone() const
{
    return m_zone;
}

void Cluster::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Cluster::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Cluster::GetNetwork() const
{
    return m_network;
}

void Cluster::SetNetwork(const string& _network)
{
    m_network = _network;
    m_networkHasBeenSet = true;
}

bool Cluster::NetworkHasBeenSet() const
{
    return m_networkHasBeenSet;
}

int64_t Cluster::GetMaxConn() const
{
    return m_maxConn;
}

void Cluster::SetMaxConn(const int64_t& _maxConn)
{
    m_maxConn = _maxConn;
    m_maxConnHasBeenSet = true;
}

bool Cluster::MaxConnHasBeenSet() const
{
    return m_maxConnHasBeenSet;
}

int64_t Cluster::GetMaxInFlow() const
{
    return m_maxInFlow;
}

void Cluster::SetMaxInFlow(const int64_t& _maxInFlow)
{
    m_maxInFlow = _maxInFlow;
    m_maxInFlowHasBeenSet = true;
}

bool Cluster::MaxInFlowHasBeenSet() const
{
    return m_maxInFlowHasBeenSet;
}

int64_t Cluster::GetMaxInPkg() const
{
    return m_maxInPkg;
}

void Cluster::SetMaxInPkg(const int64_t& _maxInPkg)
{
    m_maxInPkg = _maxInPkg;
    m_maxInPkgHasBeenSet = true;
}

bool Cluster::MaxInPkgHasBeenSet() const
{
    return m_maxInPkgHasBeenSet;
}

int64_t Cluster::GetMaxOutFlow() const
{
    return m_maxOutFlow;
}

void Cluster::SetMaxOutFlow(const int64_t& _maxOutFlow)
{
    m_maxOutFlow = _maxOutFlow;
    m_maxOutFlowHasBeenSet = true;
}

bool Cluster::MaxOutFlowHasBeenSet() const
{
    return m_maxOutFlowHasBeenSet;
}

int64_t Cluster::GetMaxOutPkg() const
{
    return m_maxOutPkg;
}

void Cluster::SetMaxOutPkg(const int64_t& _maxOutPkg)
{
    m_maxOutPkg = _maxOutPkg;
    m_maxOutPkgHasBeenSet = true;
}

bool Cluster::MaxOutPkgHasBeenSet() const
{
    return m_maxOutPkgHasBeenSet;
}

int64_t Cluster::GetMaxNewConn() const
{
    return m_maxNewConn;
}

void Cluster::SetMaxNewConn(const int64_t& _maxNewConn)
{
    m_maxNewConn = _maxNewConn;
    m_maxNewConnHasBeenSet = true;
}

bool Cluster::MaxNewConnHasBeenSet() const
{
    return m_maxNewConnHasBeenSet;
}

int64_t Cluster::GetHTTPMaxNewConn() const
{
    return m_hTTPMaxNewConn;
}

void Cluster::SetHTTPMaxNewConn(const int64_t& _hTTPMaxNewConn)
{
    m_hTTPMaxNewConn = _hTTPMaxNewConn;
    m_hTTPMaxNewConnHasBeenSet = true;
}

bool Cluster::HTTPMaxNewConnHasBeenSet() const
{
    return m_hTTPMaxNewConnHasBeenSet;
}

int64_t Cluster::GetHTTPSMaxNewConn() const
{
    return m_hTTPSMaxNewConn;
}

void Cluster::SetHTTPSMaxNewConn(const int64_t& _hTTPSMaxNewConn)
{
    m_hTTPSMaxNewConn = _hTTPSMaxNewConn;
    m_hTTPSMaxNewConnHasBeenSet = true;
}

bool Cluster::HTTPSMaxNewConnHasBeenSet() const
{
    return m_hTTPSMaxNewConnHasBeenSet;
}

int64_t Cluster::GetHTTPQps() const
{
    return m_hTTPQps;
}

void Cluster::SetHTTPQps(const int64_t& _hTTPQps)
{
    m_hTTPQps = _hTTPQps;
    m_hTTPQpsHasBeenSet = true;
}

bool Cluster::HTTPQpsHasBeenSet() const
{
    return m_hTTPQpsHasBeenSet;
}

int64_t Cluster::GetHTTPSQps() const
{
    return m_hTTPSQps;
}

void Cluster::SetHTTPSQps(const int64_t& _hTTPSQps)
{
    m_hTTPSQps = _hTTPSQps;
    m_hTTPSQpsHasBeenSet = true;
}

bool Cluster::HTTPSQpsHasBeenSet() const
{
    return m_hTTPSQpsHasBeenSet;
}

int64_t Cluster::GetResourceCount() const
{
    return m_resourceCount;
}

void Cluster::SetResourceCount(const int64_t& _resourceCount)
{
    m_resourceCount = _resourceCount;
    m_resourceCountHasBeenSet = true;
}

bool Cluster::ResourceCountHasBeenSet() const
{
    return m_resourceCountHasBeenSet;
}

int64_t Cluster::GetIdleResourceCount() const
{
    return m_idleResourceCount;
}

void Cluster::SetIdleResourceCount(const int64_t& _idleResourceCount)
{
    m_idleResourceCount = _idleResourceCount;
    m_idleResourceCountHasBeenSet = true;
}

bool Cluster::IdleResourceCountHasBeenSet() const
{
    return m_idleResourceCountHasBeenSet;
}

int64_t Cluster::GetLoadBalanceDirectorCount() const
{
    return m_loadBalanceDirectorCount;
}

void Cluster::SetLoadBalanceDirectorCount(const int64_t& _loadBalanceDirectorCount)
{
    m_loadBalanceDirectorCount = _loadBalanceDirectorCount;
    m_loadBalanceDirectorCountHasBeenSet = true;
}

bool Cluster::LoadBalanceDirectorCountHasBeenSet() const
{
    return m_loadBalanceDirectorCountHasBeenSet;
}

string Cluster::GetIsp() const
{
    return m_isp;
}

void Cluster::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool Cluster::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

ClustersZone Cluster::GetClustersZone() const
{
    return m_clustersZone;
}

void Cluster::SetClustersZone(const ClustersZone& _clustersZone)
{
    m_clustersZone = _clustersZone;
    m_clustersZoneHasBeenSet = true;
}

bool Cluster::ClustersZoneHasBeenSet() const
{
    return m_clustersZoneHasBeenSet;
}

