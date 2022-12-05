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

#include <tencentcloud/cynosdb/v20190107/model/SwitchProxyVpcRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SwitchProxyVpcRequest::SwitchProxyVpcRequest() :
    m_clusterIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_oldIpReserveHoursHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false)
{
}

string SwitchProxyVpcRequest::ToJsonString() const
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

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIpReserveHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIpReserveHours";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oldIpReserveHours, allocator);
    }

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SwitchProxyVpcRequest::GetClusterId() const
{
    return m_clusterId;
}

void SwitchProxyVpcRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SwitchProxyVpcRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string SwitchProxyVpcRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void SwitchProxyVpcRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool SwitchProxyVpcRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string SwitchProxyVpcRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void SwitchProxyVpcRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool SwitchProxyVpcRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t SwitchProxyVpcRequest::GetOldIpReserveHours() const
{
    return m_oldIpReserveHours;
}

void SwitchProxyVpcRequest::SetOldIpReserveHours(const int64_t& _oldIpReserveHours)
{
    m_oldIpReserveHours = _oldIpReserveHours;
    m_oldIpReserveHoursHasBeenSet = true;
}

bool SwitchProxyVpcRequest::OldIpReserveHoursHasBeenSet() const
{
    return m_oldIpReserveHoursHasBeenSet;
}

string SwitchProxyVpcRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void SwitchProxyVpcRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool SwitchProxyVpcRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}


