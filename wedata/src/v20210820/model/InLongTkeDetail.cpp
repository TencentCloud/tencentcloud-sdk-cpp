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

#include <tencentcloud/wedata/v20210820/model/InLongTkeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InLongTkeDetail::InLongTkeDetail() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hasAgentHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_tkeRegionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

CoreInternalOutcome InLongTkeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongTkeDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongTkeDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongTkeDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("HasAgent") && !value["HasAgent"].IsNull())
    {
        if (!value["HasAgent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InLongTkeDetail.HasAgent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasAgent = value["HasAgent"].GetBool();
        m_hasAgentHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongTkeDetail.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongTkeDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("TkeRegion") && !value["TkeRegion"].IsNull())
    {
        if (!value["TkeRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongTkeDetail.TkeRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tkeRegion = string(value["TkeRegion"].GetString());
        m_tkeRegionHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongTkeDetail.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InLongTkeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_hasAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasAgent, allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_tkeRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tkeRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

}


string InLongTkeDetail::GetClusterId() const
{
    return m_clusterId;
}

void InLongTkeDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool InLongTkeDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string InLongTkeDetail::GetClusterName() const
{
    return m_clusterName;
}

void InLongTkeDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool InLongTkeDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string InLongTkeDetail::GetStatus() const
{
    return m_status;
}

void InLongTkeDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InLongTkeDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool InLongTkeDetail::GetHasAgent() const
{
    return m_hasAgent;
}

void InLongTkeDetail::SetHasAgent(const bool& _hasAgent)
{
    m_hasAgent = _hasAgent;
    m_hasAgentHasBeenSet = true;
}

bool InLongTkeDetail::HasAgentHasBeenSet() const
{
    return m_hasAgentHasBeenSet;
}

string InLongTkeDetail::GetAgentId() const
{
    return m_agentId;
}

void InLongTkeDetail::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool InLongTkeDetail::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string InLongTkeDetail::GetVpcId() const
{
    return m_vpcId;
}

void InLongTkeDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InLongTkeDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InLongTkeDetail::GetTkeRegion() const
{
    return m_tkeRegion;
}

void InLongTkeDetail::SetTkeRegion(const string& _tkeRegion)
{
    m_tkeRegion = _tkeRegion;
    m_tkeRegionHasBeenSet = true;
}

bool InLongTkeDetail::TkeRegionHasBeenSet() const
{
    return m_tkeRegionHasBeenSet;
}

string InLongTkeDetail::GetClusterType() const
{
    return m_clusterType;
}

void InLongTkeDetail::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool InLongTkeDetail::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

