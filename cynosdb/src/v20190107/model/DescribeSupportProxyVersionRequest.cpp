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

#include <tencentcloud/cynosdb/v20190107/model/DescribeSupportProxyVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeSupportProxyVersionRequest::DescribeSupportProxyVersionRequest() :
    m_clusterIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_cynosVersionHasBeenSet(false),
    m_storageVersionHasBeenSet(false)
{
}

string DescribeSupportProxyVersionRequest::ToJsonString() const
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

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cynosVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cynosVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_storageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSupportProxyVersionRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeSupportProxyVersionRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeSupportProxyVersionRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeSupportProxyVersionRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void DescribeSupportProxyVersionRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool DescribeSupportProxyVersionRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string DescribeSupportProxyVersionRequest::GetZone() const
{
    return m_zone;
}

void DescribeSupportProxyVersionRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeSupportProxyVersionRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeSupportProxyVersionRequest::GetDbVersion() const
{
    return m_dbVersion;
}

void DescribeSupportProxyVersionRequest::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool DescribeSupportProxyVersionRequest::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

string DescribeSupportProxyVersionRequest::GetCynosVersion() const
{
    return m_cynosVersion;
}

void DescribeSupportProxyVersionRequest::SetCynosVersion(const string& _cynosVersion)
{
    m_cynosVersion = _cynosVersion;
    m_cynosVersionHasBeenSet = true;
}

bool DescribeSupportProxyVersionRequest::CynosVersionHasBeenSet() const
{
    return m_cynosVersionHasBeenSet;
}

string DescribeSupportProxyVersionRequest::GetStorageVersion() const
{
    return m_storageVersion;
}

void DescribeSupportProxyVersionRequest::SetStorageVersion(const string& _storageVersion)
{
    m_storageVersion = _storageVersion;
    m_storageVersionHasBeenSet = true;
}

bool DescribeSupportProxyVersionRequest::StorageVersionHasBeenSet() const
{
    return m_storageVersionHasBeenSet;
}


