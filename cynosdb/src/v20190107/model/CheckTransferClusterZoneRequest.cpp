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

#include <tencentcloud/cynosdb/v20190107/model/CheckTransferClusterZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CheckTransferClusterZoneRequest::CheckTransferClusterZoneRequest() :
    m_clusterIdHasBeenSet(false),
    m_dstZoneHasBeenSet(false),
    m_proxyZonesHasBeenSet(false)
{
}

string CheckTransferClusterZoneRequest::ToJsonString() const
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


string CheckTransferClusterZoneRequest::GetClusterId() const
{
    return m_clusterId;
}

void CheckTransferClusterZoneRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CheckTransferClusterZoneRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CheckTransferClusterZoneRequest::GetDstZone() const
{
    return m_dstZone;
}

void CheckTransferClusterZoneRequest::SetDstZone(const string& _dstZone)
{
    m_dstZone = _dstZone;
    m_dstZoneHasBeenSet = true;
}

bool CheckTransferClusterZoneRequest::DstZoneHasBeenSet() const
{
    return m_dstZoneHasBeenSet;
}

vector<ProxyZone> CheckTransferClusterZoneRequest::GetProxyZones() const
{
    return m_proxyZones;
}

void CheckTransferClusterZoneRequest::SetProxyZones(const vector<ProxyZone>& _proxyZones)
{
    m_proxyZones = _proxyZones;
    m_proxyZonesHasBeenSet = true;
}

bool CheckTransferClusterZoneRequest::ProxyZonesHasBeenSet() const
{
    return m_proxyZonesHasBeenSet;
}


