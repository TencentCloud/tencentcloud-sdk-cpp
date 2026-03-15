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

#include <tencentcloud/goosefs/v20220519/model/CustomerClusterAttr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

CustomerClusterAttr::CustomerClusterAttr() :
    m_clusterIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_clientNumHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_managerNodesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterMountSetHasBeenSet(false)
{
}

CoreInternalOutcome CustomerClusterAttr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerClusterAttr.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerClusterAttr.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerClusterAttr.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ClientNum") && !value["ClientNum"].IsNull())
    {
        if (!value["ClientNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerClusterAttr.ClientNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientNum = value["ClientNum"].GetUint64();
        m_clientNumHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerClusterAttr.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerClusterAttr.ClusterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = value["ClusterType"].GetUint64();
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ManagerNodes") && !value["ManagerNodes"].IsNull())
    {
        if (!value["ManagerNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomerClusterAttr.ManagerNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagerNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClientClusterManagerNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_managerNodes.push_back(item);
        }
        m_managerNodesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerClusterAttr.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClusterMountSet") && !value["ClusterMountSet"].IsNull())
    {
        if (!value["ClusterMountSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomerClusterAttr.ClusterMountSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterMountSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterMountAttr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterMountSet.push_back(item);
        }
        m_clusterMountSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomerClusterAttr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientNum, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterType, allocator);
    }

    if (m_managerNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_managerNodes.begin(); itr != m_managerNodes.end(); ++itr, ++i)
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
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_clusterMountSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterMountSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterMountSet.begin(); itr != m_clusterMountSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CustomerClusterAttr::GetClusterId() const
{
    return m_clusterId;
}

void CustomerClusterAttr::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CustomerClusterAttr::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CustomerClusterAttr::GetVpcId() const
{
    return m_vpcId;
}

void CustomerClusterAttr::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CustomerClusterAttr::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CustomerClusterAttr::GetSubnetId() const
{
    return m_subnetId;
}

void CustomerClusterAttr::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CustomerClusterAttr::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t CustomerClusterAttr::GetClientNum() const
{
    return m_clientNum;
}

void CustomerClusterAttr::SetClientNum(const uint64_t& _clientNum)
{
    m_clientNum = _clientNum;
    m_clientNumHasBeenSet = true;
}

bool CustomerClusterAttr::ClientNumHasBeenSet() const
{
    return m_clientNumHasBeenSet;
}

string CustomerClusterAttr::GetClusterName() const
{
    return m_clusterName;
}

void CustomerClusterAttr::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CustomerClusterAttr::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

uint64_t CustomerClusterAttr::GetClusterType() const
{
    return m_clusterType;
}

void CustomerClusterAttr::SetClusterType(const uint64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CustomerClusterAttr::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

vector<ClientClusterManagerNodeInfo> CustomerClusterAttr::GetManagerNodes() const
{
    return m_managerNodes;
}

void CustomerClusterAttr::SetManagerNodes(const vector<ClientClusterManagerNodeInfo>& _managerNodes)
{
    m_managerNodes = _managerNodes;
    m_managerNodesHasBeenSet = true;
}

bool CustomerClusterAttr::ManagerNodesHasBeenSet() const
{
    return m_managerNodesHasBeenSet;
}

uint64_t CustomerClusterAttr::GetStatus() const
{
    return m_status;
}

void CustomerClusterAttr::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CustomerClusterAttr::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<ClusterMountAttr> CustomerClusterAttr::GetClusterMountSet() const
{
    return m_clusterMountSet;
}

void CustomerClusterAttr::SetClusterMountSet(const vector<ClusterMountAttr>& _clusterMountSet)
{
    m_clusterMountSet = _clusterMountSet;
    m_clusterMountSetHasBeenSet = true;
}

bool CustomerClusterAttr::ClusterMountSetHasBeenSet() const
{
    return m_clusterMountSetHasBeenSet;
}

