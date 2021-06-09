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

#include <tencentcloud/postgres/v20170312/model/ModifyReadOnlyGroupConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyReadOnlyGroupConfigRequest::ModifyReadOnlyGroupConfigRequest() :
    m_readOnlyGroupIdHasBeenSet(false),
    m_readOnlyGroupNameHasBeenSet(false),
    m_replayLagEliminateHasBeenSet(false),
    m_replayLatencyEliminateHasBeenSet(false),
    m_maxReplayLatencyHasBeenSet(false),
    m_maxReplayLagHasBeenSet(false),
    m_rebalanceHasBeenSet(false),
    m_minDelayEliminateReserveHasBeenSet(false)
{
}

string ModifyReadOnlyGroupConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_readOnlyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readOnlyGroupName.c_str(), allocator).Move(), allocator);
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

    if (m_maxReplayLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplayLatency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReplayLatency, allocator);
    }

    if (m_maxReplayLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplayLag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReplayLag, allocator);
    }

    if (m_rebalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rebalance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rebalance, allocator);
    }

    if (m_minDelayEliminateReserveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDelayEliminateReserve";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minDelayEliminateReserve, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyReadOnlyGroupConfigRequest::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

void ModifyReadOnlyGroupConfigRequest::SetReadOnlyGroupId(const string& _readOnlyGroupId)
{
    m_readOnlyGroupId = _readOnlyGroupId;
    m_readOnlyGroupIdHasBeenSet = true;
}

bool ModifyReadOnlyGroupConfigRequest::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}

string ModifyReadOnlyGroupConfigRequest::GetReadOnlyGroupName() const
{
    return m_readOnlyGroupName;
}

void ModifyReadOnlyGroupConfigRequest::SetReadOnlyGroupName(const string& _readOnlyGroupName)
{
    m_readOnlyGroupName = _readOnlyGroupName;
    m_readOnlyGroupNameHasBeenSet = true;
}

bool ModifyReadOnlyGroupConfigRequest::ReadOnlyGroupNameHasBeenSet() const
{
    return m_readOnlyGroupNameHasBeenSet;
}

uint64_t ModifyReadOnlyGroupConfigRequest::GetReplayLagEliminate() const
{
    return m_replayLagEliminate;
}

void ModifyReadOnlyGroupConfigRequest::SetReplayLagEliminate(const uint64_t& _replayLagEliminate)
{
    m_replayLagEliminate = _replayLagEliminate;
    m_replayLagEliminateHasBeenSet = true;
}

bool ModifyReadOnlyGroupConfigRequest::ReplayLagEliminateHasBeenSet() const
{
    return m_replayLagEliminateHasBeenSet;
}

uint64_t ModifyReadOnlyGroupConfigRequest::GetReplayLatencyEliminate() const
{
    return m_replayLatencyEliminate;
}

void ModifyReadOnlyGroupConfigRequest::SetReplayLatencyEliminate(const uint64_t& _replayLatencyEliminate)
{
    m_replayLatencyEliminate = _replayLatencyEliminate;
    m_replayLatencyEliminateHasBeenSet = true;
}

bool ModifyReadOnlyGroupConfigRequest::ReplayLatencyEliminateHasBeenSet() const
{
    return m_replayLatencyEliminateHasBeenSet;
}

uint64_t ModifyReadOnlyGroupConfigRequest::GetMaxReplayLatency() const
{
    return m_maxReplayLatency;
}

void ModifyReadOnlyGroupConfigRequest::SetMaxReplayLatency(const uint64_t& _maxReplayLatency)
{
    m_maxReplayLatency = _maxReplayLatency;
    m_maxReplayLatencyHasBeenSet = true;
}

bool ModifyReadOnlyGroupConfigRequest::MaxReplayLatencyHasBeenSet() const
{
    return m_maxReplayLatencyHasBeenSet;
}

uint64_t ModifyReadOnlyGroupConfigRequest::GetMaxReplayLag() const
{
    return m_maxReplayLag;
}

void ModifyReadOnlyGroupConfigRequest::SetMaxReplayLag(const uint64_t& _maxReplayLag)
{
    m_maxReplayLag = _maxReplayLag;
    m_maxReplayLagHasBeenSet = true;
}

bool ModifyReadOnlyGroupConfigRequest::MaxReplayLagHasBeenSet() const
{
    return m_maxReplayLagHasBeenSet;
}

uint64_t ModifyReadOnlyGroupConfigRequest::GetRebalance() const
{
    return m_rebalance;
}

void ModifyReadOnlyGroupConfigRequest::SetRebalance(const uint64_t& _rebalance)
{
    m_rebalance = _rebalance;
    m_rebalanceHasBeenSet = true;
}

bool ModifyReadOnlyGroupConfigRequest::RebalanceHasBeenSet() const
{
    return m_rebalanceHasBeenSet;
}

uint64_t ModifyReadOnlyGroupConfigRequest::GetMinDelayEliminateReserve() const
{
    return m_minDelayEliminateReserve;
}

void ModifyReadOnlyGroupConfigRequest::SetMinDelayEliminateReserve(const uint64_t& _minDelayEliminateReserve)
{
    m_minDelayEliminateReserve = _minDelayEliminateReserve;
    m_minDelayEliminateReserveHasBeenSet = true;
}

bool ModifyReadOnlyGroupConfigRequest::MinDelayEliminateReserveHasBeenSet() const
{
    return m_minDelayEliminateReserveHasBeenSet;
}


