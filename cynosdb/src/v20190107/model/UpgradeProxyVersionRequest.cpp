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

#include <tencentcloud/cynosdb/v20190107/model/UpgradeProxyVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

UpgradeProxyVersionRequest::UpgradeProxyVersionRequest() :
    m_clusterIdHasBeenSet(false),
    m_srcProxyVersionHasBeenSet(false),
    m_dstProxyVersionHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_isInMaintainPeriodHasBeenSet(false)
{
}

string UpgradeProxyVersionRequest::ToJsonString() const
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

    if (m_srcProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_isInMaintainPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInMaintainPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isInMaintainPeriod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeProxyVersionRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpgradeProxyVersionRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpgradeProxyVersionRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpgradeProxyVersionRequest::GetSrcProxyVersion() const
{
    return m_srcProxyVersion;
}

void UpgradeProxyVersionRequest::SetSrcProxyVersion(const string& _srcProxyVersion)
{
    m_srcProxyVersion = _srcProxyVersion;
    m_srcProxyVersionHasBeenSet = true;
}

bool UpgradeProxyVersionRequest::SrcProxyVersionHasBeenSet() const
{
    return m_srcProxyVersionHasBeenSet;
}

string UpgradeProxyVersionRequest::GetDstProxyVersion() const
{
    return m_dstProxyVersion;
}

void UpgradeProxyVersionRequest::SetDstProxyVersion(const string& _dstProxyVersion)
{
    m_dstProxyVersion = _dstProxyVersion;
    m_dstProxyVersionHasBeenSet = true;
}

bool UpgradeProxyVersionRequest::DstProxyVersionHasBeenSet() const
{
    return m_dstProxyVersionHasBeenSet;
}

string UpgradeProxyVersionRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void UpgradeProxyVersionRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool UpgradeProxyVersionRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string UpgradeProxyVersionRequest::GetIsInMaintainPeriod() const
{
    return m_isInMaintainPeriod;
}

void UpgradeProxyVersionRequest::SetIsInMaintainPeriod(const string& _isInMaintainPeriod)
{
    m_isInMaintainPeriod = _isInMaintainPeriod;
    m_isInMaintainPeriodHasBeenSet = true;
}

bool UpgradeProxyVersionRequest::IsInMaintainPeriodHasBeenSet() const
{
    return m_isInMaintainPeriodHasBeenSet;
}


