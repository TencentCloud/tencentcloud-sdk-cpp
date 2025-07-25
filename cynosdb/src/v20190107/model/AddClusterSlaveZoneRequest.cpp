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

#include <tencentcloud/cynosdb/v20190107/model/AddClusterSlaveZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AddClusterSlaveZoneRequest::AddClusterSlaveZoneRequest() :
    m_clusterIdHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_binlogSyncWayHasBeenSet(false),
    m_semiSyncTimeoutHasBeenSet(false)
{
}

string AddClusterSlaveZoneRequest::ToJsonString() const
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

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogSyncWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogSyncWay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_binlogSyncWay.c_str(), allocator).Move(), allocator);
    }

    if (m_semiSyncTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SemiSyncTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_semiSyncTimeout, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddClusterSlaveZoneRequest::GetClusterId() const
{
    return m_clusterId;
}

void AddClusterSlaveZoneRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AddClusterSlaveZoneRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string AddClusterSlaveZoneRequest::GetSlaveZone() const
{
    return m_slaveZone;
}

void AddClusterSlaveZoneRequest::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool AddClusterSlaveZoneRequest::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

string AddClusterSlaveZoneRequest::GetBinlogSyncWay() const
{
    return m_binlogSyncWay;
}

void AddClusterSlaveZoneRequest::SetBinlogSyncWay(const string& _binlogSyncWay)
{
    m_binlogSyncWay = _binlogSyncWay;
    m_binlogSyncWayHasBeenSet = true;
}

bool AddClusterSlaveZoneRequest::BinlogSyncWayHasBeenSet() const
{
    return m_binlogSyncWayHasBeenSet;
}

int64_t AddClusterSlaveZoneRequest::GetSemiSyncTimeout() const
{
    return m_semiSyncTimeout;
}

void AddClusterSlaveZoneRequest::SetSemiSyncTimeout(const int64_t& _semiSyncTimeout)
{
    m_semiSyncTimeout = _semiSyncTimeout;
    m_semiSyncTimeoutHasBeenSet = true;
}

bool AddClusterSlaveZoneRequest::SemiSyncTimeoutHasBeenSet() const
{
    return m_semiSyncTimeoutHasBeenSet;
}


