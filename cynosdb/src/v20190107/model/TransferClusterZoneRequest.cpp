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

#include <tencentcloud/cynosdb/v20190107/model/TransferClusterZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

TransferClusterZoneRequest::TransferClusterZoneRequest() :
    m_clusterIdHasBeenSet(false),
    m_dstZoneHasBeenSet(false),
    m_maxLagHasBeenSet(false),
    m_transferTypeHasBeenSet(false),
    m_dstSlaveZoneHasBeenSet(false),
    m_proxyZonesHasBeenSet(false)
{
}

string TransferClusterZoneRequest::ToJsonString() const
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

    if (m_dstZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstZone.c_str(), allocator).Move(), allocator);
    }

    if (m_maxLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxLag, allocator);
    }

    if (m_transferTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transferType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstSlaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstSlaveZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstSlaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyZones.begin(); itr != m_proxyZones.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TransferClusterZoneRequest::GetClusterId() const
{
    return m_clusterId;
}

void TransferClusterZoneRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TransferClusterZoneRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TransferClusterZoneRequest::GetDstZone() const
{
    return m_dstZone;
}

void TransferClusterZoneRequest::SetDstZone(const string& _dstZone)
{
    m_dstZone = _dstZone;
    m_dstZoneHasBeenSet = true;
}

bool TransferClusterZoneRequest::DstZoneHasBeenSet() const
{
    return m_dstZoneHasBeenSet;
}

int64_t TransferClusterZoneRequest::GetMaxLag() const
{
    return m_maxLag;
}

void TransferClusterZoneRequest::SetMaxLag(const int64_t& _maxLag)
{
    m_maxLag = _maxLag;
    m_maxLagHasBeenSet = true;
}

bool TransferClusterZoneRequest::MaxLagHasBeenSet() const
{
    return m_maxLagHasBeenSet;
}

string TransferClusterZoneRequest::GetTransferType() const
{
    return m_transferType;
}

void TransferClusterZoneRequest::SetTransferType(const string& _transferType)
{
    m_transferType = _transferType;
    m_transferTypeHasBeenSet = true;
}

bool TransferClusterZoneRequest::TransferTypeHasBeenSet() const
{
    return m_transferTypeHasBeenSet;
}

string TransferClusterZoneRequest::GetDstSlaveZone() const
{
    return m_dstSlaveZone;
}

void TransferClusterZoneRequest::SetDstSlaveZone(const string& _dstSlaveZone)
{
    m_dstSlaveZone = _dstSlaveZone;
    m_dstSlaveZoneHasBeenSet = true;
}

bool TransferClusterZoneRequest::DstSlaveZoneHasBeenSet() const
{
    return m_dstSlaveZoneHasBeenSet;
}

vector<ProxyZone> TransferClusterZoneRequest::GetProxyZones() const
{
    return m_proxyZones;
}

void TransferClusterZoneRequest::SetProxyZones(const vector<ProxyZone>& _proxyZones)
{
    m_proxyZones = _proxyZones;
    m_proxyZonesHasBeenSet = true;
}

bool TransferClusterZoneRequest::ProxyZonesHasBeenSet() const
{
    return m_proxyZonesHasBeenSet;
}


