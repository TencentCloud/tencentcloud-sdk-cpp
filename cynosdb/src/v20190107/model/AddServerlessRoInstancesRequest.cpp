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

#include <tencentcloud/cynosdb/v20190107/model/AddServerlessRoInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AddServerlessRoInstancesRequest::AddServerlessRoInstancesRequest() :
    m_clusterIdHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_autoPauseHasBeenSet(false),
    m_autoPauseDelayHasBeenSet(false),
    m_instanceParamsHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_roCountHasBeenSet(false)
{
}

string AddServerlessRoInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPause";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoPause.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPauseDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPauseDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPauseDelay, allocator);
    }

    if (m_instanceParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceParams.begin(); itr != m_instanceParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_paramTemplateId, allocator);
    }

    if (m_roCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roCount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddServerlessRoInstancesRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddServerlessRoInstancesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

double AddServerlessRoInstancesRequest::GetMinCpu() const
{
    return m_minCpu;
}

void AddServerlessRoInstancesRequest::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double AddServerlessRoInstancesRequest::GetMaxCpu() const
{
    return m_maxCpu;
}

void AddServerlessRoInstancesRequest::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

string AddServerlessRoInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void AddServerlessRoInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AddServerlessRoInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void AddServerlessRoInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AddServerlessRoInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void AddServerlessRoInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t AddServerlessRoInstancesRequest::GetPort() const
{
    return m_port;
}

void AddServerlessRoInstancesRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<string> AddServerlessRoInstancesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void AddServerlessRoInstancesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string AddServerlessRoInstancesRequest::GetAutoPause() const
{
    return m_autoPause;
}

void AddServerlessRoInstancesRequest::SetAutoPause(const string& _autoPause)
{
    m_autoPause = _autoPause;
    m_autoPauseHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::AutoPauseHasBeenSet() const
{
    return m_autoPauseHasBeenSet;
}

int64_t AddServerlessRoInstancesRequest::GetAutoPauseDelay() const
{
    return m_autoPauseDelay;
}

void AddServerlessRoInstancesRequest::SetAutoPauseDelay(const int64_t& _autoPauseDelay)
{
    m_autoPauseDelay = _autoPauseDelay;
    m_autoPauseDelayHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::AutoPauseDelayHasBeenSet() const
{
    return m_autoPauseDelayHasBeenSet;
}

vector<ModifyParamItem> AddServerlessRoInstancesRequest::GetInstanceParams() const
{
    return m_instanceParams;
}

void AddServerlessRoInstancesRequest::SetInstanceParams(const vector<ModifyParamItem>& _instanceParams)
{
    m_instanceParams = _instanceParams;
    m_instanceParamsHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::InstanceParamsHasBeenSet() const
{
    return m_instanceParamsHasBeenSet;
}

int64_t AddServerlessRoInstancesRequest::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void AddServerlessRoInstancesRequest::SetParamTemplateId(const int64_t& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

int64_t AddServerlessRoInstancesRequest::GetRoCount() const
{
    return m_roCount;
}

void AddServerlessRoInstancesRequest::SetRoCount(const int64_t& _roCount)
{
    m_roCount = _roCount;
    m_roCountHasBeenSet = true;
}

bool AddServerlessRoInstancesRequest::RoCountHasBeenSet() const
{
    return m_roCountHasBeenSet;
}


