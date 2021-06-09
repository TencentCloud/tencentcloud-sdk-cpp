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

#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

CreateReadOnlyGroupRequest::CreateReadOnlyGroupRequest() :
    m_masterDBInstanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_replayLagEliminateHasBeenSet(false),
    m_replayLatencyEliminateHasBeenSet(false),
    m_maxReplayLagHasBeenSet(false),
    m_maxReplayLatencyHasBeenSet(false),
    m_minDelayEliminateReserveHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

string CreateReadOnlyGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_masterDBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterDBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterDBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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

    if (m_replayLagEliminateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayLagEliminate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replayLagEliminate, allocator);
    }

    if (m_replayLatencyEliminateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayLatencyEliminate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replayLatencyEliminate, allocator);
    }

    if (m_maxReplayLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplayLag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReplayLag, allocator);
    }

    if (m_maxReplayLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplayLatency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReplayLatency, allocator);
    }

    if (m_minDelayEliminateReserveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDelayEliminateReserve";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minDelayEliminateReserve, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateReadOnlyGroupRequest::GetMasterDBInstanceId() const
{
    return m_masterDBInstanceId;
}

void CreateReadOnlyGroupRequest::SetMasterDBInstanceId(const string& _masterDBInstanceId)
{
    m_masterDBInstanceId = _masterDBInstanceId;
    m_masterDBInstanceIdHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::MasterDBInstanceIdHasBeenSet() const
{
    return m_masterDBInstanceIdHasBeenSet;
}

string CreateReadOnlyGroupRequest::GetName() const
{
    return m_name;
}

void CreateReadOnlyGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateReadOnlyGroupRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateReadOnlyGroupRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateReadOnlyGroupRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateReadOnlyGroupRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateReadOnlyGroupRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateReadOnlyGroupRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t CreateReadOnlyGroupRequest::GetReplayLagEliminate() const
{
    return m_replayLagEliminate;
}

void CreateReadOnlyGroupRequest::SetReplayLagEliminate(const uint64_t& _replayLagEliminate)
{
    m_replayLagEliminate = _replayLagEliminate;
    m_replayLagEliminateHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::ReplayLagEliminateHasBeenSet() const
{
    return m_replayLagEliminateHasBeenSet;
}

uint64_t CreateReadOnlyGroupRequest::GetReplayLatencyEliminate() const
{
    return m_replayLatencyEliminate;
}

void CreateReadOnlyGroupRequest::SetReplayLatencyEliminate(const uint64_t& _replayLatencyEliminate)
{
    m_replayLatencyEliminate = _replayLatencyEliminate;
    m_replayLatencyEliminateHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::ReplayLatencyEliminateHasBeenSet() const
{
    return m_replayLatencyEliminateHasBeenSet;
}

uint64_t CreateReadOnlyGroupRequest::GetMaxReplayLag() const
{
    return m_maxReplayLag;
}

void CreateReadOnlyGroupRequest::SetMaxReplayLag(const uint64_t& _maxReplayLag)
{
    m_maxReplayLag = _maxReplayLag;
    m_maxReplayLagHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::MaxReplayLagHasBeenSet() const
{
    return m_maxReplayLagHasBeenSet;
}

uint64_t CreateReadOnlyGroupRequest::GetMaxReplayLatency() const
{
    return m_maxReplayLatency;
}

void CreateReadOnlyGroupRequest::SetMaxReplayLatency(const uint64_t& _maxReplayLatency)
{
    m_maxReplayLatency = _maxReplayLatency;
    m_maxReplayLatencyHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::MaxReplayLatencyHasBeenSet() const
{
    return m_maxReplayLatencyHasBeenSet;
}

uint64_t CreateReadOnlyGroupRequest::GetMinDelayEliminateReserve() const
{
    return m_minDelayEliminateReserve;
}

void CreateReadOnlyGroupRequest::SetMinDelayEliminateReserve(const uint64_t& _minDelayEliminateReserve)
{
    m_minDelayEliminateReserve = _minDelayEliminateReserve;
    m_minDelayEliminateReserveHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::MinDelayEliminateReserveHasBeenSet() const
{
    return m_minDelayEliminateReserveHasBeenSet;
}

vector<string> CreateReadOnlyGroupRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateReadOnlyGroupRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateReadOnlyGroupRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}


